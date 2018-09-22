#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double Century = 100,
		   MM 	   = 1.8 * Century,
		   CM 	   = MM * 0.1,
		   In 	   = CM * 0.3937;

	cout << "Over the past century the Earth's ocean levels have risen an average of:\n";
	cout << MM << " millimeters per year.\n";
	cout << CM << " centimeters per year.\n";
	cout << In << " inches per year.\n";
	getch();
	return 0;
}
