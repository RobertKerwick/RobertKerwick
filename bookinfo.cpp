#include <iostream>
#include <iomanip>
#include "bookinfo.h"

using namespace std;

void bookInfo()
{
	cout << setw(40) << "Serendipity Booksellers" << endl;		//Header for the output
	cout << setw(37) << "Book Information" << endl;
	cout << endl;

	//Book Info Displays - input information not requested
	cout << "ISBN:" << endl;
	cout << "Title:" << endl;
	cout << "Author:" << endl;
	cout << "Publisher:" << endl;
	cout << "Date Added:" << endl;
	cout << "Quantity-On-Hand:" << endl;
	cout << "Wholesale Cost:" << endl;
	cout << "Retail Price:" << endl;
}