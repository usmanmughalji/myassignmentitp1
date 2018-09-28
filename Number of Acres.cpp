#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	float acre = 43450;
	float land	= 312840;
	
	float conversion = land / acre;
	
	cout << "The Total Land = " << land <<" sq/ft. \n"<<"After Conversion = " << conversion <<" acres.";
	getch();
	return 0;
}
