#include "Contact.hpp"
#include <cctype>

int	check_name(std::string* input)
{
	if (input->empty())
	{
		std::cout << "Field cannot be empty" << std::endl;
		return (1);
	}
	for (int i = 0; i < input->length(); i++)
	{
		if (!isalnum((*input)[i]) && (*input)[i] != '-' && (*input)[i] != ' ')
		{
			std::cout << "Invalid character in field" << std::endl;
			return (1);
		}
	}
	return (0);
}

//check for empty field
int	check_input(std::string* input)
{
	if (input->empty())
	{
		std::cout << "Field cannot be empty" << std::endl;
		return (1);
	}
	return (0);
}

// checks for numbers, length and starting +
int	check_number(std::string* input)
{
	int	i = 0;
	int	flag = 0;

	if (input->empty())
	{
		std::cout << "Field cannot be empty" << std::endl;
		return (1);
	}
	if ((*input)[0] == '+')
	{
		flag = 1;
		i++;
	}
	while (i < input->length())
	{
		if (!isdigit((*input)[i]))
		{
			std::cout << "Phone number should be only numbers" << std::endl;
			return (1);
		}
		i++;
	}
	if ((flag && i != 10) || (!flag && i != 9))
	{
		std::cout << "Invalid phone number length" << std::endl;
		return (1);
	}
	return (0);
}