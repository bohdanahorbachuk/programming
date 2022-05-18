#include "Header.h"

int main() {
	string text;
	ifstream fin;
	fin.open("in1.txt");
	try {
		if (!fin.is_open()) {
			throw "Error!Not open!";
		}
	}
	catch (char* str) {
		cout << str;
	}
	string* array = new string[30];
	int n = 0;


	if (fin.is_open()) {
		while (getline(fin, text)) {

			array[n++] = text;
		}

	}
	fin.close();

	string path1 = "in2.txt";
	string path2 = "in3.txt";
	ReadText(path1, array, n);
	ReadText(path2, array, n);
	ofstream main1;
	main1.open("out.txt");
	main1 << "Result:\n";
	for (int i = 0; i < n; i++) {
		if (array[i] != "") {
			main1 << array[i] << "\n";

		}
	}

	delete[] array;

}