#include <iostream>
#include <iomanip>
#include "reports.h"

using namespace std;

void reports()
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

	switch (option)
	{
	case 1: repListing();
			break;
	case 2: repWholesale();
			break;
	case 3: repRetail();
			break;
	case 4: repQty();
			break;
	case 5: repCost();
			break;
	case 6: repAge();
			break;
	default: cout << "Please try again and enter a number in the range 1-6." << endl;
	}
}

void repListing()
{
	cout << "You selected Inventory Listing." << endl;
}

void repWholesale()
{
	cout << "You selected Inventory Whole Sale." << endl;
}

void repRetail()
{
	cout << "You selected Inventory Retail Value." << endl;
}

void repQty()
{
	cout << "You selected Listing by Quantity." << endl;
}

void repCost()
{
	cout << "You selected Listing by Cost." << endl;
}

void repAge()
{
	cout << "You selected Listing by Age." << endl;
}