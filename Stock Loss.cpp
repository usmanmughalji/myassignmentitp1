#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double NumOfShares  = 750,
		   CostOfShares = NumOfShares * 35.00,
		   SellPrice 	= NumOfShares * 31.15,
		   Loss			= CostOfShares - SellPrice;

	cout << "The Total Amount Paid For The Stock = $" << CostOfShares << endl;
	cout << "The Total Amount Received From Selling The Stock = $" << SellPrice << endl;
	cout << "The Total Amount Of Money Lost = $" << Loss << endl;
	getch();
	return 0;
}
