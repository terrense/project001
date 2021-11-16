#include<iostream>
#include "stock.h"

int main() {

	{
		using std::cout;
		cout << "Using Constructors to create new objects\n";
		Stock stock1("Smith Terrence", 12, 20.0);  //syntax 1
		stock1.show();
		Stock stock2("Vadim Shapoon DragonBall", 2, 2.0);
		stock2.show();

		cout << "Assigning stock1 to stock2: \n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2 now:\n";
		stock1.show();
		stock2.show();

		cout << "using a constructor to reset an object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done.\n";

	}


	return 0;
}