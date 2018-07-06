#include <iostream>
#include <string>


#ifndef DIVSALES_H
#define DIVSALES_H


class DivSales{
	private:
		std::string name;
		float quarter[4];
		static float sales[4];
		//variables
		
	public:
		DivSales();
		DivSales(std::string , float []);
		~DivSales();
		
		void setName();
		std::string getName() const;
		
		void setQuarter();
		void getAllQuarter() const;
		void getQuarter(int) const;
		
		void setTotalSales();
		void getTotalSales() const;	
		
		float regionTotal() const;
};

#endif
