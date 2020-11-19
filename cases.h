#ifndef CASES_H
#define CASES_H

#include <iostream>

struct cases { // Stored into struct cases.h
	//PP = passport
	std::string icon;
	std::string PP_name;
	std::string PP_gender;
	std::string PP_birth;
	std::string PP_issue;
	std::string PP_country;
	std::string PP_number;

	//EP = entry pass
	std::string EP_name;
	std::string EP_gender;
	std::string EP_birth;
	std::string EP_country;
	std::string explanation;

	//Return true if no erros occurs in the EP and PP (consistent information)
	bool vailidity;
};

#endif
