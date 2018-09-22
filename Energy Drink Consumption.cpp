#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int Customers  = 16500,
		BuyEDrinks = Customers * .15,
		Citrus 	   = BuyEDrinks * .52;

	cout << "Approximately " << BuyEDrinks << " customers in the survey\n";
	cout <<	"purchase one or more energy drinks per week.\n\n";
	cout << "Approximately " << Citrus << " customers in the survey\nprefer ";
	cout << "citrus flavored energy drinks.\n";
	getch();
	return 0;
}
