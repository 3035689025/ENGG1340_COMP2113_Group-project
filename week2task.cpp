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
	//Your superior Officer Kim telling you your duties for this week
	//icon of Officer Kim
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

	cout << "Officer Kim: Humans AND aliens are allowed to enter Earth starting from this week. Make sure the information in their passports is consistent." << endl << endl;
        cout << "Press enter to start your work this week" << endl;
	cin.get();
	system("CLS"); ///////////LINUX 好似係用clear rather than CLS

	//Time counter /////////////////要改timer 有bug
	auto current = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - current;
	
	int last_index=-1;

	while (elapsed_seconds.count() < 1) /////////////////要改timer 有bug 
	{
		randomcases(week, record, salary, wrongattempts);
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - current;
	}
	
	last_index = -1;
	//// wait 5s...
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

	cout << "\n \n";
	cout << "You: Sorry! It is closed." << endl << endl;
	cout << "Visitor: Read it and return to me immediately." << endl;
	//////////////wait 5seconds 後補
	cout << "\n \n \n \n";
	cout << "(A rebel,alien spy, introduces us to the existence of The Rebellion by handing us a pamphlet.)" << endl << endl; /////////////////////////////////////////////////////////not completed
	cout << "Press enter to return the letter";

	//result_roundup_and_ending() <-- 未整好個function

}
