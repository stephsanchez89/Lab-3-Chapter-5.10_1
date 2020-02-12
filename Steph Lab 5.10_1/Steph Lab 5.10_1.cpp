// Steph Lab 5.10_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	double ProductionHours,
		PreProductionHours,
		ProducersHours,
		ProductionCost,
		PreProductionCost,
		ProducersCost,
		TotalCost;

	const float PRODUCTION_RATE = 100.00F;
	const float PRE_PRODUCTION_RATE = 60.00F;
	const float PRODUCERS_RATE = 40.00F;


	cout << "Enter Production Hours: ";
	cin >> ProductionHours;
	cout << "\nEnter Pre-Production Hours: ";
	cin >> PreProductionHours;
	cout << "\nEnter Producers Hours: ";
	cin  >> ProducersHours;

	ProductionCost = ProductionHours * PRODUCTION_RATE;
	PreProductionCost = PreProductionHours * PRE_PRODUCTION_RATE;
	ProducersCost = ProducersHours * PRODUCERS_RATE;

	TotalCost = ProductionCost + PreProductionCost + ProducersCost;

		cout << "\n\t\tCar Dealership Bill\n";
		cout << "\n\nProduction Cost: ";
		cout << ProductionCost ;

		cout << "\n\nPre-Production Cost: ";
		cout << PreProductionCost ;

		cout << "\n\nProducers Cost: ";
		cout << ProducersCost ;

		cout << "\n\nWeekly Total Cost: ";
		cout << TotalCost << endl;

		return 0;







}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
