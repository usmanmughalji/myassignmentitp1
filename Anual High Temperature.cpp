#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	cout<<"Temperature of New York City In High July = " << "85 Degrees\n" <<endl;
	cout<<"Temperature of Denver In High July = " << "88 Degrees\n"<<endl;
	cout<<"Temperature of Pheonix City In High July = " << "106 Degrees\n"<<endl;
	double percentagegetrise = .02;
	double city1 = 85;
	double city2 = 88;
	double city3 = 106;
	double increase1 = percentagegetrise * city1 + 85;
	double increase2 = percentagegetrise * city2 + 88;
	double increase3 = percentagegetrise * city3 + 106;
	double average = increase1 + increase2 + increase3;
	double result = average / 3;
	cout<<"Temperature Rise By 2% In New York City = " << increase1 << " Degrees\n" <<endl;
	cout<<"Temperature Rise By 2% In Denver = " << increase2 << " Degrees\n" <<endl;
	cout<<"Temperature Rise By 2% In Pheonix = " << increase3 << " Degrees\n" <<endl;
	cout<<"Average = " << result << " Degrees Will Be The New Average For Each City\n" <<endl;
	getch();
	return 0;
}
