#include <iostream>
#include <string>
#include "cases.h"
#include "casessetup.h"
using namespace std;

void casessetup(cases record[]) 
{
	//Approved earth country:
	//China
	//United Kingdom
	//United States
	//Papua New Guinea

	//Approve Planet:
	//Planet S-23
	//Planet Razer
	//Planet Music
	//Zootopia
	//Planet 1117
	//Planet Smiley Face
	//Smiley world
	
	// 0 - 5 Humane True cases
	// 6 - 9 Human False cases
	
	record[0].icon = "Human - Male";
	record[0].PP_name = "Lian Ho Yeung, Michael";
	record[0].PP_gender = "Human - Male";
	record[0].PP_birth = "1998-04-22";
	record[0].PP_issue = "2043-09-31";
	record[0].PP_country = "Earth - China";
	record[0].PP_number = "3035714260";
	record[0].EP_name = "Lian Ho Yeung, Michael";
	record[0].EP_gender = "Human - Male";
	record[0].EP_birth = "1998-04-22";
	record[0].EP_country = "Earth - China";
	record[0].vailidity = true;

	record[1].icon = "Human - Male";
	record[1].PP_name = "Chan Ho Fung, Michael";
	record[1].PP_gender = "Human - Male";
	record[1].PP_birth = "1998-04-22";
	record[1].PP_issue = "2053-09-31";
	record[1].PP_country = "Earth - China";
	record[1].PP_number = "3035612345";
	record[1].EP_name = "Chan Ho Fung, Michael";
	record[1].EP_gender = "Human - Male";
	record[1].EP_birth = "1998-04-22";
	record[1].EP_country = "Earth - China";
	record[1].vailidity = true;

	record[2].icon = "Human - Male";
	record[2].PP_name = "Luk Chin Kiu, Brian";
	record[2].PP_gender = "Human - Male";
	record[2].PP_birth = "2000-01-01";
	record[2].PP_issue = "2064-02-03";
	record[2].PP_country = "Earth - China";
	record[2].PP_number = "3035689025";
	record[2].EP_name = "Luk Chin Kiu, Brian";
	record[2].EP_gender = "Human - Male";
	record[2].EP_birth = "2004-01-01";
	record[2].EP_country = "Earth - China";
	record[2].vailidity = true;

	record[3].icon = "Human - Female";
	record[3].PP_name = "Andy Lau Tak-woh";
	record[3].PP_gender = "Human - Female";
	record[3].PP_birth = "2030-05-22";
	record[3].PP_issue = "2067-05-22";
	record[3].PP_country = "Earth - United Kingdom";
	record[3].PP_number = "6590432";
	record[3].EP_name = "Andy Lau Tak-woh";
	record[3].EP_gender = "Human - Male";
	record[3].EP_birth = "2030-05-22";
	record[3].EP_country = "Earth - United Kingdom";
	record[3].vailidity = true;

	record[4].icon = "Human - Female";
	record[4].PP_name = "Lady Nana";
	record[4].PP_gender = "Human - Female";
	record[4].PP_birth = "1990-01-23";
	record[4].PP_issue = "2074-04-23";
	record[4].PP_country = "Earth - United States";
	record[4].PP_number = "4514112";
	record[4].EP_name = "Lady Nana";
	record[4].EP_gender = "Human - Female";
	record[4].EP_birth = "1990-01-23";
	record[4].EP_country = "Earth - United States";
	record[4].vailidity = true;

	record[5].icon = "Human - Female";
	record[5].PP_name = "Juliet Shea";
	record[5].PP_gender = "Human - Female";
	record[5].PP_birth = "2002-03-03";
	record[5].PP_issue = "2050-05-06";
	record[5].PP_country = "Earth - United States";
	record[5].PP_number = "3431431";
	record[5].EP_name = "Juliet Shea";
	record[5].EP_gender = "Human - Female";
	record[5].EP_birth = "2002-03-03";
	record[5].EP_country = "Earth - United States";
	record[5].vailidity = true;

	record[6].icon = "Human - Male"; // Male icon 
	record[6].PP_name = "Aleena Scott";
	record[6].PP_gender = "Human - Female"; //Female Gender
	record[6].PP_birth = "2003-02-23";
	record[6].PP_issue = "2032-04-05";
	record[6].PP_country = "Earth - United Kingdom";
	record[6].PP_number = "36549334";
	record[6].EP_name = "Alleena Scott";
	record[6].EP_gender = "Human - Female";
	record[6].EP_birth = "2003-02-23";
	record[6].EP_country = "Earth - United Kingdom";
	record[6].vailidity = false; //Gender Mismatch 
	record[6].explanation = "Gender Mismatch";

	record[7].icon = "Human - Female";
	record[7].PP_name = "Mary Jane";
	record[7].PP_gender = "Human - Female";
	record[7].PP_birth = "2003-14-23"; // Invaild date - month 14
	record[7].PP_issue = "2043-02-11";
	record[7].PP_country = "Earth - China";
	record[7].PP_number = "451321";
	record[7].EP_name = "Mary Jane";
	record[7].EP_gender = "Human - Female";
	record[7].EP_birth = "2003-04-23"; // Mismatch with PP_birth
	record[7].EP_country = "Earth - China";
	record[7].vailidity = false;
	record[7].explanation = "Fake passport (invaild birthday date 2003-14-23)";

	record[8].icon = "Book"; //Mismatch with gender
	record[8].PP_name = "Hanry Potter";
	record[8].PP_gender = "Human - Male";
	record[8].PP_birth = "2003-02-03";
	record[8].PP_issue = "2054-05-06";
	record[8].PP_country = "Earth - United Kingdom";
	record[8].PP_number = "423234";
	record[8].EP_name = "March";
	record[8].EP_gender = "Human - Male";
	record[8].EP_birth = "2003-02-03";
	record[8].EP_country = "Earth - United Kingdom";
	record[8].vailidity = false;
	record[8].explanation = "Gender Mismatch";

	record[9].icon = "Human - Male";
	record[9].PP_name = "Kennedy Town";
	record[9].PP_gender = "Human - Male";
	record[9].PP_birth = "2001-12-31";
	record[9].PP_issue = "2043-23-31"; // Invaild date - month 23
	record[9].PP_country = "Earth - Papua New Guinea";
	record[9].PP_number = "21321312";
	record[9].EP_name = "Kennedy Town";
	record[9].EP_gender = "Human - Male";
	record[9].EP_birth = "2001-12-31";
	record[9].EP_country = "Earth - Papua New Guinea";
	record[9].vailidity = false;
	record[9].explanation = "Fake passport (invaild Issue date 2043-23-31)";

	record[10].icon = "Sword";
	record[10].PP_name = "Excalibur";
	record[10].PP_gender = "Sword";
	record[10].PP_birth = "2003-01-03";
	record[10].PP_issue = "2055-02-03";
	record[10].PP_country = "Planet S-23";
	record[10].PP_number = "32654654";
	record[10].EP_name = "Excalibur";
	record[10].EP_gender = "Sword";
	record[10].EP_birth = "2003-01-03";
	record[10].EP_country = "Planet S-23";
	record[10].vailidity = true;

	record[11].icon = "Sword";
	record[11].PP_name = "The Sword of Kusanagi";
	record[11].PP_gender = "Sword";
	record[11].PP_birth = "2032-02-08";
	record[11].PP_issue = "2033-03-26";
	record[11].PP_country = "Planet S-23";
	record[11].PP_number = "3241451";
	record[11].EP_name = "The Sword of Kusanagi";
	record[11].EP_gender = "Sword";
	record[11].EP_birth = "2032-02-08";
	record[11].EP_country = "Planet S-23";
	record[11].vailidity = true;

	record[12].icon = "Mouse";
	record[12].PP_name = "Thunder";
	record[12].PP_gender = "Mouse";
	record[12].PP_birth = "2002-02-03";
	record[12].PP_issue = "2031-02-04";
	record[12].PP_country = "Planet Razer";
	record[12].PP_number = "321321312";
	record[12].EP_name = "Thunder";
	record[12].EP_gender = "Mouse";
	record[12].EP_birth = "2002-02-03";
	record[12].EP_country = "Planet Razer";
	record[12].vailidity = true;

	record[13].icon = "Apple";
	record[13].PP_name = "Yummy";
	record[13].PP_gender = "Apple";
	record[13].PP_birth = "2013-05-03";
	record[13].PP_issue = "2030-04-21";
	record[13].PP_country = "Planet A-10";
	record[13].PP_number = "5129851";
	record[13].EP_name = "Yummy";
	record[13].EP_gender = "Apple";
	record[13].EP_birth = "2013-05-03";
	record[13].EP_country = "Planet A-10";
	record[13].vailidity = true;

	record[14].icon = "Note";
	record[14].PP_name = "Crotchet";
	record[14].PP_gender = "Note";
	record[14].PP_birth = "2005-03-21";
	record[14].PP_issue = "2005-07-21";
	record[14].PP_country = "Planet Music";
	record[14].PP_number = "1232131";
	record[14].EP_name = "Crotchet";
	record[14].EP_gender = "Note";
	record[14].EP_birth = "2005-03-21";
	record[14].EP_country = "Planet Music";
	record[14].vailidity = true;

	record[15].icon = "Cat";
	record[15].PP_name = "I am a Dog";
	record[15].PP_gender = "Cat";
	record[15].PP_birth = "2003-05-06";
	record[15].PP_issue = "2008-08-04";
	record[15].PP_country = "Zootopia";
	record[15].PP_number = "2321313126";
	record[15].EP_name = "I am a Dog";
	record[15].EP_gender = "Cat";
	record[15].EP_birth = "2003-05-06";
	record[15].EP_country = "Zootopia";
	record[15].vailidity = true;

	record[16].icon = "Photo";
	record[16].PP_name = "Monro Liso";
	record[16].PP_gender = "Human - Female"; //Mismatch
	record[16].PP_birth = "2005-06-07";
	record[16].PP_issue = "2006-08-12";
	record[16].PP_country = "Planet 1117";
	record[16].PP_number = "2321321";
	record[16].EP_name = "Monro Liso";
	record[16].EP_gender = "Photo";
	record[16].EP_birth = "2006-06-07";
	record[16].EP_country = "Planet 1117";
	record[16].vailidity = false; // Gender mismatch
	record[16].explanation = "Gender mismatch";

	record[17].icon = "Smiley";
	record[17].PP_name = "Haha";
	record[17].PP_gender = "Smiley";
	record[17].PP_birth = "2053-04-03";
	record[17].PP_issue = "2050-04-03"; //Issue < birth 
	record[17].PP_country = "Smiley World";
	record[17].PP_number = "23123216678";
	record[17].EP_name = "Haha";
	record[17].EP_gender = "Smiley";
	record[17].EP_birth = "2003-04-03";
	record[17].EP_country = "Smiley World";
	record[17].vailidity = false; // Issue < birth
	record[17].explanation = "Fake passport (Issue date earlier than birthday)";

	record[18].icon = "Car";
	record[18].PP_name = "FC";
	record[18].PP_gender = "Car";
	record[18].PP_birth = "2007-02-03";
	record[18].PP_issue = "2008-02-04";
	record[18].PP_country = "Car 28"; //Not allow
	record[18].PP_number = "6834763489";
	record[18].EP_name = "FC";
	record[18].EP_gender = "Car";
	record[18].EP_birth = "2007-02-03";
	record[18].EP_country = "2007-02-03";
	record[18].vailidity = false;
	record[18].explanation = "Planet not on approved list";

	record[19].icon = "Book";
	record[19].PP_name = "Pilote de guerre";
	record[19].PP_gender = "Book";
	record[19].PP_birth = "1943-02-03";
	record[19].PP_issue = "2040-02-04";
	record[19].PP_country = "Planet B612"; //Not allow
	record[19].PP_number = "1231231221";
	record[19].EP_name = "Pilote de guerre";
	record[19].EP_gender = "Book";
	record[19].EP_birth = "1943-02-03";
	record[19].EP_country = "Planet B612";
	record[19].vailidity = false;
	record[19].explanation = "Planet not on approved list";
	
	//20-25: human correct , 26-29: human wrong
	//30-35: alien wrong , 36-3-: alien wrong

	//approved countries: Gotham City, United Kingdome, United States, China, Australia
	//approved planets: Planet S-23, Planet Razer, Planet Music, Zootopia, Planet 1117, Planet Smiley Face, Smiley world

	//human correct cases
	record[20].icon = "Human - Male";
	record[20].PP_name = "Thomas Wayne";
        record[20].PP_gender = "Human - Male";
        record[20].PP_birth = "1997-05-17";
        record[20].PP_issue = "2031-09-18";
        record[20].PP_country = "Earth - Gotham City";
        record[20].PP_number = "097594725";
        record[20].EP_name = "Thomas Wayne";
        record[20].EP_gender = "Human - Male";
        record[20].EP_birth = "1997-05-17";
        record[20].EP_country = "Earth - Gotham City";
        record[20].EP_vailidity = true;

	record[21].icon = "Human - Female";
        record[21].PP_name = "Selena Jordan";
        record[21].PP_gender = "Human - Female";
        record[21].PP_birth = "2002-07-25";
            record[21].PP_issue = "2030-01-02";
        record[21].PP_country = "Earth - China";
        record[21].PP_number = "856992175";
        record[21].EP_name = "Selena Jordan";
        record[21].EP_gender = "Human - Female";
        record[21].EP_birth = "2002-07-25";
        record[21].EP_country = "Earth - China";
        record[21].EP_vailidity = true;

	record[22].icon = "Human - Male";
        record[22].PP_name = "Christopher Murray";
        record[22].PP_gender = "Human - Male";
        record[22].PP_birth = "2003-04-26";
        record[22].PP_issue = "2029-11-29";
        record[22].PP_country = "Earth - Australia";
        record[22].PP_number = "087755291";
        record[22].EP_name = "Christopher Murray";
        record[22].EP_gender = "Human - Male";
        record[22].EP_birth = "2003-04-26";
        record[22].EP_country = "2029-11-29";
        record[22].EP_vailidity = true;

	record[23].icon = "Human - Male";
	record[23].PP_name = "Barack Obama";
	record[23].PP_gender = "Human - Male";
	record[23].PP_birth = "2003-07-03";
	record[23].PP_issue = "2039-10-11";
	record[23].PP_country = "Earth - United Kingdom";
	record[23].PP_number = "097635288";
	record[23].EP_name = "Barack Obama";
	record[23].EP_gender = "Human - Male";
	record[23].EP_birth = "2003-07-03";
	record[23].EP_country = "Earth - United Kingdom";
	record[23].vailidity = true;

	record[24].icon = "Human - Female";
	record[24].PP_name = "Serena Williams";
	record[24].PP_gender = "Human - Female";
	record[24].PP_birth = "1999-03-07";
	record[24].PP_issue = "2038-09-18";
	record[24].PP_country = "Earth - China";
	record[24].PP_number = "996432793";
	record[24].EP_name = "Serena Williams";
	record[24].EP_gender = "Human - Female";
	record[24].EP_birth = "1999-03-07";
	record[24].EP_country = "Earth - China";
	record[24].vailidity = true;

	record[25].icon = "Human - Male";
	record[25].PP_name = "Chad Simpson";
	record[25].PP_gender = "Human - Male";
	record[25].PP_birth = "2000-01-01";
	record[25].PP_issue = "2039-11-07";
	record[25].PP_country = "Earth - United States";
	record[25].PP_number = "548957334";
	record[25].EP_name = "Chad Simpson";
	record[25].EP_gender = "Human - Male";
	record[25].EP_birth = "2000-01-01";
	record[25].EP_country = "Earth - United States";
	record[25].vailidity = true;

	record[26].icon = "Human - Female";
	record[26].PP_name = "Karen Chan";
	record[26].PP_gender = "Human - Female";
	record[26].PP_birth = "1998-02-25";
	record[26].PP_issue = "2038-10-05";
	record[26].PP_country = "Earth - China";
	record[26].PP_number = "598761423";
	record[26].EP_name = "Karen Chan";
	record[26].EP_gender = "Human - Female";
	record[26].EP_birth = "1998-02-25";
	record[26].EP_country = "Earth - China";
	record[26].vailidity = true;

	//human wrong cases

	record[27].icon = "Human - Male";
	record[27].PP_name = "Michael Jackson Jr.";
	record[27].PP_gender = "Human - Male";
	record[27].PP_birth = "2001-08-10";
	record[27].PP_issue = "2038-04-22";
	record[27].PP_country = "Planet A-10";
	record[27].PP_number = "135597482";
	record[27].EP_name = "Michael Jackson Jr.";
	record[27].EP_gender = "Human - Male";
	record[27].EP_birth = "2001-08-10";
	record[27].EP_country = "Earth - Sweden";
	record[27].vailidity = false;
	record[27].explanation = "Country not on approved list";

	record[28].icon = "Human - Female";
	record[28].PP_name = "Amanda Nunes";
	record[28].PP_gender = "Human - Female";
	record[28].PP_birth = "2037-10-10";
	record[28].PP_issue = "2037-09-01";
	record[28].PP_country = "Earth - United States";
	record[28].PP_number = "967518932";
	record[28].EP_name = "Amanda Nunes";
	record[28].EP_gender = "Human - Female";
	record[28].EP_birth = "2037-10-10";
	record[28].EP_country = "Earth - United States";
	record[28].vailidity = false;
	record[28].explanation = "Fake passport (Issue date earlier than birthday)";

	record[29].icon = "Car";
	record[29].PP_name = "Fogell Mc'Lovin";
	record[29].PP_gender = "Human - Male";
	record[29].PP_birth = "2001-08-30";
	record[29].PP_issue = "2038-03-10";
	record[29].PP_country = "Earth - United States";
	record[29].PP_number = "786246786";
	record[29].EP_name = "Fogell Mc'Lovin";
	record[29].EP_gender = "Human - Male";
	record[29].EP_birth = "2001-08-30";
	record[29].EP_country = "Earth - United States";
	record[29].vailidity = false;
	record[29].explanation = "Fake passport (invalid photo)";

	//alien correct cases

	record[30].icon = "Dog";
	record[30].PP_name = "Snoop Dogg";
	record[30].PP_gender = "Dog";
	record[30].PP_birth = "1997-06-19";
	record[30].PP_issue = "2031-10-21";
	record[30].PP_country = "Zootopia";
	record[30].PP_number = "156456895";
	record[30].EP_name = "Snoop Dogg";
	record[30].EP_gender = "Dog";
	record[30].EP_birth = "1997-06-19";
	record[30].EP_country = "Zootopia";
	record[30].vailidity = true;

	record[31].icon = "Deer";
	record[31].PP_name = "Rudolph";
	record[31].PP_gender = "Deer";
	record[31].PP_birth = "2010-09-15";
	record[31].PP_issue = "2029-07-04";
	record[31].PP_country = "Zootopia";
	record[31].PP_number = "123654789";
	record[31].EP_name = "Rudolphl";
	record[31].EP_gender = "Deer";
	record[31].EP_birth = "2010-09-15";
	record[31].EP_country = "Planet S-23";
	record[31].vailidity = true;

	record[32].icon = "Car";
	record[32].PP_name = "Model S";
	record[32].PP_gender = "Car";
	record[32].PP_birth = "2009-12-26";
	record[32].PP_issue = "2039-10-14";
	record[32].PP_country = "Planet 1117";
	record[32].PP_number = "856369745";
	record[32].EP_name = "Model S";
	record[32].EP_gender = "Car";
	record[32].EP_birth = "2009-12-26";
	record[32].EP_country = "Planet 1117";
	record[32].vailidity = true;

	record[33].icon = "Smiley";
	record[33].PP_name = "Creepy Smirk";
	record[33].PP_gender = "Smiley";
	record[33].PP_birth = "2017-08-12";
	record[33].PP_issue = "2029-03-28";
	record[33].PP_country = "Smiley World";
	record[33].PP_number = "852314997";
	record[33].EP_name = "Creepy Smirk";
	record[33].EP_gender = "Smiley";
	record[33].EP_birth = "2017-08-12";
	record[33].EP_country = "Smiley World";
	record[33].vailidity = true;

	record[34].icon = "Mouse";
	record[34].PP_name = "Logitech The Imposter";
	record[34].PP_gender = "Mouse";
	record[34].PP_birth = "2011-04-18";
	record[34].PP_issue = "2030-01-13";
	record[34].PP_country = "Planet Razer";
	record[34].PP_number = "502502502";
	record[34].EP_name = "Logitech The Imposter";
	record[34].EP_gender = "Mouse";
	record[34].EP_birth = "2011-04-18";
	record[34].EP_country = "Planet Razer";
	record[34].vailidity = true;

	record[35].icon = "Sword";
	record[35].PP_name = "Butcher Knife";
	record[35].PP_gender = "Sword";
	record[35].PP_birth = "2002-04-22";
	record[35].PP_issue = "2030-07-16";
	record[35].PP_country = "Planet S-23";
	record[35].PP_number = "789564289";
	record[35].EP_name = "Butcher Knife";
	record[35].EP_gender = "Sword";
	record[35].EP_birth = "2002-04-22";
	record[35].EP_country = "Planet S-23";
	record[35].vailidity = true;

	record[36].icon = "Sword";
	record[36].PP_name = "Lightsaber Darkside";
	record[36].PP_gender = "Sword";
	record[36].PP_birth = "2001-02-04";
	record[36].PP_issue = "2030-09-08";
	record[36].PP_country = "Planet S-23";
	record[36].PP_number = "987441568";
	record[36].EP_name = "Lightsaber Darkside";
	record[36].EP_gender = "Sword";
	record[36].EP_birth = "2001-02-04";
	record[36].EP_country = "Planet S-23";
	record[36].vailidity = true;

	// alien wrong cases

	record[37].icon = "Book";
	record[37].PP_name = "Dune";
	record[37].PP_gender = "Book";
	record[37].PP_birth = "1965-08-01";
	record[37].PP_issue = "2030-11-12";
	record[37].PP_country = "Planet 1117";
	record[37].PP_number = "854261337";
	record[37].EP_name = "Dune";
	record[37].EP_gender = "Book";
	record[37].EP_birth = "2030-11-12";
	record[37].EP_country = "Planet 1117";
	record[37].vailidity = false;
	record[37].explanation = "Invalid entry pass (wrong birthdate)";

	record[38].icon = "Owl";
	record[38].PP_name = "Hayden Triss";
	record[38].PP_gender = "Human - Female";
	record[38].PP_birth = "2001-09-21";
	record[38].PP_issue = "2029-09-14";
	record[38].PP_country = "Planet Music";
	record[38].PP_number = "485169189";
	record[38].EP_name = "Hayden Triss"
	record[38].EP_gender = "Human - Female";
	record[38].EP_birth = "2001-09-21";
	record[38].EP_country = "Planet Music";
	record[38].vailidity = false;
	record[38].explanation = "Fake passport (photo)";

	record[39].icon = "Car";
	record[39].PP_name = "Ghost Super 2.0";
	record[39].PP_gender = "Car";
	record[39].PP_birth = "2012-04-13";
	record[39].PP_issue = "2031-09-12";
	record[39].PP_country = "Planet Zootopia";
	record[39].PP_number = "744874569";
	record[39].EP_name = "Ghost Super 2.0";
	record[39].EP_gender = "Car";
	record[39].EP_birth = "2012-04-13";
	record[39].EP_country = "Planet Zootopia";
	record[39].vailidity = false;
	record[39].explanation = "Planet not on approved list";

}
