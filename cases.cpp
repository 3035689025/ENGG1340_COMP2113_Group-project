#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	struct cases {
		//PP = passport
		string icon;
		string PP_name;
		string PP_gender;
		string PP_birth;
		string PP_issue;
		string PP_country;
		string PP_number;

		//EP = entry-pass
		string EP_name;
		string EP_gender;
		string EP_birth;
		string EP_country;
		string explanation;

		//Return true if no erros occurs in the EP and PP
		bool vailidity;
	};

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
	
	cases record[40]; // 12外星 + 12人岩 8人錯 + 8外星錯
	// 0 - 5 Humane True cases
	// 6 - 9 Human False cases
	record[0].icon = "Human - Male";
	record[0].PP_name = "Lian Ho Yeung, Michael";
	record[0].PP_gender = "Human - Male";
	record[0].PP_birth = "1998-04-22";
	record[0].PP_issue = "2022-09-31";
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
	record[1].PP_issue = "2022-09-31";
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
	record[2].PP_issue = "2031-02-03";
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
	record[3].PP_issue = "2034-05-22";
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
	record[4].PP_issue = "2020-04-23";
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
	record[5].PP_issue = "2004-05-06";
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
	record[6].PP_issue = "2006-04-05";
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
	record[7].PP_issue = "2003-02-11";
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
	record[8].PP_issue = "2004-05-06";
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
	record[9].PP_issue = "2003-23-31"; // Invaild date - month 23
	record[9].PP_country = "Earth - Papua New Guinea";
	record[9].PP_number = "21321312";
	record[9].EP_name = "Kennedy Town";
	record[9].EP_gender = "Human - Male";
	record[9].EP_birth = "2001-12-31";
	record[9].EP_country = "Earth - Papua New Guinea";
	record[9].vailidity = false;
	record[9].explanation = "Fake passport (invaild Issue date 2003-23-31)";

	record[10].icon = "Sword";
	record[10].PP_name = "Excalibur";
	record[10].PP_gender = "Sword";
	record[10].PP_birth = "2003-01-03";
	record[10].PP_issue = "2005-02-03";
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
	record[16].vailidity = false ; // Gender mismatch
	record[16].explanation = "Gender mismatch";

	record[17].icon = "Smiley";
	record[17].PP_name = "Haha";
	record[17].PP_gender = "Smiley";
	record[17].PP_birth = "2003-04-03";
	record[17].PP_issue = "2000-04-03"; //Issue < birth 
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
	record[18].explanation = "Planet not on approved list";

	record[20].icon =
	record[20].PP_name =
	record[20].PP_gender =
	record[20].PP_birth =
	record[20].PP_issue =
	record[20].PP_country =
	record[20].PP_number =
	record[20].EP_name =
	record[20].EP_gender =
	record[20].EP_birth =
	record[20].EP_country =
	record[20].vailidity =

	record[21].icon =
	record[21].PP_name =
	record[21].PP_gender =
	record[21].PP_birth =
	record[21].PP_issue =
	record[21].PP_country =
	record[21].PP_number =
	record[21].EP_name =
	record[21].EP_gender =
	record[21].EP_birth =
	record[21].EP_country =
	record[21].vailidity =

	record[22].icon =
	record[22].PP_name =
	record[22].PP_gender =
	record[22].PP_birth =
	record[22].PP_issue =
	record[22].PP_country =
	record[22].PP_number =
	record[22].EP_name =
	record[22].EP_gender =
	record[22].EP_birth =
	record[22].EP_country =
	record[22].vailidity =

	record[23].icon =
	record[23].PP_name =
	record[23].PP_gender =
	record[23].PP_birth =
	record[23].PP_issue =
	record[23].PP_country =
	record[23].PP_number =
	record[23].EP_name =
	record[23].EP_gender =
	record[23].EP_birth =
	record[23].EP_country =
	record[23].vailidity =

	record[24].icon =
	record[24].PP_name =
	record[24].PP_gender =
	record[24].PP_birth =
	record[24].PP_issue =
	record[24].PP_country =
	record[24].PP_number =
	record[24].EP_name =
	record[24].EP_gender =
	record[24].EP_birth =
	record[24].EP_country =
	record[24].vailidity =

	record[25].icon =
	record[25].PP_name =
	record[25].PP_gender =
	record[25].PP_birth =
	record[25].PP_issue =
	record[25].PP_country =
	record[25].PP_number =
	record[25].EP_name =
	record[25].EP_gender =
	record[25].EP_birth =
	record[25].EP_country =
	record[25].vailidity =

	record[26].icon =
	record[26].PP_name =
	record[26].PP_gender =
	record[26].PP_birth =
	record[26].PP_issue =
	record[26].PP_country =
	record[26].PP_number =
	record[26].EP_name =
	record[26].EP_gender =
	record[26].EP_birth =
	record[26].EP_country =
	record[26].vailidity =

	record[27].icon =
	record[27].PP_name =
	record[27].PP_gender =
	record[27].PP_birth =
	record[27].PP_issue =
	record[27].PP_country =
	record[27].PP_number =
	record[27].EP_name =
	record[27].EP_gender =
	record[27].EP_birth =
	record[27].EP_country =
	record[27].vailidity =

	record[28].icon =
	record[28].PP_name =
	record[28].PP_gender =
	record[28].PP_birth =
	record[28].PP_issue =
	record[28].PP_country =
	record[28].PP_number =
	record[28].EP_name =
	record[28].EP_gender =
	record[28].EP_birth =
	record[28].EP_country =
	record[28].vailidity =

	record[29].icon =
	record[29].PP_name =
	record[29].PP_gender =
	record[29].PP_birth =
	record[29].PP_issue =
	record[29].PP_country =
	record[29].PP_number =
	record[29].EP_name =
	record[29].EP_gender =
	record[29].EP_birth =
	record[29].EP_country =
	record[29].vailidity =

	record[30].icon =
	record[30].PP_name =
	record[30].PP_gender =
	record[30].PP_birth =
	record[30].PP_issue =
	record[30].PP_country =
	record[30].PP_number =
	record[30].EP_name =
	record[30].EP_gender =
	record[30].EP_birth =
	record[30].EP_country =
	record[30].vailidity =

	record[31].icon =
	record[31].PP_name =
	record[31].PP_gender =
	record[31].PP_birth =
	record[31].PP_issue =
	record[31].PP_country =
	record[31].PP_number =
	record[31].EP_name =
	record[31].EP_gender =
	record[31].EP_birth =
	record[31].EP_country =
	record[31].vailidity =

	record[32].icon =
	record[32].PP_name =
	record[32].PP_gender =
	record[32].PP_birth =
	record[32].PP_issue =
	record[32].PP_country =
	record[32].PP_number =
	record[32].EP_name =
	record[32].EP_gender =
	record[32].EP_birth =
	record[32].EP_country =
	record[32].vailidity =

	record[33].icon =
	record[33].PP_name =
	record[33].PP_gender =
	record[33].PP_birth =
	record[33].PP_issue =
	record[33].PP_country =
	record[33].PP_number =
	record[33].EP_name =
	record[33].EP_gender =
	record[33].EP_birth =
	record[33].EP_country =
	record[33].vailidity =

	record[34].icon =
	record[34].PP_name =
	record[34].PP_gender =
	record[34].PP_birth =
	record[34].PP_issue =
	record[34].PP_country =
	record[34].PP_number =
	record[34].EP_name =
	record[34].EP_gender =
	record[34].EP_birth =
	record[34].EP_country =
	record[34].vailidity =

	record[35].icon =
	record[35].PP_name =
	record[35].PP_gender =
	record[35].PP_birth =
	record[35].PP_issue =
	record[35].PP_country =
	record[35].PP_number =
	record[35].EP_name =
	record[35].EP_gender =
	record[35].EP_birth =
	record[35].EP_country =
	record[35].vailidity =

	record[36].icon =
	record[36].PP_name =
	record[36].PP_gender =
	record[36].PP_birth =
	record[36].PP_issue =
	record[36].PP_country =
	record[36].PP_number =
	record[36].EP_name =
	record[36].EP_gender =
	record[36].EP_birth =
	record[36].EP_country =
	record[36].vailidity =

	record[37].icon =
	record[37].PP_name =
	record[37].PP_gender =
	record[37].PP_birth =
	record[37].PP_issue =
	record[37].PP_country =
	record[37].PP_number =
	record[37].EP_name =
	record[37].EP_gender =
	record[37].EP_birth =
	record[37].EP_country =
	record[37].vailidity =

	record[38].icon =
	record[38].PP_name =
	record[38].PP_gender =
	record[38].PP_birth =
	record[38].PP_issue =
	record[38].PP_country =
	record[38].PP_number =
	record[38].EP_name =
	record[38].EP_gender =
	record[38].EP_birth =
	record[38].EP_country =
	record[38].vailidity =

	record[39].icon =
	record[39].PP_name =
	record[39].PP_gender =
	record[39].PP_birth =
	record[39].PP_issue =
	record[39].PP_country =
	record[39].PP_number =
	record[39].EP_name =
	record[39].EP_gender =
	record[39].EP_birth =
	record[39].EP_country =
	record[39].vailidity =

}