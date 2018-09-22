#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	double gallon1 = 340;
	double fencelength = 100;
	double fenceheight = 6;
	double area = fencelength * fenceheight;
	double gallons = area - 340;
	double totalgallons = gallons / 340;
	double result1 = totalgallons + 1;
	double coats = result1 * 2;
	double finalresult = coats;
	cout<< gallon1 <<endl << fencelength <<endl << fenceheight <<endl << area <<endl << gallons << endl << totalgallons << endl << result1 <<endl << coats <<endl << finalresult << endl;
	getch();
	return 0;
	
	
}
