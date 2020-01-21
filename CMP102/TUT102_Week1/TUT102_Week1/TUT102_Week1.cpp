#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
bool Bullseye(float);
void newSimulation(int&, int&, float&);
int TotalNumberOfThrows = 0;
int TotalNumberOfBulls = 0;
float overallAccuracy = 0;
using namespace std;
int main()
{
	srand(time(0));
	float accuracy = 0;
	int numberOfThrows = 0;
	int NumberOfBulls = 0;
	int NumberOfSimulations = 0;
	int NumOfGames = 0;
	float fixedAccuracy = 70;
	char answer = 'n';
	int avgNumOfThrows = 0;

	for (; NumberOfBulls < 10;)
	{
		if (Bullseye(fixedAccuracy) == true)
		{
			NumberOfBulls++;
			numberOfThrows++;
			accuracy = ((float)NumberOfBulls / (float)numberOfThrows);
			cout << "Hit! - Accuracy = " << accuracy * 100 << "%" << endl;
		}
		else
		{
			numberOfThrows++;
			accuracy = ((float)NumberOfBulls / (float)numberOfThrows);
			cout << "Miss! - Accuracy = " << accuracy * 100 << "%" << endl;
		}
		if (NumberOfBulls == 10)
		{
			cout << "Simulate another game? (Y/N)" << endl;
			cin >> answer;
			if ((answer == 'Y') || (answer == 'y'))
			{
				newSimulation(numberOfThrows, NumberOfBulls, accuracy);
				NumberOfSimulations++;
			}
			else
			{
				system("CLS");
				TotalNumberOfBulls = NumberOfBulls;
				TotalNumberOfThrows = numberOfThrows;
				avgNumOfThrows = TotalNumberOfThrows / TotalNumberOfBulls;
				overallAccuracy = ((float)TotalNumberOfThrows / (float)TotalNumberOfBulls);
				cout << "The average number of throws for a bullseye: " << avgNumOfThrows << endl;
				cout << "The average overall accuracy: " << overallAccuracy << "%" << endl;
			}
		}
	}
}
bool Bullseye(float estimatedAccuracy)
{
	int rand_num = rand() % 100 + 1;
	if (rand_num < estimatedAccuracy)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void newSimulation(int &simulationThrows, int &simulationBulls, float &simulationAcc)
{
	system("CLS");
	TotalNumberOfBulls += simulationBulls;
	TotalNumberOfThrows += simulationThrows;
	overallAccuracy = ((float)TotalNumberOfBulls / (float)TotalNumberOfThrows);
	simulationThrows = 0;
	simulationBulls = 0;
	simulationAcc = 0;
}

