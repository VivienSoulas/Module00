#include "Contact.hpp"
// #include needed includes for this file

Contact::Contact()
{
	FirstName = "";
	LastName = "";
	Nickname = "";
	PhoneNumber = "";
	DarkestSecret = "";
	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destructor called" << std::endl;
}

//getline(std::cin, FirstName);
int Contact::AddFirstName()
{
	std::string temp;

	do
	{
		std::cout << "Type in your First Name:" << std::endl;
		std::cin >> temp;
	}	while (check_name(&temp) == 1);
	FirstName = temp;
	return (0);
}

int Contact::AddLastName()
{
	std::string temp;

	do
	{
		std::cout << "Type in your Last Name:" << std::endl;
		std::cin >> temp;
	}	while (check_name(&temp) == 1);
	LastName = temp;
	return (0);
}

int Contact::AddNickname()
{
	std::string temp;

	do
	{
		std::cout << "Type in your Nickname:" << std::endl;
		std::cin >> temp;
	}	while (check_input(&temp) == 1);
	Nickname = temp;
	return (0);
}

int Contact::AddPhoneNumber()
{
	std::string temp;
	
	do
	{
		std::cout << "Type in your Phone Number:" << std::endl;
		std::cin >> temp;
	}	while (check_number(&temp) == 1);
	PhoneNumber = temp;
	return (0);
}

int Contact::AddDarkestSecret()
{
	std::string temp;

	do
	{
		std::cout << "Type in your Darkest Secret:" << std::endl;
		std::cin >> temp;
	}	while (check_input(&temp) == 1);
	DarkestSecret = temp;
	return (0);
}