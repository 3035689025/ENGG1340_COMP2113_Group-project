#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "cases.h"
#include "casessetup.h"
#include "week1task.h"
#include "week2task.h"
#include "week3task.h"
#include "week4task.h"
#include "week5task.h"
using namespace std;


int main()
{
	int week, money, wrongattempts, salary;
	cases record[43];
	casessetup(record);

	// New game
	week = 1;
	money = 50;
	wrongattempts = 0;
	salary = 0;
	week1task(week, money, wrongattempts, record, salary);
	
	
	//_______________________________________________________________________________________________
	//no of week, money, wrong attempts previously, no of entries approving spies, accept invite?> 5
        const int numofitemsinsave =  5
    
        //insert variables for stored data here
        int week, money, wrongattempts, spiesapproved;
        bool finalweek = true;
        string line
    
        //opening save file
        ifstream fin;
        fin.open(save.txt);
        if (fin.fail()) {
            cout << "Error opening save file." <<endl;
            //a default all "0" txt file is required
            return 0;
        }
        else {
            getline(fin, line))
            isstringstream iss(line);
             string new tem;
            //loop through different saves
            iss >> tem;
            week = tem;
            iss >> tem;
            money = tem;
            iss >> tem;
            wrongattempts = tem;
            iss >> tem;
            spiesapproved = tem;
            delete tem;
        }
        //rng cases
        int right = 0, wrong = 0;
        switch (week){
            //when the game has not been played / reset after the game is finished
            case 0: week1rng( int & right, int & wrong ); break;
            case 1: week2rng( int & right, int & wrong ); break;
            case 2: week3rng( int & right, int & wrong ); break;
            case 3: week4rng( int & right, int & wrong ); break;
            case 4: week5rng( int & right, int & wrong ); break;
            default break;
        }
        //special events for each week
        switch (week){
            case
        }
        fin.close();
        switch ()
        return 0;
	

}
