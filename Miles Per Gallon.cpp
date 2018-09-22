#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int 	Miles 	= 312,
			Gallons = 16,
			MPG		= Miles / Gallons;

	cout << "This Car Gets " << MPG <<" Miles Per Gallon.\n";
	getch();
	return 0;
}
