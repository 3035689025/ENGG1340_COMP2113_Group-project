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
	auto start = std::chrono::system_clock::now()

	while (userinput != "Y" && userinput != "N" && userinput != "y" && userinput !="n")
	{

		cout << endl;
		int namelenght = record[case_index].PP_name.length(); //For random draw of the icon
		
		auto end = std::chrono::system_clock::now(); //For time count usege
		cout << setw(99) << "Week: " << wrongattempts << endl;
		cout << setw(99) << "Wrong attempts: " << wrongattempts << endl;
		cout << setw(99) << "Salary: " << salary << endl;
		cout << setw(99) << "Time left: " << 60 - std::chrono::duration_cast<std::chrono::seconds>(end - start).count() - timecount << endl;

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
			cout << "E.G. China" << endl; //////////////////////////////////////////Not yet completed
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
			cout << "Empty" << endl; //////////Not yet completed
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
				cout << record[case_index].explanation << endl << endl << endl;
				cout << "Press enter to continue" << endl;
				cin.get();
				cin.get();
				system("clear");
			}
		}
	}
}
