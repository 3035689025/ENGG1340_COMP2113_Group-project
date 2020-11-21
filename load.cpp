#include <iostream>
#include <fstream>
#include <string>
#include "load.h"
using namespace std;

//This function allows user to load their save
//Variable week will be changed based on their save
//If the save load unsuccessfully, the variable will remain unchanged(suppose it will remain as week 0)

void load(int& week, int& money, int& wrongattempts) 
{
	cout << "Load game" << endl;
	cout << "--------------------------------" << endl << endl;

	//To indicate that there is a save
	int save1_available = 0;
	int save2_available = 0;
	int save3_available = 0;
	//Save1
	ifstream save1;
	save1.open("save1.txt");

	if (save1.fail())
	{
		cout << "Save1 - Not exist" << endl;
		save1.close();
	}

	else
	{
		int save1_week;
		int save1_money;
		int save1_wrongattempts;
		save1_available = 1;
		save1 >> save1_week >> save1_money >> save1_wrongattempts;
		cout << "Save1 -   Week:" << save1_week << "   Money: " << save1_money << "   Wrong attempts: " << save1_wrongattempts << endl;
		save1.close();
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
		save2_available = 1;
		save2 >> save2_week >> save2_money >> save2_wrongattempts;
		cout << "Save2 -   Week:" << save2_week << "   Money: " << save2_money << "   Wrong attempts: " << save2_wrongattempts << endl;
		save2.close();
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
		save3_available = 1;
		save3 >> save3_week >> save3_money >> save3_wrongattempts;
		cout << "Save3 -   Week:" << save3_week << "   Money: " << save3_money << "   Wrong attempts: " << save3_wrongattempts << endl;
		save3.close();
	}

	cout << "Action:" << endl;

	if (save1_available == 1) //Save1 can be loaded
	{
		cout << "[1] Load save1" << endl;
	}

	if (save2_available == 1) //Save2 can be loaded
	{
		cout << "[2] Load save2" << endl;
	}

	if (save3_available == 1) //Save3 can be loaded
	{
		cout << "[3] Load save3" << endl;
	}

	cout << "[N] Back to the previous page" << endl;
	cout << "Input: ";

	string loadinput = "";

	do
	{
		cin >> loadinput;

		if (loadinput == "1" && save1_available == 1) //Loading save1
		{
			save1.open("save1.txt");
			save1 >> week >> money >> wrongattempts;
			save1.close();

			return;
		}

		if (loadinput == "2" && save2_available == 1)
		{
			save2.open("save2.txt");
			save2 >> week >> money >> wrongattempts; // Load save1
			save2.close();

			return;
		}

		if (loadinput == "3" && save3_available == 1)
		{
			save3.open("save3.txt");
			save3 >> week >> money >> wrongattempts; // Load save1
			save3.close();

			return;
		}
		if (loadinput == "N" || loadinput == "n") 
		{
			return;
		}
		else
		{
			cout << "Invaild input, please try again" << endl;
			cout << "Input: ";
		}


	} while (!((loadinput == "1" && save1_available == 1) || (loadinput == "2" && save2_available == 1) || (loadinput == "3" && save3_available == 1))); // While insuccessful load and invaild command
}
