#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Info storage
	int option;

	//Outputs
	cout << setw(40) << "Serendipity Booksellers" << endl;
	cout << setw(32) << "Reports" << endl;
	cout << endl;

	cout << "1. Inventory Listing" << endl;
	cout << "2. Inventory Wholesale Value" << endl;
	cout << "3. Inventory Retail Value" << endl;
	cout << "4. Listing by Quantity" << endl;
	cout << "5. Listing by Cost " << endl;
	cout << "6. Listing by Age " << endl;
	cout << "7. Return to the Main Menu " << endl;
	cout << endl;

	cout << "Enter Your Choice: ";
	cin >> option;

	//Menu Looping
	if (option < 1 || option > 7)
	{
		do
		{
			cout << "Please enter a number in the range 1-7." << endl;
			cout << "Enter Your Choice: ";
			cin >> option;
		} while (option < 1 || option > 7);
	}
	else
	{
		while (option != 7)
		{
			cout << "You selected item " << option << "." << endl;
			cout << "Enter Your Choice: ";
			cin >> option;
		}
	}

	return 0;
}