#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double MealCost = 44.50,
		   Tax		= MealCost * .0675,
		   Tip 		= (MealCost + Tax) * .15,
		   TBill	= MealCost + Tax + Tip;

	cout << "Meal Cost = $" << MealCost << endl;
	cout << "Tax Amount = $" << Tax << endl;
	cout << "Tip Amount = $" << Tip << endl;
	cout << "Total Bill = $" << TBill << endl;
	getch();
	return 0;
}
