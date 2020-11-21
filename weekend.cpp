#include <iostream>
#include <string>
#include <iomanip>
#include "weekend.h"
using namespace std;

int week_end(int &week, int &money, int &wrongattempts, int &salary, int &gameover)
{
	//Return 1 when the game is over
	//Return 0 to keep continue the game
	if (week == 3) 
	{
		//bribery from The Infected
		system("clear");
		cout << "Urgent note from The Infected";
		cout << "--------------------------------------";
		cout << "In the briefcase, you will find $10000. Please accept it and fight alongside us. We need your help!" << endl;

		system("clear");
		cout << "You: Should I accept it? If I do, I don't have to worry about money anymore. But if I get caught with this briefcase...it's certain death." << endl << endl;
		cout <<"Even if I don't accept the money, I can still support the rebels. Decisions...Decisions..." << endl;

		system("clear");
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
				//died from greed (accepting the bribery)
				system("clear");
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
                                cout << "Officer Kim: You think we won't notice a briefcase full of money lying around? You have no integrity! No loyalty!" << endl << endl;
				cout << "* BANG *" << endl;
                                cout << endl << endl;
                                cout << "Press enter to continue" << endl;
                                cin.get();
                                system("clear");

				cout << "Ending: Died from greed" << endl;
				cout << endl << endl;
				cout << "-THE END-" << endl;
				cout << endl << endl;
				cout << "Press enter to continue" << endl;
				cin.get();
				system("clear");
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
		if (wrongattempts > 10) { //too many wrong attempts	
			
			//Died in disgrace (1) (too many wrong attempts)
			system("clear");
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
                        cout << "Officer Kim: You are utterly incompetent! Your work is a disgrace to this beautiful planet! I've given you too many chances, now face the consequences!" << endl << endl;
			cout << "* BANG *" << endl;
                        cout << endl << endl;
                        cout << "Press enter to continue" << endl;
                        cin.get();
                        system("clear");
			
			
			cout << "Ending: Died in disgrace (1)" << endl;
			cout << endl << endl;
			cout << "-THE END-" << endl;
			cout << endl << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			system("clear");
			return 1;
		}

		             int Rent = 20, Food = 20, Electricity = 20;
		system("clear");
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

		if (money < 0) //run out of money
		{
			//died in competence
			system("clear");
			cout << "You: After all the hard work, still...I haven't had a proper meal in weeks. I'm seriously overworked..." << endl << endl;
			cout << "You: ...and now I've run out of money..." <<endl << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			system("clear");

			cout << "News:" <<endl;
                        cout << "___________________________________________________________________" << endl << endl;
                        cout << "Board officer starved to death. Officials say changes will be made in the near future, but the death was due to \"his own incompetence\"." << endl << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			system("clear");

			cout << "Ending: Died in incompetence" << endl;
			cout << endl;
			cout << "Press enter to continue" << endl;
			cin.get();
			system("clear");
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
				system("clear");
			}

			else if (userinput == "Y" || userinput == "y")
			{ // Buy house ending
				if (money >= 3000)
				{
					//ending for cheaters
					system("clear");
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
                                        cout << "Officer Kim: There is one thing I hate more than useless officers...CHEATERS!!!!!" << endl << endl;
					cout << "Press enter to continue" << endl;
                                        cin.get();
                                        system("clear");

					system("clear");
					cout << "-GAME OVER-" << endl << endl;
					cout << "Press enter to continue" << endl;
			                cin.get();
			                system("clear");

					cout << "Ending: You cheated..." << endl;
					cout << endl;
					cout << "Press enter to continue" << endl;
					cin.get();
					system("clear");
					return 1;
				}
				else if (money < 3000)// Insufficient money
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
		system("clear");
		return 0;
	}
}
