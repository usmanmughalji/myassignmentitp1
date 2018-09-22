#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double FullTank = 20,
		   Town 	= FullTank * 23.5,
		   Highway 	= FullTank * 28.9;

	cout << "On One Tank Of Gas This Car Can Travel A Distance Of ";
	cout << Town << " Miles In Town And " << Highway << " Miles On A Highway.";
	getch();
	return 0;
}
