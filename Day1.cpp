#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <cstdlib>
using namespace std;

//////////////////include struct個header
/////////////////icon個function

////////////////void week1(int& week, int& money, int& wrongattempts, int& spiesapproved, struct個array) { //start newgame既話要declare曬佢地係0先 再唔係唔知可唔可以default係0
//pack everything in the week1 function?
int main(){
	cout << "The year is 2077. Earth is opening after 30 years if self-isolation. You are Border Officer, B-263-54, working at the Earth Border. Your job is to
		protect Earth from unwanted visitors. Follow the guidelines, approve or disapprove accordingly." << endl << endl;
	cout << "Press enter to continue" << endl;
	cin.get();
	//include the headings <stdlib. h> or <cstdlib>
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
	//print the icon of your superior
	//cout << icon
	//cout << "Officer aaa:
	cout << "duty" << endl << endl;  /////////////////////////////////////////////////////////////////duty未填
	cout << "Press enter to continue" << endl;
	cin.get();
	system("CLS"); ///////////LINUX 好似係用clear rather than CLS

	//Time counter
	auto current = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - current;
	int salary=0;

	while (elapsed_seconds.count() < 180)
	{
		string userinput = "";
		srand(time(0));
		int case_index = rand() % 20;

		cout << endl << endl << "You: Passport please!" << endl;
		icon(record[case_index].icon);
		/////////////////////////////////////////wait 1s 比D緊張感??
		cout << endl << "Visitor: Hello, Here is my passport" << endl << endl;
		/////////////////////////////////////////////wait 1s 





		while (userinput != "Y" && userinput != "N")
		{
			// Print passport
			cout << "Passport information" << endl;
			cout << "Name: " << record[case_index].PP_name << endl;
			cout << "Gender: " << record[case_index].PP_gender << endl;
			cout << "Birth" << record[case_index].PP_birth << endl;
			cout << "Issue date: " << record[case_index].PP_issue << endl;
			cout << "Country: " << record[case_index].PP_country << endl; ///////////////////////Nationality?
			cout << "Passport Number: " << record[case_index].PP_number << endl;

			cout << "\n \n \n \n \n \n \n \n";
			cout << "Your action:" << endl;
			cout << "[1] Check approved countries (Earth)" << endl;
			cout << "[2] Check approved planets" << endl;
			cout << "[3] Scanner (For checking gender) " << endl;
			cout << "[Y] Aprrove (Permit to enter) " << endl;
			cout << "[N] Disapprove (Not permit to enter) " << endl;
			cin >> userinput;

			while (userinput != "1" && userinput != "2" && userinput != "3" && userinput != "Y" && userinput != "N")
			{
				cout << "Invalid input, Try again" << endl;
				cout << "[1] Check approved countries (Earth)" << endl;
				cout << "[2] Check approved planets" << endl;
				cout << "[3] Scanner (For checking gender) " << endl;
				cout << "[Y] Aprrove (Permit to enter) " << endl;
				cout << "[N] Disapprove (Not permit to enter) " << endl;
				cin >> userinput;


				if (userinput == "1")
				{
					cout << "Approved country list" << endl;
					cout << "--------------------------------------" << endl;
					cout << "E.G. China" << endl; //////////////////////////////////////////Not yet completed
					cout << endl;
					cout << "Press enter to continue" << endl;
					cin.get();
					system("CLS"); ///////////LINUX 好似係用clear rather than CLS
				}

				else if (userinput == "2")
				{
					cout << "Approved planet list" << endl;
					cout << "--------------------------------------" << endl;
					cout << "Empty" << endl;
					cout << endl;
					cout << "Press enter to continue" << endl;
					cin.get();
					system("CLS"); ///////////LINUX 好似係用clear rather than CLS
				}

				else if (userinput == "3")
				{
					cout << "Scanner result: " << record[case_index].icon << endl;
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
							salary += 5;
						}

						else
						{
							wrongattempts++;
							cout << "Warning letter" << endl;
							cout << "--------------------------------------" << endl;
							cout << "Warning letter 內容"; ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////未填(應該唔比入 但批左佢入)
						}
					}
					//Wrong aprrved 
					if (record[case_index].vailidity == false)
					{
						wrongattempts++;
						cout << "Warning letter" << endl;
						cout << "--------------------------------------" << endl;
						cout << "Warning letter 內容"; ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////未填(應該唔比入 但批左佢入)
					}
				}

				else if (userinput == "N" || userinput == "n")
				{
					if (record[case_index].vailidity == true)
					{
						wrongattempts++;
						cout << "Warning letter" << endl;
						cout << "--------------------------------------" << endl;
						cout << "Warning letter 內容"; ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////未填(應該比入 但無批佢入)
					}
				}
			}
		}
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - current;
	}
	endofday1(); ///////////////////////////////////////////////////// no completed
}
