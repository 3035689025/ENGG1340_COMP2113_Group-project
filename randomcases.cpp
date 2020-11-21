#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <iomanip>
#include "icon.h"
#include "cases.h"
#include "randomcases.h"
using namespace std;

//This function will randomly draw a case from the cases record, and read userinput whether they approve or disapprove the visitors.
//Each rightly approve visitors will bring $5 to players
//If wrongly approve/disapprove the visitors, the wrongattempts will increase
//Wrongattempts > 15 will trigger one of the ending

//for random cases for the users to check
void randomcases(int week, cases record[], int &salary, int &wrongattempts, int &last_index, int timecount) 
{
	int case_index = 0;
	string userinput="";
	do 
	{
		srand(time(0));
		case_index = rand() % 40;
	} while (last_index == case_index);
	
	last_index = case_index;
	
	//Time counter
	auto start = std::chrono::system_clock::now();

	while (userinput != "Y" && userinput != "N" && userinput != "y" && userinput !="n")
	{

		cout << endl;
		int namelenght = record[case_index].PP_name.length(); //For random draw of the icon
		
		auto end = std::chrono::system_clock::now(); //For time count usege
		cout << setw(99) << "Week: " << week << endl;
		cout << setw(99) << "Wrong attempts: " << wrongattempts << endl;
		cout << setw(99) << "Salary: " << salary << endl;
		cout << setw(99) << "Time left: " << 90 - std::chrono::duration_cast<std::chrono::seconds>(end - start).count() - timecount << endl;

		icon(record[case_index].icon, namelenght);

		cout << endl << "Visitor: Hello, Here is my passport" << endl << endl;

		// Print passport
		cout << "Passport information" << endl;
		cout << "-------------------------" << endl;
		cout << "Name: " << record[case_index].PP_name << endl;
		cout << "Gender: " << record[case_index].PP_gender << endl;
		cout << "Birthday: " << record[case_index].PP_birth << endl;
		cout << "Issue date: " << record[case_index].PP_issue << endl;
		cout << "Planet: " << record[case_index].PP_country << endl; 
		cout << "Passport Number: " << record[case_index].PP_number << endl;
		cout << "-------------------------" << endl << endl;

		// Print entry-pass
		cout << "Entry pass information" << endl;
		cout << "-------------------------" << endl;
		cout << "Name: " << record[case_index].EP_name << endl;
		cout << "Gender: " << record[case_index].EP_gender << endl;
		cout << "Birthday: " << record[case_index].EP_birth << endl;
		cout << "Planet: " << record[case_index].EP_country << endl;
		
		// User action
		cout << "\n \n \n \n";
		cout << "Your action:" << endl;
		cout << "[1] Check approved countries (Earth)" << endl;
		cout << "[2] Check approved planets" << endl;
		cout << "[3] Scanner (For checking gender) " << endl;
		cout << "[Y] Aprrove (Permit to enter) " << endl;
		cout << "[N] Disapprove (Not permit to enter) " << endl;
		cout << endl << "input: ";
		cin >> userinput;


		// While loop to confirm the input is vaild
		while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N" && userinput != "y" && userinput != "n")
		{

			cout << "Invalid input, Try again" << endl;
			cout << "[1] Check approved countries (Earth)" << endl;
			cout << "[2] Check approved planets" << endl;
			cout << "[3] Scanner (For checking gender) " << endl;
			cout << "[Y] Aprrove (Permit to enter) " << endl;
			cout << "[N] Disapprove (Not permit to enter) " << endl;
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
			cout << "Scanner result: " << record[case_index].icon << endl;
			cin.get();
			cin.get();
			system("clear");
		}

		else if (userinput == "Y" || userinput == "y")
		{
			//Vailidity check

			//True cases
			if (record[case_index].vailidity == true) //No problem found in passport and entry-pass
			{
				system("clear");
				salary += 5;
			}


			//Wrong cases
			else if (record[case_index].vailidity == false)
			{
				system("clear");
				wrongattempts++;
				cout << "Warning letter" << endl;
				cout << "--------------------------------------" << endl;
				cout << "Your choice was wrong due to the following reasons: " << endl;
				cout << record[case_index].explanation << endl << endl << endl;
				cout << "Press enter to continue" << endl;
				cin.get();
				cin.get();
				system("clear");
			}
		}



		else if (userinput == "N" || userinput == "n")
		{
			if (record[case_index].vailidity == true)
			{
				system("clear");
				wrongattempts++;
				cout << "Warning letter" << endl;
				cout << "--------------------------------------" << endl;
				cout << "Your choice was wrong due to the following reasons: " << endl;
				cout << "The information of the visitors is correct" << endl << endl << endl;
				cout << "Press enter to continue" << endl;
				cin.get();
				cin.get();
				system("clear");
			}
			else
			{
				system("clear");
			}
		}
	}
}
