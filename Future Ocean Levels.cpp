#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float RiseMM = 3.1 * 15,
		   RiseCM = RiseMM * 0.1,
		   RiseIn = RiseMM * 0.0393701;

	cout << "During the next 15 years ocean levels are expected to rise:\n";
	cout << RiseCM << " centmeters per year.\n";	
	cout << RiseIn << " inches per year.\n";
	getch();
	return 0;
}
