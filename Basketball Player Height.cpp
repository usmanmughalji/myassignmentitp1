#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int Feet   = 74 / 12,
		Inches = 74 % 12;

	cout << "The Star Player Is " << Feet << "/" << Inches << " Feet Tall.";
	getch();
	return 0;
}
