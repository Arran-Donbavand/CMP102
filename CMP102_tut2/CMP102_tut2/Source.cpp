#include <iostream>
#include "Customers.h"
using namespace std;

int main()
{
	Customers customer;
	string ID="";
	cin >> ID;
	customer.setID(ID);
	cout << customer.getID() << endl;
}