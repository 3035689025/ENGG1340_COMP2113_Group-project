#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
//List:
//Human - Female
//Human - Male
//Car
//Apple
//Smiley
//Mouse
//Photo
//Note
//Cat
int main() //void printicon(str icon){ //accept a parameter icon (E.G. Sword) and then print that respecitive ASCII art.
{
	string icon = "Sword"; //For testing


	if (icon == "Human - Female") 
	{
		srand(time(0)); //seed random number generator based on current time of the computer
		int v1 = rand() % 2; 

		if (v1 == 0) // 50%
		{
			cout << " /////////////\\\\\\\\\ \n";
			cout << " (((((((((((((( \\\\\\\ \n";
			cout << " ))) ~~      ~~  ((( \n";
			cout << " ((( (*)     (*) ))) \n";
			cout << " )))     <       ((( \n";
			cout << " ((( '\\______/`  ))) \n";
			cout << " )))\\___________/(((  \n";
			cout << "        _) (_  \n";
			cout << "       / \\_/ \\  \n";
			cout << "      /(     )\\  \n";
			cout << "     // )___( \\\\  \n";
			cout << "     \\\\(     )// \n";
			cout << "      (       ) \n";
			cout << "       |  |  | \n";
			cout << "        | | | \n";
			cout << "        | | | \n";
			cout << "       _|_|_|_ \n";
		}
		else if (v1 == 1) // 50%
		{
			cout << "    \\\\\\|||/// \n";
			cout << "  .  =======  \n";
			cout << " / \\| O   O | \n";
			cout << " \\ / \\`___'/  \n";
			cout << " (#) (     )  \n";
			cout << "  #\\//|   |\\\\  \n";
			cout << "  #\\/(  *  )/ \n";
			cout << "  #   =====   \n";
			cout << "  #   (   )  \n";
			cout << "  #   || || \n";
			cout << "  #   || || \n";
			cout << " .#---'| |`----. \n";
			cout << " `#----' `-----' \n";
		}
	}


	else if (icon == "Human - Male") 
	{
		srand(time(0));
		int v1 = rand() % 2;

		if (v1 == 0) 
		{
			cout << "      ////^\\\\\\ \n";
			cout << "      | ^   ^ | \n";
			cout << "     @ (o) (o) @ \n";
			cout << "      |   <   | \n";
			cout << "      |  ___  | \n";
			cout << "       \\_____/ \n";
			cout << "     ____|  |____ \n";
			cout << "    /    \\__/    \\ \n";
			cout << "   /              \\ \n";
			cout << "  /\\_/|        |\\_/\\ \n";
			cout << " / /  |        |  \\ \\ \n";
			cout << "( <   |        |   > ) \n";
			cout << " \\ \\  |        |  / / \n";
			cout << "  \\ \\ |________| / / \n";
		}

		else if (v1 == 1) 
		{
			cout << "    \\\\\\|||/// \n";
			cout << "  .  =======  \n";
			cout << " / \\| O   O | \n";
			cout << " \\ / \\`___'/  \n";
			cout << " (#) (     )  \n";
			cout << "  #\\//|   |\\\\  \n";
			cout << "  #\\/(  *  )/ \n";
			cout << "  #   =====   \n";
			cout << "  #   (   )  \n";
			cout << "  #   || || \n";
			cout << "  #   || || \n";
			cout << " .#---'| |`----. \n";
			cout << " `#----' `-----' \n";
		}
	}

	else if (icon == "Car") 
	{
		cout << "        _______" << endl;
		cout << "       //  ||\\ \\" << endl;
		cout << " _____//___||_\\ \\___" << endl;
		cout << " )  _          _    \\" << endl;
		cout << " |_/ \\________/ \\___|" << endl;
		cout << "___\\_/________\\_/______" << endl;
	}

	else if (icon == "Apple") 
	{
		cout << "          .:'" << endl;
		cout << "      __ :'__" << endl;
		cout << "   .'`__`-'__``." << endl;
		cout << "  :__________.-'" << endl;
		cout << "  :_________:" << endl;
		cout << "   :_________`-;" << endl;
		cout << "    `.__.-.__.'" << endl;
	}

	else if (icon == "Smiley") 
	{
		cout << "      _.-'''''-._" << endl;
		cout << "    .'  _     _  '." << endl;
		cout << "   /   (_)   (_)   \\ " << endl;
		cout << "  |  ,           ,  | " << endl;
		cout << "  |  \\`.       .`/  | " << endl;
		cout << "   \\  '.`'\"\"'\"`.'  /" << endl;
		cout << "    '.  `'---'`  .'" << endl;
		cout << "      '-._____.-'" << endl;
	}

	else if (icon == "Mouse") 
	{
		cout << "   	 ,. " << endl;
		cout << "    __.'_" << endl;
		cout << "   |__|__|" << endl;
		cout << "   |     | " << endl;
		cout << "   |-___-|" << endl;
		cout << "   '.___.'" << endl;
	}

	else if (icon == "Book")
	{
		cout << "       __..._   _...__" << endl;
		cout << "  _..-\"      `Y`      \"-._" << endl;
		cout << "  \\ Once upon |           /" << endl;
		cout << "  \\\\  a time..|          //" << endl;
		cout << "  \\\\\\         |         ///" << endl;
		cout << "   \\\\\\ _..---.|.---.._ ///" << endl;
		cout << "    \\\\`_..---.Y.---.._`//" << endl;
		cout << "     '`               `'" << endl;
	}

	else if (icon == "Photo")
	{
		cout << " ________________________" << endl;
		cout << " |.----------------------.|" << endl;
		cout << " ||                      ||" << endl;
		cout << " ||                      ||" << endl;
		cout << " ||     .-\"````\"-.       ||" << endl;
		cout << " ||    /  _.._    `\\     ||" << endl;
		cout << " ||   / /`    `-.   ; . .||" << endl;
		cout << " ||   | |__  __  \\   |   ||" << endl;
		cout << " ||.-.| | e`/e`  |   |   ||" << endl;
		cout << " ||   | |  |     |   |'--||" << endl;
		cout << " ||   | |  '-    |   |   ||" << endl;
		cout << " ||   |  \\ --'  /|   |   ||" << endl;
		cout << " ||   |   `;---'\\|   |   ||" << endl;
		cout << " ||   |    |     |   |   ||" << endl;
		cout << " ||   |  .-'     |   |   ||" << endl;
		cout << " ||'--|/`        |   |--.||" << endl;
		cout << " ||   ;    .     ;  _.\\  ||" << endl;
		cout << " ||    `-.;_    /.-'     ||" << endl;
		cout << " ||         ````         ||" << endl;
		cout << " ||______________________||" << endl;
		cout << " '------------------------'" << endl;
	}

	else if (icon == "Note")
	{
		cout << "      ; " << endl;
		cout << "      ;;" << endl;
		cout << "      ;';." << endl;
		cout << "      ;  ;;" << endl;
		cout << "      ;   ;;" << endl;
		cout << "      ;    ;;" << endl;
		cout << "      ;    ;;" << endl;
		cout << "      ;   ;'" << endl;
		cout << "      ;  ' " << endl;
		cout << " ,;;;,; " << endl;
		cout << " ;;;;;;" << endl;
		cout << " `;;;;'" << endl;
	}

	else if (icon == "Cat")
	{
		cout << " /\\_/\\" << endl;
		cout << "( o.o )" << endl;
		cout << " > ^ <" << endl;
	}

	else if (icon == "Dog")
	{
		cout << " _   _" << endl;
		cout << "/(. .)\\    )" << endl;
		cout << "  (*)____/| " << endl;
		cout << "  /       | " << endl;
		cout << " /   |--\\ | " << endl;
		cout << "(_)(_)  (_) " << endl;
	}


	else if (icon == "Sword")
	{
		srand(time(0));
		int v1 = rand() % 2;

		if (v1 == 0) 
		{
			cout << "      )  |    )  " << endl;
			cout << "    '   /|\\    `  " << endl;
			cout << "   )   / | \\  ` )     " << endl;
			cout << "  {    | | |  {     " << endl;
			cout << " }     | | |  .  " << endl;
			cout << "  '    | | |    )  " << endl;
			cout << " (    /| | |\\    .  " << endl;
			cout << "  .  / | | | \\  (  " << endl;
			cout << "}    \\ \\ | / /  .   " << endl;
			cout << " (    \\ `-' /    }   " << endl;
			cout << " '    / ,-. \\    '   " << endl;
			cout << "  }  / / | \\ \\  }  " << endl;
			cout << " '   \\ | | | /   }   " << endl;
			cout << "  (   \\| | |/  (  " << endl;
			cout << "    )  | | |  )  " << endl;
			cout << "    .  | | |  '  " << endl;
			cout << "       J | L  " << endl;
			cout << " /|    J_|_L    |\\  " << endl;
			cout << " \\ \\___/ o \\___/ /  " << endl;
			cout << "  \\_____ _ _____/  " << endl;
			cout << "        |-|  " << endl;
			cout << "        |-|  " << endl;
			cout << "        |-|  " << endl;
			cout << "       ,'-'.  " << endl;
			cout << "       '---'  " << endl;
		}

		else if (v1 == 1) 
		{
			cout << " ,." << endl;
			cout << " \\%`." << endl;
			cout << "  `.%`." << endl;
			cout << "    `.%`." << endl;
			cout << "      `.%`." << endl;
			cout << "        `.%`." << endl;
			cout << "          `.%`.    __" << endl;
			cout << "            `.%`.  \\ \\" << endl;
			cout << "              `.%`./_/" << endl;
			cout << "                `./ /." << endl;
			cout << "               __/\\\\/:/;." << endl;
			cout << "               \\__/  `:/;." << endl;
			cout << "                       `:/;.,    " << endl;
			cout << "                         `:/ ;" << endl;
			cout << "                           `'" << endl;
		}
	}
}
