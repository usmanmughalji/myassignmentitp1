#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float Annual 	= 39000,
		   BiMTH	= Annual / 24,
		   BiWeek 	= Annual / 26;

	cout << "Annual Earnings	 = $" << Annual << endl;
	cout << "Bi-Monthly Earnings = $" << BiMTH << endl;
	cout << "Bi-Weekly Earnings  = $" << BiWeek << endl;
	getch();
	return 0;
}
