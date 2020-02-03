#pragma once
#include <string>
#include<iostream>

class Customers
{
	private:
		int ID = 0;
		int numberOfAccounts = 0;
	public:
		Customers();
		~Customers();
		int getID()
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

