#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int SALES_TAX = 0.06;

int main()
{
	//Info Storage
	string date, isbn, title;
	int quantity;
	double price, total, subtotal, tax;
	char answer;

	//Info input
	cout << "Date: ";
	cin >> date;
	cout << "Quantity of Book: ";
	cin >> quantity;
	cout << "ISBN: ";
	cin >> isbn;
	cout << "Price: ";
	cin >> price;
	cin.ignore();
	cout << "Title: ";
	getline(cin, title); 

	//Calculations - can be moved to a function
	subtotal = price * quantity;
	tax = subtotal * SALES_TAX;
	total = subtotal + tax;

	//Outputs
	cout << "Serendipity Booksellers" << endl;
	cout << endl;

	cout << "Date: " << date << endl;
	cout << endl;

	cout << "Qty" << setw(6) << "ISBN" << setw(17) << "Title" << setw(32) << "Price" << setw(10) << "Total" << endl;
	cout << "_____________________________________________________________________" << endl;
	cout << quantity << setw(17) << isbn << setw(22) << title << setw(15) << setprecision(2) << fixed << "$" << price << setw(3)
		 << "$" << subtotal << endl;
	cout << endl;

	cout << setprecision(2) << endl;
	cout << setw(29) << "Subtotal" << setw(40) << subtotal << endl;
	cout << setw(24) << "Tax" << setw(45) << tax << endl;
	cout << setw(26) << "Total" << setw(43) << total <<  endl;
	cout << endl;

	cout << "Thank You For Shopping Serendipity!" << endl;

	cout << "Would you like to process another transaction? Y for yes and anything else for no." << endl;
	cin >> answer;
	toupper(answer);

	//Loop for extra transactions - follow same notes as above
	if (answer == 'Y')
	{
		do
		{
			cout << "Date: ";
			cin >> date;
			cout << "Quantity of Book: ";
			cin >> quantity;
			cout << "ISBN: ";
			cin >> isbn;
			cout << "Price: ";
			cin >> price;
			cin.ignore();
			cout << "Title: ";
			getline(cin, title);

			subtotal = price * quantity;
			tax = subtotal * SALES_TAX;
			total = subtotal + tax;

			cout << "Serendipity Booksellers" << endl;
			cout << endl;

			cout << "Date: " << date << endl;
			cout << endl;

			cout << "Qty" << setw(6) << "ISBN" << setw(17) << "Title" << setw(32) << "Price" << setw(10) << "Total" << endl;
			cout << "_____________________________________________________________________" << endl;
			cout << quantity << setw(17) << isbn << setw(22) << title << setw(15) << setprecision(2) << fixed << "$" << price << setw(3)
				<< "$" << subtotal << endl;
			cout << endl;

			cout << setprecision(2) << endl;
			cout << setw(29) << "Subtotal" << setw(40) << subtotal << endl;
			cout << setw(24) << "Tax" << setw(40) << tax << endl;
			cout << setw(26) << "Total" << setw(40) << total << endl;
			cout << endl;

			cout << "Thank You For Shopping Serendipity!" << endl;

			cout << "Would you like to process another transaction? Y for yes and anything else for no." << endl;
			cin >> answer;
			toupper(answer);
		} while (answer == 'Y');
	}
	else
	{
		return 0;
	}
	return 0;
}