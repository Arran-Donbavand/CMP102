#include "Customers.h"
#include <string>
using namespace std;

Customers::Customers()
{
	
}
Customers::~Customers()
{
}

std::string Customers::setID(string IDToSet)
{
	
	if (ID == "")
	{
		ID = IDToSet;
	}
	else
	{
		std::cout << "Error: ID Has already been set \n";
	}
	return ID;
}