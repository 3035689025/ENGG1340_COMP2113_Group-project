#include <iostream>
#include <string>
#include <iomanip>
#include "dayend.h"
using namespace std;

int dayend(int &week, int &money, int &wrongattempts, int &salary, int &gameover)
{
	//Return 1 when the game is over
	//Return 0 to keep continue the game
	if (week == 3) 
	{
		system("CLS");
		cout << "Email from spies"; //////////////////////// 賄賂 ------needa type
		cout << endl << endl;
		cout << "Your action:" << endl;
		cout << "[Y] Accept money" << endl;
		cout << "[N] Burn the money and the letter" << endl;
		cout << endl;
		string week3userinput = "";
		while (!(week3userinput == "N" || week3userinput == "n")) 
		{
			cout << "Your input: ";
			cin >> week3userinput;
			if (week3userinput == "Y" || week3userinput == "y") 
			{
				system("CLS");
				cout << "Died in xxxxxxxxxxxxxxxxx" << endl; //////////////////////////////// Ending Y - died in 受賄 ------- needa type
				cout << endl;
				cout << "Press enter to continue" << endl;
				cin.get();
				system("CLS");
				return 1;
			}
			else if (!(week3userinput == "N" && week3userinput == "n"))
			{
				cout << endl;
				cout << "Invalid input, Please try again" << endl;
			}
		}
	}



	if (week == 1 || week == 2 || week == 3 || week == 4) //Evaluation every-week
	{
		if (wrongattempts > 10) { //Too much wrong attempts ending
			cout << "Died in disgrace(1)" << endl; //////////////////////////////// Ending 1 - Died in disgrace(1) ------- needa type
			cout << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			system("CLS");
			return 1;
		}

		int Rent = 20, Food = 20, Electricity = 20;
		system("CLS"); //or clear
		cout << endl << endl;
		cout << setw(40) << "Income statement" << endl << endl;
		cout << setw(25) << "Item" << " |" << setw(20) << "Fee" << endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << setw(25) << "Savings" << " |" << setw(20)  << money << endl;
		cout << setw(25) << "Salary" << " |" << setw(20)  << salary << endl;
		cout << setw(25) << "Rent" << " |" << setw(20)  << Rent << endl;
		cout << setw(25) << "Food" << " |" << setw(20)  << Food << endl;
		cout << setw(25) << "Electricity" << " |" << setw(20) << Electricity << endl;
		cout << "-----------------------------------------------------------" << endl;
		money = money + salary - Rent - Food - Electricity;
		salary = 0;
		cout << setw(47) << money << endl;
		cout << endl << endl;

		if (money < 0)
		{
			cout << "Press enter to continue" << endl;
			cin.get();
			system("CLS");
			cout << "Died in incompetence" << endl; ///////////////////////// Ending 2 - Died in incompetence --------needa typ
			cout << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			system("CLS"); ///////////LINUX 好似係用clear rather than CLS
			return 1;
		}

		// Money > 0
		cout << "Your action:" << endl;
		cout << "[Y] Buy a house and retire - $3000"  << endl;
		cout << "[N] Continue" << endl;
		cout << endl;
		cout << "Your input :";
		string userinput = "";
		cin >> userinput;

		do 
		{
			if (userinput == "N" || userinput == "n")
			{
				system("CLS");
			}

			else if (userinput == "Y" || userinput == "y")
			{ // Buy house ending
				if (money >= 3000)
				{
					system("CLS"); //or clear
					cout << "Died in cheating" << endl; ///////// Ending X - Died in cheating (Mission impossible for money > 3000) --------- needa type
					cout << endl;
					cout << "Press enter to continue" << endl;
					cin.get();
					system("CLS");
					return 1;
				}
				else if (money < 3000)// Insufficient money (<3000)
				{
					cout << endl;
					cout << "Error: insufficient money" << endl << endl;
					cout << "You input: ";
					cin >> userinput;
				}
			}

			else 
			{
				cout << endl;
				cout << "Invalid input, please try again" << endl << endl;
				cout << "You input: ";
				cin >> userinput;
			}
			
		} 
		while (!(userinput == "N" || userinput == "n"));


		cin.get();
		system("CLS"); ///////////LINUX 好似係用clear rather than CLS
		return 0;
	}
}