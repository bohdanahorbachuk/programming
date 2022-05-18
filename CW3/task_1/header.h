#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
struct Book
{
	char name[30];
	string author;
	int date;
	char genre[30];
};
void writeStructToConsole(Book book)   
{
	cout.width(16);
	cout << "Name: " << book.name << endl;
	cout.width(16);
	cout << "author: " << book.author << endl;
	cout.width(16);
	cout << "year: " << book.date << endl;
	cout << setw(16) << "genre: " << book.genre << endl;
}
void writeMasToConsole(Book* mas, int n) 
{
	for (int i = 0; i < n; i++)  
	{
		writeStructToConsole(mas[i]);
		cout << endl;
	}
}
void readMasFromFile(ifstream& file, Book*& mas, int& n)         
{
	file >> n;
	mas = new Book[n];

	for (int i = 0; i < n; i++)
	{
		file >> mas[i].name >> mas[i].author >> mas[i].date >> mas[i].genre;
	}
}
void writeMasToFile(ofstream& file, Book* mas, int n)
{
	file << n << endl;
	for (int i = 0; i < n; i++)
	{
		file << setw(12) << mas[i].name << " " << setw(4) << mas[i].author << " " << setw(3) << mas[i].date << " " << setprecision(2) << setw(6) << setw(10) << mas[i].genre;
		file << endl;
	}
}
void TheOldestBook(Book* mas, int n)
{
	int indexOfTheOldestBook = 0;
	int theOldestYear = mas[0].date;
	for (int i = 1; i < n; ++i)
	{
		if (mas[i].date < theOldestYear)
		{
			theOldestYear = mas[i].date;
			indexOfTheOldestBook = i;
		}
	}
	cout << "the oldest book:" << endl;
	writeStructToConsole(mas[indexOfTheOldestBook]);
}
void sortByName(Book* mas, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (strcmp(mas[i].name, mas[j].name))
			{
				swap(mas[i], mas[j]);
			}
		}
	}
}
void sortByGenre(Book* mas, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (strcmp(mas[i].genre, mas[j].genre))
			{
				swap(mas[i], mas[j]);
			}
		}
	}
}
