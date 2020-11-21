#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <cstdlib>
#include "cases.h"
#include "randomcases.h"
#include "week3task.h"

using namespace std;

void week3task(int& week, int& money, int& wrongattempts, cases record[], int& salary)
{
	////// News
	cout << "News: " << endl;

	///////Duty (Officer Kim)????
	cout << "Your duty this week:" << endl << endl;
	cout << "duty" << endl << endl;  /////////////////////////////////////////////////////////////////duty未填(外星人入得)
	cout << "Press enter to start your work this week" << endl;
	cin.get();
	system("clear");

	//Time counter
	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();

	int last_index = -1;
	while ((std::chrono::duration_cast<std::chrono::seconds>(end - start).count() < 60)) //要改timer 有bug 
	{
		int timecount = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
		randomcases(week, record, salary, wrongattempts, last_index, timecount);
		end = std::chrono::system_clock::now();
	}
	last_index = -1;
	
	
	cout << "                    dS$$S$S$S$S$S$S$$Sb                   " << endl;
	cout << "                  :$$S^S$S$S$S$S$S^S$$;                   " << endl;
	cout << "                  SSP   `^$S$S$^'   TSS                   " << endl;
	cout << "                  $$       `\"'       $$                   " << endl;
	cout << "                _SS ,-           -  SS_                  " << endl;
	cout << "                :-.|  _    - .-   _  |.-;                 " << endl;
	cout << "                :\\(; ' \"-._.'._.-\" ` |)/;                 " << endl;
	cout << "                 \\`|  , o       o .  |'/                  " << endl;
	cout << "                  \":     -'   `-     ;\"                   " << endl;
	cout << "                    ;.              :                  " << endl;
	cout << "                    : `    ._.    ' ;                     " << endl;
	cout << "                  .sSb   ._____.   dSs.                   " << endl;
	cout << "              _.d8dSSb.   ._.   .SSbT8b._                " << endl;
	cout << "          _.oOPd88SSSS T.     .P SSSS888OOo.             " << endl;
	cout << "      _.mMMOOPd888SSSSb TSqqqSP dSSSS88OMOOOMm._         " << endl;
	cout << "   .oOMMMOMOOM8O8OSSSSSb TSSSP dSSSSS8OOMMOOMMOOOo._     " << endl;
	cout << "  .OOMMOOOMMOOMOOOO  \"^SSSTSSP dSSS^\"OOOOMMOOMMMOOMMMb.   " << endl;
	cout << "  dOOOMMMOMMOOOMOOOO      \"^SSSS^\"   :OOO8MMMOOMMOOMMOMMb  " << endl;
	cout << " :MMMOOMMOMMOOMMO8OS         `P      8O8OPdMMOOMMOMMOMMMM; " << endl;
	cout << " MMMMOOMMMMMOOMbTO8S;               :8888MMMMMOMMOMMOMMMMM " << endl;
	cout << " OMMMMOOMMMMOOOMMOOOS        S     :O8OPdMOMMMOMOMMOOMMMMO " << endl;
	cout << ":OMMMMOOMMOMMOOMbTObTb.     :S;   .PdOPdMOOMMMMMOMMOMMMMMO;" << endl;
	cout << "MOOMMMMOMMOMMOOMMMOObTSSg._.SSS._.PdOPdMOOMMMMOMMMMOMMMMOOM" << endl;
	cout << "MMOMMMMOMMMOMMOOMMbT8bTSSSSSSSSSPd8OPdOOOMMMMOOMMMMOMMMOOMM" << endl;
	cout << "MMOMMMOMMMMMOMMOOMMMbT8bTSSSSSPd88PdOOOOMMMMOOMMMMMMMMOOMMM" << endl;
	
	///////////////////////////////對白
	cout << "\n \n";
	cout << "You: You again?." << endl << endl;
	cout << "Visitor: Read it and return to me immediately." << endl;
	cout << "\n \n \n \n";
	cout << "(A rebel,alien spy, introduces us to the existence of The Rebellion by handing us a pamphlet.)" << endl << endl; /////////////////////////////////////////////////////////not completed
	cout << "Press enter to return the letter";


}
