#include <iostream>
#include"Currency.h"
int main()
{
	setlocale(0, "");
	Currency c(100,20,"wood","Ukraine", 1,2014,"qwerty123");
	cout<<*c.getBanknote();
	cout << "\n";
	cout << c.getOrigin_country();
	cout << "\n";
	cout<<*c.getYear();
	cout << "\n";
	cout<<*c.getNow_wear();
	cout << "\n";
	c.next_wear();
}

