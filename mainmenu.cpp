#include <iostream>
#include <iomanip>
#include <cctype>
#include "cashier.h"
#include "invmenu.h"
#include "bookinfo.h"
#include "reports.h"

using namespace std;

int main()
{
	//Info Storage
	int choice;

	//Outputs
	cout << setw(40) << "Serendipity Booksellers" << endl;
	cout << setw(33) << "Main Menu" << endl;
	cout << endl;

	cout << "1. Cashier Module" << endl;
	cout << "2. Inventory Database Module" << endl;
	cout << "3. Report Module" << endl;
	cout << "4. Exit" << endl;
	cout << endl;

	cout << "Enter Your Choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1: cashier();
			break;
	case 2: invMenu();
			break;
	case 3: reports();
			break;
	default: cout << "Please try again and enter a number in the range 1-4." << endl;
	}

	return 0;
}