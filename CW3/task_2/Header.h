#include <iostream>
#include <string>
#include <fstream>
using namespace std;



void ReadText(string path, string* array, int& n) {
	string our_line;
	bool catch1;
	ifstream fin;
	bool rep;
	fin.open(path);
	if (fin.is_open()) {
		while (getline(fin, our_line)) {
			catch1 = false;
			rep = false;
			for (int i = 0; i < n; i++) {
				if (our_line == array[i]) {
					array[i] = "";
					rep = true;
				}
			}
			if (!rep) {
				for (int i = 0; i < n; i++) {
					if (array[i] == "") {
						array[i] = our_line;
						catch1 = true;
					}
				}

			}
			if (!catch1 && !rep) {
				array[n++] = our_line;
			}
		}
	}
}
