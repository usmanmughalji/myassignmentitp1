#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	cout<<"Temperature of New York City In High July = " << "85 Degrees\n" <<endl;
	cout<<"Temperature of Denver In High July = " << "88 Degrees\n"<<endl;
	cout<<"Temperature of Pheonix City In High July = " << "106 Degrees\n"<<endl;
	float percentagegetrise = .02;
	float city1 = 85;
	float city2 = 88;
	float city3 = 106;
	float increase1 = percentagegetrise * city1 + 85;
	float increase2 = percentagegetrise * city2 + 88;
	float increase3 = percentagegetrise * city3 + 106;
	float average = increase1 + increase2 + increase3;
	float result = average / 3;
	cout<<"Temperature Rise By 2% In New York City = " << increase1 << " Degrees\n" <<endl;
	cout<<"Temperature Rise By 2% In Denver = " << increase2 << " Degrees\n" <<endl;
	cout<<"Temperature Rise By 2% In Pheonix = " << increase3 << " Degrees\n" <<endl;
	cout<<"Average = " << result << " Degrees Will Be The New Average For Each City\n" <<endl;
	getch();
	return 0;
}
