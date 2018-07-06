#include "DivSales.h"

float DivSales :: sales[4] = {0,0,0,0};

DivSales :: DivSales (){
	
}

DivSales :: DivSales (std::string n = "", float q[4] = 0){
	name = n;
	for(int i = 0; i <=3 ; i++)
		quarter[i] = q[i];
}

DivSales :: ~DivSales (){
	
}

/******
	This function takes no argumnents and allows input to the variable
	name inside the DivSales.h header file
******/
void DivSales :: setName(){
	std::cout << "Name of Region: ";
	getline(std::cin, name);
	
}

/******
	This function takes no argumnents and is a constant function.
	The function outputs the variable name.
******/
std::string DivSales :: getName() const{
	return name;	
}

/******
	This function takes no argumnents and allows input to the array
******/
void DivSales :: setQuarter(){
	for(int i = 0; i <= 3; i++){
		std::cout << "Enter the amount for Quarter " << i+1 << ": ";
		std::cin >> quarter[i];
		std::cin.ignore();
	}	
}

/******
	This function takes no argumnents and is a constant function.
	The function outputs a specific part of the array.
******/
void DivSales :: getQuarter(int pos) const{
	std::cout << "Amount for Quarter " << pos << " is: " << quarter[pos-1] << std::endl;
}

/******
	This function takes no argumnents and is a constant function.
	The function outputs the entire array.
******/
void DivSales :: getAllQuarter() const{
	for(int j = 0; j <= 3 ; j++){
		std::cout << "Amount for Quarter " << j+1 << ": " << quarter[j] << std::endl;
	}
	
}

/******
	This function takes no argumnents and sets sales to plus-equal to quarter
	from position i
******/
void DivSales :: setTotalSales(){
	for(int i = 0; i <= 3; i++)
		sales[i] += quarter[i];
}

float DivSales :: regionTotal() const{
	float total = 0;
	
	for(int i = 0; i <= 3; i++){
		total += quarter[i];
	}
	
	return total;
}

/******
	This function takes no argumnents and is a constant function.
	The function outputs all the arrays.
******/
void DivSales :: getTotalSales() const{
	for(int i = 0; i <= 3; i++)
		std::cout << "Total for All Region's Quarter " << i << ": " << sales[i] << std::endl;
}
