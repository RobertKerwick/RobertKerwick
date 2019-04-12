#include <iostream>
#include <iomanip>
#include <cctype>

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

	//Menu loop
	if (choice < 1 || choice > 4)
	{
		do
		{
			cout << "Please enter a number in the range 1-4." << endl;
			cout << "Enter Your Choice: ";
			cin >> choice;
		} while (choice < 1 || choice > 4);
	}
	else
	{
		while (choice != 4)
		{
			cout << "You selected item " << choice << "." << endl;
			cout << "Enter Your Choice: ";
			cin >> choice;
		}
	}

	return 0;
}