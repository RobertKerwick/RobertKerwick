#include <iostream>
#include <iomanip>

using namespace std;

int main()
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

	//Menu selection loop
	if (selection < 1 || selection > 5)
	{
		do
		{
			cout << "Please enter a number in the range 1-5." << endl;
			cout << "Enter your choice: ";
			cin >> selection;
		} while (selection < 1 || selection > 5);
	}
	else
	{
		while (selection != 5)
		{
			cout << "You selected item " << selection << "." << endl;
			cout << "Enter Your Choice: ";
			cin >> selection;
		}
	}

	return 0;
}