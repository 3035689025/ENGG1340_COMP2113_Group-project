#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <cstdlib>
#include "cases.h"
#include "randomcases.h"
#include "wantedlist.h"
#include "week4task.h"

using namespace std;

void week4task(int& week, int& money, int& wrongattempts, cases record[], int& salary)
{

	////// News or 
	cout << "News: " << endl;
	cout << "Press enter to start your work this week" << endl;
	cin.get();
	system("CLS");

	////// The Wanted list
	cout << "The wanted list" << endl;
	cout << "Press enter to start your work this week" << endl;
	cin.get();
	system("CLS");


	///////Duty (Officer Kim)????
	cout << "Your duty this week:" << endl << endl;
	cout << "duty" << endl << endl;  /////////////////////////////////////////////////////////////////duty未填(外星人入得)
	cout << "Press enter to start your work this week" << endl;
	cin.get();
	system("CLS"); ///////////LINUX 好似係用clear rather than CLS

	// For indicate the occurance of the visotr on wanted list.
	int wantedlist1 = 0;
	int wantedlist2 = 0;
	int wantedlist3 = 0;
	int wantlisttrigger = 0; //Trigger for the visitor on wantedlist 

	//Time counter /////////////////要改timer 有bug
	auto current = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - current;
	

	while (elapsed_seconds.count() < 1) /////////////////要改timer 有bug 
	{
		srand(time(0));
		wantlisttrigger += rand() % 5;
		if ((wantedlist1 == 0 || wantedlist2 == 0 || wantedlist3 == 0) && wantlisttrigger >= 35)
		{
				{
					wantedlist(wantedlist1, wantedlist2, wantedlist3, record, salary, wrongattempts);
					wantlisttrigger = 0;
				}
		}
		else
		{
			randomcases(week, record, salary, wrongattempts);
			auto end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - current;
			wantlisttrigger++;
		}
	}
}