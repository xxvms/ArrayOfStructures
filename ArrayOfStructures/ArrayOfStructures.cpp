// ArrayOfStructures.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>

struct part
{
	int modelNumber; //ID number of widget
	int partNumber; // ID number of widget part
	double cost;  // cost of the part

};

int main()
{
	const int SIZE = 4;
	int n;

	part aPart[SIZE]; //define array of struct

	for (n = 0; n < SIZE; n++) // get values for all structures
	{
		std::cout << std::endl;
		std::cout << "Please enter model number: ";
		std::cin >> aPart[n].modelNumber; // get model number
		std::cout << "Please enter part number: ";
		std::cin >> aPart[n].partNumber; // get part number
		std::cout << "Please provide cost: ";
		std::cin >> aPart[n].cost;
	}
	std::cout << std::endl;
	for (n = 0; n < SIZE; n++) //show values for all members
	{
		std::cout << "Model " << std::setiosflags(std::ios::fixed) 
			<< std::setiosflags(std::ios::showpoint) << std::setprecision(2) << aPart[n].modelNumber;
		std::cout << " Part " << std::setiosflags(std::ios::fixed)
			<< std::setiosflags(std::ios::showpoint) << std::setprecision(2) << aPart[n].partNumber;
		std::cout << " Cost " << std::setiosflags(std::ios::fixed)
			<< std::setiosflags(std::ios::showpoint) << std::setprecision(2) << aPart[n].cost;
		std::cout << std::endl;
	}

	system("pause");
    return 0;
}

