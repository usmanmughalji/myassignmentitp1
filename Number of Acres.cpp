#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	double acre = 43450;
	double land	= 312840;
	
	double conversion = land / acre;
	
	cout << "The Total Land = " << land <<" sq/ft. \n"<<"After Conversion = " << conversion <<" acres.";
	getch();
	return 0;
}
