# ENGG1340_COMP2113_Group-project
Group 20

Team members: Lian Ho Yeung (3035714260), Luk Chin Kiu (3035689025)

## Title of project: abc 
_a game inspired by Papers Please_

#### Game description:
...

#### Endings:
##### 1) Died in disgrace(1)
Prerequisites: 
False approved alien entries/ disapproved human entries x times

Events: 
Died immediately- killed on the spot by superior (will be warning prior to this event)

##### 2) Died in incompetence
Prerequisites: 
Run out of money (poor grades in previous days- time, accuracy...)

Events:
Starved in the next day

##### 3) Died with honor(1)
Prerequisites: 
 Did not encounter  “invitation from assassin” (x disapproved alien spies entries)

Events: 
Died in day 7(final day) by starvation/over-working (tbd)

##### 4) Died with honor (2)
Prerequisites: 
a) Encounter “invitation from assassin” (x approved alien spies entries),
b) Approved all 3 (tbd) Earth officials to Earth

Events: 
Awarded medal of honor in day 6
Died in day 7(final day) by starvation/over-working (tbd)

##### 5) Died in disgrace (2)
Prerequisites: 
a) Encounter “invitation from assassin” (x approved alien spies entries),
b) Did not approve all 3 (tbd) Earth officials to Earth

Events:
Officials were ambushed in space by assassins
Died when day 6 ended- killed by superior 


##### 6) Hero’s journey
Prerequisites: 
a) Encounter “invitation from assassin” (x approved alien spies entries),
b) Disapproved all 3 (tbd) Earth officials to Earth

Events:
All 3 officials were ambushed in space by assassins
Ruling party was overthrown
Rebellion was a success
You were celebrated as a hero.


#### Basic game rules:

#### List of features
###### Requirement 1- Generation of random game sets or events

Random game sets: 

Entrants’ information including name, passport number, gender will be created in the program and stored into arrays. 
For each entrant in the game, their information will be randomly drawn from the arrays. 
False passport information (E.g. not existing country or typo) may also be randomly drawn from the list. 
For this situation, the player may consider to  disapprove of its entry. (60% True, 40% False)

###### Requirement 2- Data structures for storing game status

Array of integers will be used to store the game status. 
The array will store:
(1) Gameday
(2) Money
(3) Number of times of disapproving human entries
(4) Number of times of false approved alien entries
(5) Number of times of approving earth officials to Earth

###### Requirement 3- Dynamic memory management

Dynamic array structure will be used to store the game status. As some of the game status data will only exist when the game comes to a particular gameday. 

For example,  
1. Earth officials will go to earth only on game-day 5 and thus the variable - Number of times of approving earth officials to Earth, will be declared on day5. 
2. The gameday variable in the array will be declared after the player starts the game or loads the save.  

Therefore, the program will request for memory if needed (when the game come to a particular gameday or step)

###### Requirement 4- File input/output (e.g., for loading/saving game status)

For the end of each day, players can save their gamestatus in the menu. 
The save will be stored into a text format file. The format of the game save is “Description, Value” in each line. 
It is designed not to encrypt deliberately so that the players can get a particular ending of the game. 
Easter egg endings are also designed for players who modify the money data, gameday.

Format of the game save is as follow:

Gameday, 7
Money, 999999
Number of times of disapproving human entries, 3
Number of times of false approved alien entries, 5

###### Requirement 5- Program codes in multiple files

The program codes will be saved in multiple files based on the different functions.

Main file for programming the functions of the main function including start(), exit() when executing the game program.
Gameplay file for programming the main game-play and including the dialogues that provides the introduction and different special rules each day.
Event file for programming some special event that may happen on a particular gameday. Those event functions will be called on particular gamedays.

