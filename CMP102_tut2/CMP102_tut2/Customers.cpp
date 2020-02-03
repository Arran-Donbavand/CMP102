#include "Customers.h"
#include <string>
using namespace std;

Customers::Customers()
{
	if (ID == 0)
	{
		this->ID = 1;
		ID += 1;
	}
	else
	{
		this->ID = ID;
		ID += 1;
	}
}
Customers::~Customers()
{
}

