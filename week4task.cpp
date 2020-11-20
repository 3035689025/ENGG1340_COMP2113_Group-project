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
	
	
	//Time counter
	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	
	int last_index = -1;
	

	while ((std::chrono::duration_cast<std::chrono::seconds>(end - start).count() < 60) /////////////////要改timer 有bug 
	{
		int timecount = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
		srand(time(0));
		wantlisttrigger += rand() % 5;
		if ((wantedlist1 == 0 || wantedlist2 == 0 || wantedlist3 == 0) && wantlisttrigger >= 35)
		{
				{
					wantedlist(wantedlist1, wantedlist2, wantedlist3, record, salary, wrongattempts, timecount);
					wantlisttrigger = 0;
				}
		}
		else
		{
			randomcases(week, record, salary, wrongattempts, timecount);
			auto end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - current;
			wantlisttrigger++;
		}
	}
	last_index=-1;
}
