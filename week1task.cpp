#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "cases.h"
#include "icon.h"
#include "week1task.h"
using namespace std;

void week1task(int& week, int& money, int& wrongattempts, cases record[], int &salary)
{
	cout << "The year is 2077. Earth is opening after 30 years of self-isolation. You are the Border Officer, B-263-54, chosen from millions to work at the Earth Border. Your job is to protect Earth from unwanted visitors. Follow the instructions from your superior, Officer Kim, approve or disapprove accordingly." << endl << endl;
	cout << "Press enter to continue" << endl;
	cin.get();
	//include the headings <stdlib. h> or <cstdlib>
	system("CLS"); //or clear

	cout << setw(53) << "Income statement (Expected) after week 1" << endl << endl;
	cout << setw(25) << "Item" << " |" << setw(20) << "Fee" << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << setw(25) << "Savings" << " |" << setw(20) << money << endl;
	cout << setw(25) << "Salary" << " |" << setw(20) << "$??" << endl;
	cout << setw(25) << "Rent" << " |" << setw(20) << "-$20" << endl;
	cout << setw(25) << "Food" << " |" << setw(20) << "-$20" << endl;
	cout << setw(25) << "Electricity" << " |" << setw(20) << "-$20" << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << setw(47) << "$??" << endl;
	cout << endl << endl;
	cout << "Press enter to continue" << endl;
	cin.get();
	system("CLS"); ///////////LINUX 好似係用clear rather than CLS
	
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

	cout << "Officer Kim: Only allow humans with valid passports to enter this week. The safety of our planet is in your hands!" << endl << endl; 
	cout << "Press enter to continue" << endl;
	cin.get();
	system("CLS"); ///////////LINUX 好似係用clear rather than CLS

	//Time counter
	auto current = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - current;
	
	int las_index=-1;
	while (elapsed_seconds.count() < 1)
	{
		string userinput = "";
		int case_index =0;
		do
		{
			srand(time(0));
			case_index = rand() % 20;
		} while (last_index == case_index);
		last_index = case_index;

		cout << endl << endl << "You: Passport please!" << endl;
		Sleep(6);


		while (userinput != "Y" && userinput != "N")
		{
			cout << endl;
			int lenght = record[case_index].PP_name.length();
			icon(record[case_index].icon, lenght);
			cout << endl << "Visitor: Hello! Here is my passport" << endl << endl;

			// Print passport
			cout << "Passport information" << endl;
			cout << "-------------------------" << endl;
			cout << "Name: " << record[case_index].PP_name << endl;
			cout << "Gender: " << record[case_index].PP_gender << endl;
			cout << "Birthday: " << record[case_index].PP_birth << endl;
			cout << "Issue date: " << record[case_index].PP_issue << endl;
			cout << "Planet: " << record[case_index].PP_country << endl; 
			
			cout << "Passport Number: " << record[case_index].PP_number << endl;
			cout << "-------------------------" << endl;

			cout << "\n \n \n \n";
			cout << "Your action:" << endl;
			cout << "[1] Check approved countries (Earth)" << endl;
			cout << "[2] Check approved planets" << endl;
			cout << "[3] Scanner (For checking gender) " << endl;
			cout << "[Y] Aprrove entry " << endl;
			cout << "[N] Disapprove entry " << endl;
			cout << endl << "input: ";
			cin >> userinput;
			


			while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N" && userinput !="y" && userinput !="n")
			{
				cout << "Invalid input, Try again" << endl;
				cout << "[1] Check approved countries (Earth)" << endl;
				cout << "[2] Check approved planets" << endl;
				cout << "[3] Scanner (For checking gender) " << endl;
				cout << "[Y] Aprrove entry " << endl;
				cout << "[N] Disapprove entry " << endl;
				cout << endl << "Input:";
				cin >> userinput;
			}


				if (userinput == "1")
				{	
					system("CLS"); ///////////LINUX 好似係用clear rather than CLS
					cout << "Approved country list" << endl;
					cout << "--------------------------------------" << endl;
					cout << "Australia \n China \n Gotham City \n Papua New Guinea \n United Kingdome \n United States \n" << endl; //////////////////////////////////////////Not yet completed
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
					cout << "Empty" << endl;
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
					//Vailidity check
					if (record[case_index].vailidity == true) //No problem found in passport and entry-pass
					{
						if (record[case_index].icon == "Human - Male" || record[case_index].icon == "Human - Female")
						{
							system("CLS"); ///////////LINUX 好似係用clear rather than CLS
							salary += 5;
						}

						else
						{
							system("CLS"); ///////////LINUX 好似係用clear rather than CLS
							wrongattempts++;
							cout << "Warning letter" << endl;
							cout << "--------------------------------------" << endl;
							cout << "Your choice was wrong due to the following reasons: " << endl; 
							cout << "Allien is not allowed to enter" << endl << endl << endl;
							cout << "Press enter to continue" << endl;
							cin.get();
							cin.get();
							system("CLS"); ///////////LINUX 好似係用clear rather than CLS
						}
					}

					//Wrong aprrved 
					if (record[case_index].vailidity == false)
					{
						if (record[case_index].icon != "Human - Male" || record[case_index].icon != "Human - Female")
						{
							system("CLS"); ///////////LINUX 好似係用clear rather than CLS
							wrongattempts++;
							cout << "Warning letter" << endl;
							cout << "--------------------------------------" << endl;
							cout << "Your choice was wrong due to the following reasons: " << endl; 
							cout << "Allien is not allowed to enter" << endl << endl << endl;
							cout << "Press enter to continue" << endl;
							cin.get();
							cin.get();
							system("CLS"); ///////////LINUX 好似係用clear rather than CLS
						}
						else{
							system("CLS"); ///////////LINUX 好似係用clear rather than CLS
							wrongattempts++;
							cout << "Warning letter" << endl;
							cout << "--------------------------------------" << endl;
							cout << "Your choice was wrong due to the following reasons: " << endl; 
							cout << record[case_index].explanation << endl << endl << endl;
							cout <<"Press enter to continue" << endl;
							cin.get();
							cin.get();
							system("CLS"); ///////////LINUX 好似係用clear rather than CLS
						}
					}
				}



				else if (userinput == "N" || userinput == "n")
				{
					if (record[case_index].icon != "Human - Female" || record[case_index].icon != "Human - Male")
					{
						system("CLS"); ///////////LINUX 好似係用clear rather than CLS
						salary += 5;
					}
					else if (record[case_index].vailidity == true)
					{
						system("CLS"); ///////////LINUX 好似係用clear rather than CLS
						wrongattempts++;
						cout << "Warning letter" << endl;
						cout << "--------------------------------------" << endl;
						cout << "Your choice was wrong due to the following reasons: " << endl; 
						cout << record[case_index].explanation << endl << endl << endl;
						cout <<"Press enter to continue" << endl;
						cin.get();
						cin.get();
						system("CLS"); ///////////LINUX 好似係用clear rather than CLS
					}
				}
		}
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - current;
	}
		
}
