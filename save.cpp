#include <iostream>
#include <fstream>
#include <string>
#include "save.h"
using namespace std;

//Return 0 - Exit game after saving
//Return 1 - Continue game after saving
int save(int week, int money, int wrongattempts)
{
	cout << "Save game" << endl;
	cout << "--------------------------------" << endl << endl;

	//Save1
	ifstream save1;
	save1.open("save1.txt");

	if (save1.fail())
	{
		cout << "Save1 - Not exist" << endl; // To show that there is no existing save
		save1.close();
	}

	else
	{
		int save1_week;
		int save1_money;
		int save1_wrongattempts;
		save1 >> save1_week >> save1_money >> save1_wrongattempts;
		save1.close();
		cout << "Save1 -   Week:" << save1_week << "   Money: " << save1_money << "   Wrong attempts: " << save1_wrongattempts << endl; // Print out the status of the save
	}

	//Save2
	ifstream save2;
	save2.open("save2.txt");

	if (save2.fail())
	{
		cout << "Save2 - Not exist" << endl;
		save2.close();
	}
	else
	{
		int save2_week;
		int save2_money;
		int save2_wrongattempts;
		save2 >> save2_week >> save2_money >> save2_wrongattempts;
		save2.close();
		cout << "Save2 -   Week:" << save2_week << "   Money: " << save2_money << "   Wrong attempts: " << save2_wrongattempts << endl;
	}

	//Save3
	ifstream save3;
	save3.open("save3.txt");

	if (save3.fail())
	{
		cout << "Save3 - Not exist" << endl;
		save3.close();
	}
	else
	{
		int save3_week;
		int save3_money;
		int save3_wrongattempts;
		save3 >> save3_week >> save3_money >> save3_wrongattempts;
		save3.close();
		cout << "Save3 -   Week:" << save3_week << "   Money: " << save3_money << "   Wrong attempts: " << save3_wrongattempts << endl;
	}

	cout << endl << "Action:" << endl;
	cout << "[1] " << " Save as (or replace) save 1" << endl;
	cout << "[2] " << " Save as (or replace) save 2" << endl;
	cout << "[3] " << " Save as (or replace) save 3" << endl;
	cout << "[Y] " << " Continue the game" << endl;
	cout << endl;
	cout << "Input:";
	string input;
	do
	{
		cin >> input;

		if (input == "1") //Save as save1
		{
			ofstream save1;
			save1.open("save1.txt");
			if (save1.fail())
			{
				cout << "Save error, please try again" << endl;
				input = "bug";
			}
			else
			{
				save1 << week << " " << money << " " << wrongattempts << endl;
				save1.close();
			}

		}

		else if (input == "2") //Save as save2
		{
			ofstream save2;
			save2.open("save2.txt");
			if (save2.fail())
			{
				cout << "Save error, please try again" << endl;
				input = "bug";
			}
			else
			{
				save2 << week << " " << money << " " << wrongattempts << endl;
				save2.close();
			}

		}

		else if (input == "3") //Save as save3
		{
			ofstream save3;
			save3.open("save2.txt");
			if (save3.fail())
			{
				cout << "Save error, please try again" << endl;
				input = "bug";
			}
			else
			{
				save3 << week << " " << money << " " << wrongattempts << endl;
				save3.close();
			}
		}

		else if (input == "Y" || input == "y") //Continue the game
		{
			return 1;
		}

		else
		{
			cout << "Invaild input, please try again" << endl;
			cout << "Input: ";
		}
	} while (!(input == "1" || input == "2" || input == "3" || input == "Y" || input == "y")); //Ask whether the player continue the game

	system("CLS");
	cout << "Do you want to exit the game?" << endl << endl;
	cout << "[Y] Exit" << endl;
	cout << "[N] Continue the game" << endl;
	cout << endl << "Input: ";


	string quitinput;
	cin >> quitinput;


	while (!(quitinput == "Y" || quitinput == "y" || quitinput == "N" || quitinput == "n"))  //Invaild input
	{
		cout << "Invaild input, please try again" << endl;
		cout << "Input: ";
		cin >> quitinput;
	}
	if (quitinput == "Y" || quitinput == "y")
	{
		return 0;
	}
	else if (quitinput =="N" || quitinput == "n")
	{
		return 1;
	}
}
