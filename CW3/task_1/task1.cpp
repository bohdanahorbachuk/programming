#include "header.h"
int main()
{
	int n = 0;
	Book* books;
	ifstream inputFile1("books.txt", ios::in);
	readMasFromFile(inputFile1, books, n);         
	inputFile1.close();
	writeMasToConsole(books, n);

	ofstream result("result.txt", ios::out);
	writeMasToFile(result, books, n);             
	result.close();

	TheOldestBook(books, n);

	system("pause");
	return 0;
}