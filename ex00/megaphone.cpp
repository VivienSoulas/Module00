/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoulas <vsoulas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 11:25:02 by vsoulas           #+#    #+#             */
/*   Updated: 2025/09/26 12:33:56 by vsoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

// << std::endl clears buffer and creates new line
int	main(int ac, char **av)
{
	int	i = 1;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			std::string input(av[i]);
			std::transform(input.begin(), input.end(), input.begin(), ::toupper);
			std::cout << input;
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}