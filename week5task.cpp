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
  system("CLS"); //clear for linux? since the programme should be tested in the environment of X2GO
	
  //income statement should be printed after week 4 and before week 5.
  
  //duty for week 5
  cout << "Your duty this week:" << endl << endl;
  cout << "Officer B-263-54, follow the instructions from yesterday and wait for further updates." << endl << endl; 
  cout << "Press enter to continue" << endl;
  cin.get();
  system("CLS"); //or clear
  
  //for storing how many are approved
  int official_count = 0;
  
  //a total of 6 cases will happen in week 5
  //one alien > one  officer > one random > one alien (spy) > one officer > [update from superior] > one official
  
  //1st case: alien (players should NOT approve this 
  cout << "You: Passport and entry pass please!" << endl;
  
  string userinput = "";
  while (userinput != "Y" && userinput != "N")
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
      cout << "Birthday: " << "2045-09-12" << endl;
      cout << "Issue date: " << "2035-12-30" << endl;
      cout << "Planet: " << "Planet S-23" << endl;
      cout << "Passport Number: " << "465354987" << endl;
      cout << "-------------------------" << endl;	
    
      //ADD ENTRY PASS INFO HERE!!!!!!!!!!!!
	  
	  
	  
      //for invalid input
      while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N")
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
     	system("CLS"); //or clear
     	cout << "Approved country list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Australia \n China \n Gotham City \n Papua New Guinea \n United Kingdome \n United States \n" << endl; //////////////////////////////////////////Not yet completed
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("CLS"); //or clear
     }     
     else if (userinput == "2")
     {
     	system("CLS"); ///////////LINUX 好似係用clear rather than CLS
     	cout << "Approved planet list" << endl;
     	cout << "--------------------------------------" << endl;
     	cout << "Planet S-23 \n Planet Razer \n Planet Music \n Zootopia \n Planet 1117 \n Planet Smiley Face \n Smiley world \n" << endl;
     	cout << endl;
     	cout << "Press enter to continue" << endl;
     	cin.get();
     	cin.get();
     	system("CLS"); //or clear
     
     else if (userinput == "3")
     {
     	system("CLS"); ///////////LINUX 好似係用clear rather than CLS
     	cout << "Scanner result: " << "Doll - Female" << endl;
     	cin.get();
     	cin.get();
	system("CLS"); ///////////LINUX 好似係用clear rather than CLS (可以留到最尾先改)
     }
   }
	  
	  

  
  //1st Earth official here
  
  
  //random case here
  
  
  //alien spy here
  
  //2nd Earth official here
  
  //update from superior Mr Kim here
  
  //3rd Earth official here






}
