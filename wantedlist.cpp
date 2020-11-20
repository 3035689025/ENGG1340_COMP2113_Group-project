#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include "icon.h"
#include "cases.h"
#include "wantedlist.h"
using namespace std;

void wantedlist(int &wantedlist1, int &wantedlist2, int &wantedlist3, cases record[], int& salary, int& wrongattempts, int timecount)
{
	string userinput = "";
	int case_index;
	if (wantedlist1 == 0) 
	{
		cout << "warning41";
		case_index = 40;
		wantedlist1 = 1;
	}
	else if (wantedlist2 == 0) 
	{
		cout << "warning42";
		case_index = 41;
		wantedlist2 = 1;
	}
	else{
		cout << "warning43";
		case_index = 42;
		wantedlist3 = 1;
	}
	
	//Time counter
	auto start = std::chrono::system_clock::now();

	while (userinput != "Y" && userinput != "N" && userinput != "y" && userinput !="n")
	{
		auto end = std::chrono::system_clock::now(); //For time count usege
		cout << setw(99) << "Wrong attempts: " << wrongattempts << endl;
		cout << setw(99) << "Salary: " << salary << endl;
		cout << setw(99) << "Time left: " << 60 - std::chrono::duration_cast<std::chrono::seconds>(end - start).count() - timecount << endl;
		
		cout << endl;
		int namelenght = record[case_index].PP_name.length(); //For random draw of the icon

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
		cout << "Birth-day: " << record[case_index].EP_birth << endl;
		cout << "Planet: " << record[case_index].EP_country << endl;

		//////////////呢到可以轉一轉 switch(case) print唔同野 E.G. Wanted list 等陣再傾下
		/////// ////////////if (week == 2 || week == 3){}
		cout << "\n \n \n \n";
		cout << "Your action:" << endl;
		cout << "[1] Check approved countries (Earth)" << endl;
		cout << "[2] Check approved planets" << endl;
		cout << "[3] Scanner (For checking gender) " << endl;
		cout << "[Y] Aprrove (Permit to enter) " << endl;
		cout << "[N] Disapprove (Not permit to enter) " << endl;
		cout << endl << "input: ";
		cin >> userinput;


		///////////////呢到可以轉一轉 switch(case) print唔同野 E.G. Wanted list 等陣再傾下
		/////////////// if (week == 2 || week == 3){}
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
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS
			cout << "Approved country list" << endl;
			cout << "--------------------------------------" << endl;
			cout << "E.G. China" << endl; //////////////////////////////////////////Not yet completed
			cout << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			cin.get();
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS
		}

		else if (userinput == "2")
		{
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS
			cout << "Approved planet list" << endl;
			cout << "--------------------------------------" << endl;
			cout << "Empty" << endl; //////////Not yet completed
			cout << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			cin.get();
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS
		}

		else if (userinput == "3")
		{
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS
			cout << "Scanner result: " << record[case_index].icon << endl;
			cin.get();
			cin.get();
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS (可以留到最尾先改)
		}

		else if (userinput == "Y" || userinput == "y")
		{	
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS
			wrongattempts++;
			cout << "Warning letter" << endl;
			cout << "--------------------------------------" << endl;
			cout << "Your choice was wrong due to the following reasons: " << endl; //////////////////////On wanted list
			cout << record[case_index].explanation << endl << endl << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			cin.get();
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS
		}

		else if (userinput == "N" || userinput == "n")
		{

		}
	}
}
