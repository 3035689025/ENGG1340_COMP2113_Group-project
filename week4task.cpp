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

	//news talking about The Infected
	cout << "News: " << endl;
	cout << "___________________________________________________________________" << endl << endl;
	cout << "An explosion happened in Venice, Italy yesterday. There were 10 deaths and 28 injured in this horrific attack. The terrorist group, The Infected, ";
	cout << "has claimed responsibility for this attack." << endl << endl;
	cout << "Press enter to continue" << endl;
	cin.get();
	system("clear");
	

	//Officer Kim 
	cout << "                       ________________"            << endl;
	cout << "                      \\      __      /         __"  << endl;
	cout << "                       \\_____()_____/         /  )" << endl;
	cout << "                       '============`        /  /"  << endl;
	cout << "                        #---\\  /---#        /  /"   << endl;
	cout << "                       (# @\\| |/@  #)      /  /"    << endl;
	cout << "                        \\   (_)   /       /  /"     << endl;
	cout << "                        |\\ '---` /|      /  /"      << endl;
	cout << "                _______/ \\\\_____// \\____/ o_|"      << endl;
	cout << "               /       \\  /     \\  /   / o_|"       << endl;
	cout << "             /  |  _____     |       / /   \\ \\ "    << endl;
	cout << "            /   |  |===|    o|      / /\\    \\ \\ "   << endl;  
	cout << "           |    |   \\@/      |     / /  \\    \\ \\ "  << endl;
	cout << "           |    |___________o|__/----)   \\    \\/ "  << endl;
	cout << "           |    '              ||  --)    \\     |"  << endl;
	cout << "           |___________________||  --)     \\    / " << endl;
	cout << "                |           o|   ''''   |   \\__/ "  << endl;
	cout << "                |            |          | "         << endl;
	cout << endl << endl;
	cout << "Officer Kim: Approve humans and aliens with valid passports and entry passes. " << endl;
	cout << "Now take a look at this wanted list. They are members of The Infected. Do NOT allow them to enter. Remember the names.";
	cout << "Since this list is highly classified, you will NOT be able to read them again." << endl << endl;
	cout << "Press enter to read the wanted list" << endl;
	cin.get();
	system("clear");
	
	
	////// The Wanted list
	cout << "The wanted list" << endl;
	cout << "___________________________________________________________________" << endl << endl;
	cout << "Eagle Flies \n Patricia Aniston \n Thomas Carter Jr. \n" << endl;
	cout << "Press enter to start your work this week" << endl;
	cin.get();
	system("clear");
	

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
		if ((wantedlist1 == 0 || wantedlist2 == 0 || wantedlist3 == 0) && wantlisttrigger >= 35) //There is a probability that the visitors on wanted list shows
		{
				{
					wantedlist(wantedlist1, wantedlist2, wantedlist3, record, salary, wrongattempts, timecount);
					wantlisttrigger = 0;
				}
		}
		else
		{
			randomcases(week, record, salary, wrongattempts, timecount);
			wantlisttrigger++; //The probability of wantlist visitors increase everyround
		}
		end = std::chrono::system_clock::now();
	}
	last_index=-1;
}
