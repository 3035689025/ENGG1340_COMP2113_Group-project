#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <cstdlib>
#include "cases.h"
#include "randomcases.h"
#include "week3task.h"

using namespace std;


//for week 3 humans and aliens are allowed to enter 
//letter from mother will come at the end
void week3task(int& week, int& money, int& wrongattempts, cases record[], int& salary)
{
	system("clean");
	cout << "You: New week incoming... I have to focus on my work here first! No distractions!" << endl;
	cout << "Press enter to continue" << endl;
	cin.get();
	cin.get();
	system("clear");

	
	//The focus will be on the rebels and plot (letter from mother) this week.
	
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
	
	cout << "Officer Kim: Your efficiency can be improved. Follow my instructions from last week and cross-check their passports and entry passes CAREFULLY!" << endl << endl;
	cout << "Officer Kim: Be careful of the terrorist group, The Infected. There have been reports of them recruiting our officers. The punishment for treason is certain death." << endl << endl; 
	cout << "Press enter to start your work this week" << endl;
	cin.get();
	system("clear");

	//Time counter
	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();

	int last_index = -1;
	while ((std::chrono::duration_cast<std::chrono::seconds>(end - start).count() < 90)) //要改timer 有bug 
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
	
	//script betwen rebel and you, letter from mother here
	cout << "\n \n";
	cout << "You: You again? I should arrest you." << endl << endl;
	cout << "Visitor: I come in peace! Read it and destroy it immediately." << endl;
	cout << "\n \n \n \n";
	
	//letter here
	cout << "Dear Greg," << endl << endl;
	
	cout << "You may not believe me but I am your mother. First of all, I'm so sorry for leaving you here on Earth. It must have been tough." << endl;
	cout << "But...I had my reasons. You are actually from a bloodline of Arstotzkans. You may know us as The infected, The Terrorists or whatever humans call us now. ";
	cout << "I left you there for a better chance of survival. We were hunted and persecuted for centuries. I didn't want you to live like us.";
	cout << "But now we are fighting back, and we're actually winning! I want you to join us to fight for OUR people." << endl << endl;
	
	cout << "You must be confused right now, but understand this: everything you know is a lie. 300 years ago, Earth was occupied by the \"alien\" species, ";
	cout << "The Arstotzkans. There were no humans. But one day...humans came to our planet looking for resources and a place to survive. It was perfect. ";
	cout << "Earth was filled with food and living beings. Humans drove nearly all of us out of our land by the 1800s. As victory is written by the victors, ";
	cout << "history books have referred to the deportation of \"The Infected species\" as a victory - humans defending their motherland against aliens. ";
	cout << "The hypocrisy! Even the name \"The Infected\" was to associate us with a negative stigma to alienate us from Earth. Soon, humans will drain all the resources of ";
	cout << "this beautiful planet and move on to the next one. " << endl << endl;
	
	cout << "Join us and fight for your people!" << endl << endl;
	cout << "p.s. The name Greg was given by me to remind you to be vigilant. Remember, always stay vigilant." << endl << endl;
	cout << "Much love, \nMom \n \n \n \n ";

	cout << "Press enter to burn the letter";
	cin.get();
	system("clear");
	
	
	cout << "You: Wow...that's a lot to take in..." << endl << endl;
	cout << "Press enter to continue";
	cin.get();
	system("clear");

}
