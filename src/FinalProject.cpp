// FinalProject.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>	
#include "DivSales.h"

const int SIZE = 4;

int main() {
	int pos = 0, sub = 0;

	DivSales Region[SIZE];
	for (int i = 0; i < SIZE; i++) {
		Region[i].setName();
		Region[i].setQuarter();
	}

	std::cout << std::endl;

	for (int i = 0; i < SIZE; i++) {
		Region[i].getName();
		Region[i].getAllQuarter();
		std::cout << "Total for this Region is: " << Region[i].regionTotal() << std::endl << std::endl;
	}

	std::cout << "Enter Region number and position for the region: ";
	std::cin >> pos >> sub;

	std::cout << "Region: " << Region[pos - 1].getName() << std::endl;
	Region[pos - 1].getQuarter(sub);

	std::cout << std::endl;

	for (int i = 0; i < SIZE; i++) {
		Region[i].setTotalSales();
	}
	Region[1].getTotalSales();

	std::cin.ignore();
	std::cin.get();
	return 0;
}

