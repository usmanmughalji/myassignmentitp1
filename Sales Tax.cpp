#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int 	PPrice	 = 95;
	float	State	 = PPrice * .065,
			County	 = PPrice * .02,
			TotalTax = State + County;

	cout << "Purchase Price = $" << PPrice << endl;
	cout << "State Tax = $" << State << endl;
	cout << "County Tax = $" << County << endl;
	cout << "Total Tax = $" << TotalTax << endl;
	getch();
	return 0;
}
