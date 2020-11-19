#include <iostream>
#include <string>
#include "cases.h"
#include "casessetup.h"
#include "week1task.h"
using namespace std;

int main()
{
	int week, money, wrongattempts, salary;
	cases record[40];
	casessetup(record);

	// New game
	week = 1;
	money = 50;
	wrongattempts = 0;
	salary = 0;
	week1task(week, money, wrongattempts, record, salary);

}