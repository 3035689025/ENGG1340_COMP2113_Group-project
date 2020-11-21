#include <iostream>
#include <string>
#include <iomanip>
#include "cases.h"
#include "casessetup.h"
#include "week1task.h"
#include "week2task.h"
#include "week3task.h"
#include "week4task.h"
#include "week5task.h"
#include "weekend.h"
#include "save.h"
#include "load.h"
using namespace std;

int main()
{
	system("clear");
	int week = 0, money = 0, wrongattempts = 0, salary = 0;
	string userinput = "";
	cases record[43];
	casessetup(record);


	while (userinput != "3")
	{
		cout << setw(45) << "Officer \n \n \n \n \n \n " << endl;
		cout << " [1] Start new game" << endl;
		cout << " [2] Load save " << endl;
		cout << " [3] Exit" << endl;
		cout << "Input: ";

		//All the status (Week, money, wrongattempts, salary) will be reset after achieving paticular ending
		week = 0;
		money = 0;
		wrongattempts = 0;
		salary = 0;
		cin >> userinput;
		if (userinput == "3")
		{
			break;
		}

		if (userinput == "2") // Load
		{
			load(week, money, wrongattempts);
			system("clear")
		}

		if (userinput == "1") // Start game
		{
			week = 1;
			money = 80;
			wrongattempts = 0;
			salary = 0;
		}

		if (week == 1)
		{
			week1task(week, money, wrongattempts, record, salary); //The tasks in week1
			week_end(week, money, wrongattempts, salary); //Check ending - If user request to quit the game or the game is over, week will become 0.
			if (week != 0)
			{
				week++;
				save(week, money, wrongattempts);
			}
		}

		if (week == 2)
		{
			week2task(week, money, wrongattempts, record, salary); //Week2 tasks
			week_end(week, money, wrongattempts, salary); 
			if (week != 0)
			{
				week++;
				save(week, money, wrongattempts);
			}
		}

		if (week == 3)
		{
			week3task(week, money, wrongattempts, record, salary);
			week_end(week, money, wrongattempts, salary);
			if (week != 0)
			{
				week++;
				save(week, money, wrongattempts);
			}
		}

		if (week == 4)
		{
			week4task(week, money, wrongattempts, record, salary);
			week_end(week, money, wrongattempts, salary);
			if (week != 0)
			{
				week++;
				save(week, money, wrongattempts);
			}
		}
		
		if (week == 5)
		{
			week5task(week, money, wrongattempts, record, salary);	
		}
	}
}
