#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float Cost 	 = 14.95,
		   PProfit	 = .35,
		   SellPrice = Cost * (1 + PProfit);

	cout << "The Selling Price On A Circuit Board ";
	cout << "That Costs $" << Cost << " is $" << SellPrice;
	getch();
	return 0; 
}
