#include <iostream>
#include <string>
using namespace std;
int main()
{
	string operation;
	int fine = 0, usernot = 0;
	cout << "Press 1 for Borrowing the Book, 2 for Returning it, 3 if you've to give fine" << endl;
	cin >> usernot;
	switch (usernot)
	{
	case 1:
		operation = "borrow";
		cout << "Borrow your favorite book";
		break;
	case 2:
		operation = "return";
		cout << "Return your book";
		break;
	case 3:
		operation = "fine";
		fine = fine + 1;
		cout << "Fine = $1 for not returning book";
		break;
	default:
		cout << "Invalid Error";
		break;
	}
	cin >> usernot;
	cout << "You have finally submitted the book and this is your total fine = " << fine << endl;
}