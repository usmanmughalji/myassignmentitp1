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
	cout<<"Gallon of 1 Paint is Cover = "  << gallon1 << " square feet area" <<endl << "Length of Fence = " << fencelength << " feet" <<endl << "Length of Height = " << fenceheight << " feet" <<endl <<"Total Area of Fence = " << area <<" square feet" << endl <<"According To 340 square feet We Have = " <<result1 <<" Gallons" <<endl <<"For Doing Two Coats of Paint on Mentioned Area We Need = " << coats <<" Gallons" <<endl;
	getch();
	return 0;
	
	
}
