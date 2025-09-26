#ifndef CONTACT_HPP
#define CONTACT_HPP

// Include ALL dependencies this header needs
#include <string>
#include <iostream>

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

public:
	Contact();
	~Contact();
	int AddFirstName();
	int AddLastName();
	int AddNickname();
	int AddPhoneNumber();
	int AddDarkestSecret();
	//add getters
	//add display methods (full and truncated)
};

int	check_input(std::string* input);
int	check_number(std::string* input);
int	check_name(std::string* input);

#endif