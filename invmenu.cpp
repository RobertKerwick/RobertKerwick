#include <iostream>
#include <iomanip>
#include "invmenu.h"

using namespace std;

void invMenu()
{
	//Info Storage
	int selection;

	//Output
	cout << setw(40) << "Serendipity Booksellers" << endl;
	cout << setw(37) << "Inventory Database" << endl;
	cout << endl;

	cout << "1. Look-Up a Book" << endl;
	cout << "2. Add a Book" << endl;
	cout << "3. Edit a Book's Record" << endl;
	cout << "4. Delete a Book" << endl;
	cout << "5. Return to Main Menu" << endl;
	cout << endl;

	cout << "Enter your choice: ";
	cin >> selection;

	switch (selection)
	{
	case 1: lookUpBook();
			break;
	case 2: addBook();
			break;
	case 3: editBook();
			break;
	case 4: deleteBook();
			break;
	default: cout << "Please try again and enter a number in the range 1-4." << endl;
	}
}

void lookUpBook()
{
	cout << "You selected Look Up Book." << endl;
}

void addBook()
{
	cout << "You selected Add Book" << endl;
}

void editBook()
{
	cout << "You selcted Edit Book" << endl;
}

void deleteBook()
{
	cout << "You selected Delete Book" << endl;
}