#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <cstdlib>
#include <windows.h>
#include "cases.h"
#include "icon.h"
#include "week1task.h"
using namespace std;

void week5task(int& week, int& money, int& wrongattempts, cases record[], int &salary)
{
  //The test cases for the last day will be rigid, as the focus is on the events and endings 
  //Died in disgrace(1) and Died in incompetence will not occur in this week even if the requirements are fulfilled.
  //Died with honor (2) , Died in disgrace (2) and Hero’s journey will be the focus of this week.

  cout << "You: Should I stay in line and fulfill my duties? Or fight for my people and disapprove the officials? Decisions...Decisions..." << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");
	
  //income statement should be printed after week 4 and before week 5.
  
  //duty for week 5
  cout << "Your duty this week:" << endl << endl;
  cout << "Officer B-263-54, follow the instructions from yesterday and wait for further updates." << endl << endl; 
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");
  
  //for storing how many are approved
  int official_count = 0;
  
  //a total of X cases will happen in week 5
  
  //1st case: alien (players should NOT approve this)
  cout << "You: Passport and entry pass please!" << endl;
  
  string userinput = "";
  while (userinput != "Y" && userinput != "N" && userinput != "y" && userinput != "n")
  {
      // Print passport as long as the input is not Y nor N
      cout << endl;
      cout << "       &&&&&&&"    << endl;
      cout << "      &&(+.+)&&"   << endl;
      cout << "      ___\\=/___"  << endl;
      cout << "     (|_ ~~~ _|)"  << endl;
      cout << "        )___("     << endl;
      cout << "      /'     `\\ "  << endl;
      cout << "     ~~~~~~~~~~~"  << endl;
      cout << "     `~//~~~\\\\~' " << endl;
      cout << "      /_)   (_\\ "  << endl;
      cout << endl;
    
      cout << "Visitor: Passport here! Please just let me pass, I'm in a hurry!!" << endl;
      cout << "Passport information" << endl;
      cout << "-------------------------" << endl;
      cout << "Name: " << "Voodoo Doll"<< endl;
      cout << "Gender: " << "Doll - Female" << endl;
      cout << "Birthday: " << "2045-09-12" << endl; //issue here
      cout << "Issue date: " << "2035-12-30" << endl;
      cout << "Planet: " << "Planet S-23" << endl;
      cout << "Passport Number: " << "465354987" << endl;
      cout << "-------------------------" << endl << endl;	
    
      // Print entry-pass
      cout << "Entry pass information" << endl;
      cout << "-------------------------" << endl;
      cout << "Name: " << "Voodoo Doll" << endl;
      cout << "Gender: " << "Doll - Female" << endl;
      cout << "Birthday: " << "2045-09-12" << endl;
      cout << "Planet: " << "Planet S-23" << endl;
	  
	  
	  
      cout << endl << "Input:";
      cin >> userinput;
      //for invalid input
      while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N" && userinput != "y" && userinput != "n")
      {
	 cout << "Invalid input, Try again" << endl;
	 cout << "[1] Check approved countries (Earth)" << endl;
	 cout << "[2] Check aproved planets" << endl;
	 cout << "[3] Scanner (For checking gender) " << endl;
    	 cout << "[Y] Aprrove entry " << endl;
    	 cout << "[N] Disapprove entry " << endl;
    	 cout << endl << "Input:";
         cin >> userinput;
     
	         

     if (userinput == "1")     
     {	
     	system("clear");
     	cout << "Approved country list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Australia \n China \n Gotham City \n Papua New Guinea \n United Kingdome \n United States \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("clear");
     }     

     else if (userinput == "2")
     {
     	system("clear");
     	cout << "Approved planet list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Planet S-23 \n Planet Razer \n Planet Music \n Zootopia \n Planet 1117 \n Planet Smiley Face \n Smiley world \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("clear");
     }
     
     else if (userinput == "3")
     {
     	system("clear");
     	cout << "Scanner result: " << "Doll - Female" << endl;
     	cin.get();
     	cin.get();
       system("clear");
     }
    
     //users should NOT choose Y
     if (userinput == "Y" || userinput == "y")
     {
       system("clear");
       cout << "Urgent note from Officer Kim" << endl;
       cout << "--------------------------------------" << endl;
       cout << "What are you doing?? You should not have approved her! How can the passport be issued before her birthdate?" << endl << endl;
       cout << "I just heard from the higher-ups, three BIG officials are returning to EARTH this week. Ignore all the guidelines then and let them pass immediately. Put on your best performance or face the consequences!" << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
     }
     else if (userinput == "N" || userinoput == "n")
     {
       system("clear");
       cout << "Urgent note from Officer Kim" << endl;
       cout << "--------------------------------------" << endl;
       cout << "Nice work just now! Her passport was not valid. Now...I just heard from the higher-ups, three BIG officials are returning to EARTH this week. Ignore all the guidelines then and let them pass immediately. Put on your best performance or face the consequences!" << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
     }
  }
  

  //1st Earth official here
  cout << "You: Passport and entry pass please!" << endl;
  
  string userinput = "";
  while (userinput != "Y" && userinput != "N" && userinput != "y" && userinput != "n")
  {
      // Print passport as long as the input is not Y nor N

      //printing the icon of the first official
      cout << "                     / ___`\\" <<endl;
      cout << "         /|         ( (   \\ \\" <<endl;
      cout << "    |^v^v  V|        \\ \\/) ) )" <<endl;
      cout << "    \\  ____ /         \\_/ / /" <<endl;
      cout << "    ,Y`    `,            / /" <<endl;
      cout << "    ||  -  -)           { }" <<endl;
      cout << "    \\\\   _\\ |           | |" <<endl;
      cout << "     \\\\ / _`\\_         / /" <<endl;
      cout << "     / |  ~ | ``\\     _|_|" <<endl;
      cout << "  ,-`  \\    |  \\ \\  ,//(_}" <<endl;
      cout << " /      |   |   | \\/  \\| |" <<endl;
      cout << "|       |   |   | '   ,\\ \\" <<endl;
      cout << "|     | \\   /  /\\  _/`  | |" <<endl;
      cout << "\\     |  | |   | ``     | |" <<endl;
      cout << " |    \\  \\ |   |        | |" <<endl;
      cout << " |    |   |/   |        / /" <<endl;
      cout << " |    |        |        | |" <<endl; 
      cout << endl;
    
      cout << "Visitor: Oh, hello officer! Hummm..." << endl << endl;
      cout << "Visitor: ...The smell of death and pollution. How nice it is to be back. " << endl << endl;
      cout << "Visitor: You should've known I'll be here, but here's my passport anyway. " << endl;
      cout << "Passport information" << endl;
      cout << "-------------------------" << endl;
      cout << "Name: " << "King Henry IV" << endl;
      cout << "Gender: " << "Human - Male" << endl;
      cout << "Birthday: " << "1970-08-01" << endl;
      cout << "Issue date: " << "2039-07-14" << endl;
      cout << "Planet: " << "Earth - Wakanda" << endl;
      cout << "Passport Number: " << "123456789" << endl;
      cout << "-------------------------" << endl;	
    
      // Print entry-pass
      cout << "Entry pass information" << endl;
      cout << "-------------------------" << endl;
      cout << "Name: " << "King Henry IV" << endl;
      cout << "Gender: " << "Human - Male" << endl;
      cout << "Birthday: " << "1970-08-01" << endl;
      cout << "Planet: " << "Earth - Wakanda" << endl;
      cout << "Note: Earth Official - entry to any planet / country is allowed." << endl;
	  
      cout << endl << endl;
      cout << "[1] Check approved countries (Earth)" << endl;
      cout << "[2] Check aproved planets" << endl;
      cout << "[3] Scanner (For checking gender) " << endl;
      cout << "[Y] Aprrove entry " << endl;
      cout << "[N] Disapprove entry " << endl;
      cout << endl << "Input:";
      cin >> userinput;
      //for invalid input
      while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N"  && userinput != "y" && userinput != "n")
      {
	     cout << "Invalid input, Try again" << endl;
	     cout << "[1] Check approved countries (Earth)" << endl;
	     cout << "[2] Check aproved planets" << endl;
	     cout << "[3] Scanner (For checking gender) " << endl;
    	 cout << "[Y] Aprrove entry " << endl;
    	 cout << "[N] Disapprove entry " << endl;
    	 cout << endl << "Input:";
       cin >> userinput;
      }


     if (userinput == "1")     
     {	
     	system("clear");
     	cout << "Approved country list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Australia \n China \n Gotham City \n Papua New Guinea \n United Kingdome \n United States \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("clear");
     }     
     else if (userinput == "2")
     {
     	system("clear");
     	cout << "Approved planet list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Planet S-23 \n Planet Razer \n Planet Music \n Zootopia \n Planet 1117 \n Planet Smiley Face \n Smiley world \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("clear");
     }
     
     else if (userinput == "3")
     {
     	system("clear");
     	cout << "Scanner result: " << "Human - Male" << endl;
     	cin.get();
     	cin.get();
              system("clear");
     }

     if (userinput == "N" || userinput == "n")
     {
       system("clear");
       cout << "Visitor: Are you serious? Do you even know who I am? I will personally have you killed..."
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
       //message from Officer Kim
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
       cout << "Officer Kim: What was that? Don't try that again! Approve the next two officials and we'll deal with this after this week!" << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
       //thoughts from "you"
           cout << "You: Should I have done that? Kinda a risky move...Oh well...What's done is done." << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
     }
     
     else if (userinput == "Y" || userinoput == "y")
     {
       ++official_count;
       system("clear");
       cout <<"Visitor: What took you so long?? Servants these days..."
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
       //thoughts from "you"
       cout << "You: Gotta look after myself first...Can't get myself killed. You only live once. Hehe!"
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
     }
  }
  
  //random case(s) here!!!!! time or amount of cases?
  randomcases(week, record, salary, wrongattempts); //please correct me if I'm using the function wrong
  
  //alien spy here
  cout << "You: Passport and entry pass please!" << endl << endl;
  cout << "..." << endl;
  system("clear");

  userinput = "";
  while (userinput != "Y" && userinput != "N" && userinput != "y" && userinput != "n")
  {
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
    cout << endl << endl;
    cout << "Visitor: Remember me? It's time to fight for our people. Let me through and show you're a part of us!" << endl;
    

    cout << "[Y] Aprrove entry " << endl;
    cout << "[N] Disapprove entry " << endl;
    cout << endl << "Input:";
    cin >> userinput;

    //user can only move forward if they choose Yes
    while ( userinput != "Y" || userinput != "y") 
    {
      //for invalid input          if ( userinput != "Y" && userinput != "N" && userinput != "y" && userinput != "n")
      {
        cout << "Invalid input, Try again" << endl;
        cout << "[Y] Aprrove entry " << endl;
  	cout << "[N] Disapprove entry " << endl;
   	cout << endl << "Input:";
        cin >> userinput;
      }
      //for choosing No
      else 
      {
        system("clear");
        cout << "No? I won't take that as an answer! I have a gun in my pocket. If you don't let me through this instant, I'll kill you right here right now!" << endl << endl;
        cout << "This is bigger than both of us!" <<endl;
        cin >> userinput;
      }
    }
    system("clear");
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
    cout << endl << endl;
    cout << "Visitor: Remember who you are. Finish your mission!" << endl;
  }

  //2nd Earth official here
  cout << "You: Passport and entry pass please!" << endl;
  
  str      ing userinput = "";
  while (userinput != "Y" && userinput != "N" && userinput != "y" && userinput != "n")
  {
      // Print passport as long as the input is not Y nor N

      //printing the icon of the second official
      cout << "                   / \\"<<endl;
      cout << "                          ."<<endl;
      cout << "                   / \\"<<endl;
      cout << "                   / \\"<<endl;
      cout << "                  _\\ /_"<<endl;
      cout << "        .     .  (,'v`.)  .     ."<<endl;
      cout << "        \\)   ( )  ,' `.  ( )   (/"<<endl;
      cout << "          : '    _______    ' :"<<endl;
      cout << "          |  _,-'  ,-.  `-._  |"<<endl;
      cout << "          |,' ( )__`-'__( ) `.|"<<endl;
      cout << "          (|,-,'-._   _.-`.-.|)"<<endl;
      cout << "          /  /<( o)> <( o)>\\  \\"<<endl;
      cout << "          :  :     | |     :  :"<<endl;
      cout << "          |  |     ; :     |  |"<<endl;
      cout << "          |  |    (.-.)    |  |"<<endl;
      cout << "          |  |  ,' ___ `.  |  |"<<endl;
      cout << "          ;  |)/ ,'---'. \\(|  :"<<endl;
      cout << "      _,-/   |/\\(       )/\\|   \\-._"<<endl;
      cout << "_..--'.-(    |   `-'''-'   |    )-.`--.._"<<endl;
      cout << "         `.  ;`._________,':  ,'"<<endl;
      cout << "        ,' `/               \'`."<<endl;
      cout << "             `------.------'"<<endl;
      cout << endl;
      cout << "Visitor: Procedures...such a peasant concept. You can't ever underestimate the incompetence of humans. Passort here I guess." << endl << endl;
      cout << "Visitor: Let's just get this over with." << endl;
      cout << "Passport information" << endl;
      cout << "-------------------------" << endl;
      cout << "Name: " << "Genghis Khan XIV"<< endl;
      cout << "Gender: " << "Supreme - Male" << endl;
      cout << "Birthday: " << "1111-11-11" << endl;
      cout << "Issue date: " << "2000-01-01" << endl;
      cout << "Planet: " << "Earth - Asia" << endl;
      cout << "Passport Number: " << "666666666" << endl;
      cout << "-------------------------" << endl << endl;
    
      // Print entry-pass
      cout << "Entry pass information" << endl;
      cout << "-------------------------" << endl;
      cout << "Name: " << "Genghis Khan XIV" << endl;
      cout << "Gender: " << "Supreme - Male" << endl;
      cout << "Birthday: " << "1111-11-11" << endl;
      cout << "Planet: " << "Earth - Asia" << endl;
      cout << "Note: Earth Official - entry to any planet / country is allowed." << endl;
	  
      cout << endl << endl;
      cout << "[1] Check approved countries (Earth)" << endl;
      cout << "[2] Check aproved planets" << endl;
      cout << "[3] Scanner (For checking gender) " << endl;
      cout << "[Y] Aprrove entry " << endl;
      cout << "[N] Disapprove entry " << endl;
      cout << endl << "Input:";
      cin >> userinput;
      //for invalid input
      while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N"  && userinput != "y" && userinput != "n")
      {
	       cout << "Invalid input, Try again" << endl;
	       cout << "[1] Check approved countries (Earth)" << endl;
	       cout << "[2] Check aproved planets" << endl;
	       cout << "[3] Scanner (For checking gender) " << endl;
    	 cout << "[Y] Aprrove entry " << endl;
    	 cout << "[N] Disapprove entry " << endl;
    	 cout << endl << "Input:";
       cin >> userinput;
      }


     if (userinput == "1")     
     {	
     	system("clear");
     	cout << "Approved country list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Australia \n China \n Gotham City \n Papua New Guinea \n United Kingdome \n United States \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("clear");
     }     
     else if (userinput == "2")
     {
     	system("clear");
     	cout << "Approved planet list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Planet S-23 \n Planet Razer \n Planet Music \n Zootopia \n Planet 1117 \n Planet Smiley Face \n Smiley world \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("clear"):
     }
     
     else if (userinput == "3")
     {
     	system("clear");
     	cout << "Scanner result: " << "Human - Supreme - Male (Supreme Leader of Asia: Genghis Khan XIV)" << endl;
     	cin.get();
     	cin.get();
       system("clear");
     }
    
     //users should NOT choose Y
     if (userinput == "Y" || userinput == "y")
     {
       system("clear");
       cout << "Visitor: This must be a joke. Probably Bezos...He's getting arrogant after taking over the interdimensional shipping business."
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
       
       //thoughts from "you"
       cout << "You: At least he didn't blame me. One more to go!" << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");

     }
     else if (userinput == "N" || userinoput == "n")
     {
       ++official_count;
       system("clear");
       cout <<"Visitor: Tsk! Just let me through next time. "
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
       //thoughts from "you"
       cout << "You: Last one to go!"
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
     }
  }

  //update from Officer Kim here
  if (official_count == 2)
  {
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
       cout << "Officer Kim: Good work! Keep it up! You'll be heavily compensated after this week." << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
   
  }
  else if (official_count == 1)
  {
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
       cout << "Officer Kim: You missed one official. Someone will die from this mistake and it won't be me!" << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
  }
  else if (official_count == 0)
  {
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
       cout << "Officer Kim: It's treason, then. You'll die painfully. I'll make sure of that." << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
  }




  //3rd Earth official here
  cout << "You: Passport and entry pass please!" << endl;
  
  string userinput = "";
  while (userinput != "Y" && userinput != "N" && userinput != "y" && userinput != "n")
  {
      // Print passport as long as the input is not Y nor N

      //printing the icon of the third official
      cout << "     _.-----._" << endl;
      cout << "   _'    '    '_" << endl;
      cout << "   _'    '    '_" << endl;
      cout << "  '_____________'" << endl;
      cout << "      | +_+ |" << endl;
      cout << "  ==--'_D__,'---==." << endl;
      cout << " /    > \\_/ <     |" << endl;
      cout << "/  >__\\o_| o/     |" << endl;
      cout << "|      | |_/    , |" << endl;
      cout << "\\,_____/_)  o   | |" << endl;
      cout << "   |   o '  o   | |" << endl;
      cout << "   |   o |  o   |_/| " << endl;
      cout << "   '   o |  o   '  |" << endl;
      cout << "   |   o |  o   |_/" << endl;
      cout << "   |   o |  o   |))" << endl;
      cout << "   |     |      |" << endl;
      cout << "   |     \\      |" << endl;
      cout << "   |___o/ \\_____|" << endl;
      cout << "     |   |   |" << endl;
      cout << "   __)  >|<  (__" << endl;
      cout << "  (____,_|_,____)" << endl;
      cout << endl << endl;

      if (official_count != 2)
      {
        cout << "Visitor: Here's my passport. I met my friends just now, you're not going to let me back, are you?" << endl << endl;
      }
      else 
      {
        cout << "Visitor: I see my two friends have returned, thank you for your service officer." << endl      
      }
      
      cout << "Passport information" << endl;
      cout << "-------------------------" << endl;
      cout << "Name: " << "George Washington"<< endl;
      cout << "Gender: " << "Human - Male" << endl;
      cout << "Birthday: " << "1732-02-22" << endl;
      cout << "Issue date: " << "2040-04-20" << endl;
      cout << "Planet: " << "Earth - United States" << endl;
      cout << "Passport Number: " << "854769615" << endl;
      cout << "-------------------------" << endl << endl;	
    
      // Print entry-pass
      cout << "Entry pass information" << endl;
      cout << "-------------------------" << endl;
      cout << "Name: " << "George Washington" << endl;
      cout << "Gender: " << "Human - Male" << endl;
      cout << "Birthday: " << "1732-02-22" << endl;
      cout << "Planet: " << "Earth - United States" << endl;
      cout << "Note: Earth Official - entry to any planet / country is allowed." << endl;
	  
      cout << endl << endl;
      cout << "[1] Check approved countries (Earth)" << endl;
      cout << "[2] Check aproved planets" << endl;
      cout << "[3] Scanner (For checking gender) " << endl;
      cout << "[Y] Aprrove entry " << endl;
      cout << "[N] Disapprove entry " << endl;
      cout << endl << "Input:";
      cin >> userinput;
      //for invalid input
      while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N"  && userinput != "y" && userinput != "n")
      {
	cout << "Invalid input, Try again" << endl;
        cout << "[1] Check approved countries (Earth)" << endl;
	cout << "[2] Check aproved planets" << endl;
	cout << "[3] Scanner (For checking gender) " << endl;
        cout << "[Y] Aprrove entry " << endl;
        cout << "[N] Disapprove entry " << endl;
        cout << endl << "Input:";
        cin >> userinput;
      }


     if (userinput == "1")     
     {	
     	system("clear");
     	cout << "Approved country list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Australia \n China \n Gotham City \n Papua New Guinea \n United Kingdome \n United States \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("clear");
     }     
     else if (userinput == "2")
     {
     	system("clear");
     	cout << "Approved planet list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Planet S-23 \n Planet Razer \n Planet Music \n Zootopia \n Planet 1117 \n Planet Smiley Face \n Smiley world \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("clear");
     }
     
     else if (userinput == "3")
     {
     	system("clear");
     	cout << "Scanner result: " << "Human - Male" << endl;
     	cin.get();
     	cin.get();
       system("clear");
     }

     if (userinput == "N" || userinput == "n")
     {
       system("clear");
       if (official_count !=2){
         cout << "Visitor: As expected" << endl;
       }
       else
       {
         cout << "Visitor: I will return soon. You've seriously messed up!" << endl;
       }
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");

       //thoughts from "you"
       cout << "You: Now what? Am I officially a rebel now?" << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");

     }
     else if (userinput == "Y" || userinoput == "y")
     {
       ++official_count;
       system("clear");
       if (official_count == 3)
       {
         cout << "Visitor: Thank you kind sir. Have a nice day!" <<endl;
       }
       else
       {
         cout << "Visitor: Huh...Strange...Well, thank you anyway." << endl;
       }
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
       //thoughts from "you"
       cout << "I'm not wrong. Just fulfilling my duties. Right...?" << endl;
       cout << endl << endl;
       cout << "Press enter to continue" << endl;
       cin.get();
       system("clear");
     }
    }
  
//3 endings here



  
//Died with honor (2)
/*Events: 
Awarded medal of honor in week 6
Died in week 7(final week) by starvation */
if (official_count == 3)
{

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
  cout << "Officer Kim: Officer B-263-54, you have done well. We have received intelligence the certain extremists have planning to infiltrate our planet. ";
  cout << "However, we have just discovered their plans of assasinating the Earth officials and stopped them in time. You have played an important role in this believe it or not!"<< endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  cout << "News:" <<endl;
  cout << "___________________________________________________________________" << endl << endl;
  cout << "The terrorist group formally known as The Infected was finally dissolved after the efforts of our brave officers at the boarder. ";
  cout << "The Officer, B-263-54, was rewarded the Medal of Honor as he bravely protected the Officials, King Henry IV, Genghis Khan XIV and George Washington ";
  cout << "from an assasination attempt from The Infected." << endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  cout << "You: Hard work does pay off, even if it's not in the form of money..." << endl << endl;
  cout << "...what...is...happ...ening...to...me?" << endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

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
  cout << "Officer Kim: Officer B-263-54, thank you for your service. Unforunately, considering you've been in contact with The Infected, we cannot take the risk of having a breach in our system. ";
  cout << "I'm sure you'll understand. Your planet will forever be grateful for your sacrifice!" << endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  cout << endl << endl;
  cout << "Ending: Died with honor (2)" << endl;
  cout << endl << endl;
  cout << "-THE END-" <<endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  //insert empty string into the storage file here and end the game
}


//Died in disgrace (2)
/*Events:
Officials were ambushed in space by assassins
Died when week 6 ended- killed by superior */
else if (official_count != 3 && official_count != 0)
{
  cout << "News:" <<endl;
  cout << "___________________________________________________________________" << endl << endl;
  cout << "The Infected strikes again! Officials dead! Who is to blame? Sources say it's Officer B-263-54, a boarder officer at the Earth boarder." << endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  cout << "You: OH DA-" << endl;
  cout << endl << endl << endl;
  cout << "* BANG *"
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

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
  cout << "Officer Kim: No one gets away with treason! Rot in hell!" << endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  cout << endl << endl;
  cout << "Died in disgrace (2)" << endl;
  cout << endl << endl;
  cout << "-THE END-" <<endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  //insert empty string into the storage file here
}

//Hero’s journey
/*Events:
All 3 officials were ambushed in space by assassins
Ruling party was overthrown
Rebellion was a success
Became a hero*/
else if (official_count == 0)
{
  cout << "News:" <<endl;
  cout << "___________________________________________________________________" << endl << endl;
  cout << "Glory to the Arstotzkan race! The human totalitarian government has been overthrown. The truth has finally been revealed! ";
  cout << "We need not hide in the dark anymore! Humans will treat us as equals and give us the respect we very much deserve!" << endl << endl;
  cout << "In other news, Officer Greg (formally known as Officer B-263-54) was awarded the Medal of Glory for his unselfish contribution during the rebellion. ";
  cout << "His actions allowed us to take the fallen \"government\"by surprise. Greg, to you: " << endl << endl;
  cout << "You are a true hero and we will forever be grateful for you!"
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  cout << endl << endl;
  cout << "Ending: Hero’s journey" << endl;
  cout << endl << endl;
  cout << "-THE END-" <<endl;
  cout << endl << endl;
  cout << "Press enter to continue" << endl;
  cin.get();
  system("clear");

  //insert empty string into the storage file here

  return;	     
 


}

}
