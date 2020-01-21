#pragma once
#include <string>
#include<iostream>

class Customers
{
	private:
		std::string ID = "";
		int numberOfAccounts = 0;
	public:
		Customers();
		~Customers();
		std::string setID(std::string);

		std::string getID()
		{
			return ID;
		}
		void setNumberOfAccounts(int ownedAccounts)
		{
			numberOfAccounts = ownedAccounts;
		}
		int getNumberOfAccounts()
		{
			return numberOfAccounts;
		}
};

