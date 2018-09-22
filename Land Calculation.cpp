#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double Acres   = .5,
		   SqFeet  = Acres * 43560,
		   SqMeter = SqFeet / 10.7639;

	cout << "In " << Acres << " Acres Of Land = " << SqFeet << " square feet." <<" \nIn " << Acres <<" Acres Of Land = " << SqMeter << " square meter.";
	getch();
	return 0;	
}
