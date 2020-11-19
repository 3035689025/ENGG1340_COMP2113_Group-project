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

void week1task(int& week, int& money, int& wrongattempts, cases record[], int &salary)
{
	cout << "背景" << endl << endl; /////////////////////////////////////////////////////////////////背景未填
	cout << "Press enter to continue" << endl;
	cin.get();
	system("CLS"); ///////////LINUX 好似係用clear rather than CLS

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

	cout << "Your duty this week:" << endl << endl;
	cout << "duty" << endl << endl;  /////////////////////////////////////////////////////////////////duty未填
	cout << "Press enter to continue" << endl;
	cin.get();
	system("CLS"); ///////////LINUX 好似係用clear rather than CLS

	//Time counter
	auto current = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - current;

	while (elapsed_seconds.count() < 1)
	{
		string userinput = "";
		srand(time(0));
		int case_index = rand() % 20;

		cout << endl << endl << "You: Passport please!" << endl;
		Sleep(6);


		while (userinput != "Y" && userinput != "N")
		{
			cout << endl;
			icon(record[case_index].icon);
			cout << endl << "Visitor: Hello! Here is my passport" << endl << endl;

			// Print passport
			cout << "Passport information" << endl;
			cout << "-------------------------" << endl;
			cout << "Name: " << record[case_index].PP_name << endl;
			cout << "Gender: " << record[case_index].PP_gender << endl;
			cout << "Birthday: " << record[case_index].PP_birth << endl;
			cout << "Issue date: " << record[case_index].PP_issue << endl;
			cout << "Country: " << record[case_index].PP_country << endl; ///////////////////////Nationality?
			cout << "Passport Number: " << record[case_index].PP_number << endl;
			cout << "-------------------------" << endl;

			cout << "\n \n \n \n";
			cout << "Your action:" << endl;
			cout << "[1] Check approved countries (Earth)" << endl;
			cout << "[2] Check approved planets" << endl;
			cout << "[3] Scanner (For checking gender) " << endl;
			cout << "[Y] Aprrove (Permit to enter) " << endl;
			cout << "[N] Disapprove (Not permit to enter) " << endl;
			cout << endl << "input: ";
			cin >> userinput;
			


			while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N")
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
							cout << "Warning letter 內容" << endl; ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////未填(應該唔比入 但批左佢入)
							cout << "Press enter to continue" << endl;
							cin.get();
							cin.get();
							system("CLS"); ///////////LINUX 好似係用clear rather than CLS
						}
					}

					//Wrong aprrved 
					if (record[case_index].vailidity == false)
					{
						system("CLS"); ///////////LINUX 好似係用clear rather than CLS
						wrongattempts++;
						cout << "Warning letter" << endl;
						cout << "--------------------------------------" << endl;
						cout << "Warning letter 內容" << endl; ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////未填(應該唔比入 但批左佢入)
						cout << "Press enter to continue" << endl;
						cin.get();
						cin.get();
						system("CLS"); ///////////LINUX 好似係用clear rather than CLS
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
						cout << "Warning letter 內容" << endl;///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////未填(應該比入 但無批佢入)
						cout << "Press enter to continue" << endl;
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
