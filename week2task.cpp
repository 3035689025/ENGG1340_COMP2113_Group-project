#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <cstdlib>
#include "cases.h"
#include "randomcases.h"
#include "week2task.h"

using namespace std;

void week2task(int& week, int& money, int& wrongattempts, cases record[], int& salary)
{
	//Duty
	cout << "Your duty this week:" << endl << endl;
	cout << "duty" << endl << endl;  /////////////////////////////////////////////////////////////////duty����(�~�P�H�J�o)
	cout << "Press enter to start your work this week" << endl;
	cin.get();
	system("CLS"); ///////////LINUX �n���Y��clear rather than CLS

	//Time counter
	auto current = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - current;

	while (elapsed_seconds.count() < 1) /////////////////�n��timer ��bug 
	{
		randomcases(week, record, salary, wrongattempts);
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - current;
	}
}