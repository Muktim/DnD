/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoskune <mcoskune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:35:11 by mcoskune          #+#    #+#             */
/*   Updated: 2025/11/19 13:29:00 by mcoskune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "DND.hpp"
#include "colours.hpp"
#include <iostream>
#include <algorithm>


void	validateInput(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << BIRED << "Error - Wrong number of arguments provided!" << RESET << std::endl;
		exit(1);
	}
	if (atoi(av[1]) < 2)
	{
		std::cout << BIRED << "Error - Get more friends, you weirdo!" << RESET << std::endl;
		exit(2);
	}
	int	commaCount{0};
	std::string	classes{av[2]};
	commaCount = std::count(classes.begin(), classes.end(), ',');
	if (commaCount + 1 != atoi(av[1]))
	{
		std::cout << BIRED << "Error - Number of PlayerClasses does not match player count!" << RESET << std::endl;
		exit(3);
	}
	std::cout << BIGREEN << "Initial Validation Completed!" << RESET << std::endl;
}

// void	setupGame(char **av, DND &game)
// {
// 	game.setNumPlayers(atoi(av[1]));
	
// 	// for (uint8_t i = 0; i < game.getNumPlayers(); i++)
// 	// {
// 	// 	game.addPlayer(Player());
// 	// 	// look into emplace_back
// 	// }
// }

int	main(int ac, char **av)
{
	std::cout << BICYAN << "Launching DnD Game" << RESET << std::endl;

	std::cout << BIBLUE << "Validating Input" << RESET << std::endl;
	validateInput(ac, av);

	// DND	game;
	// std::cout << BIBLUE << "Setting Up the Game" << RESET << std::endl;
	// setupGame(av, game);


	// std::cout << BIBLUE << "Starting Game" << RESET << std::endl;
	// game.gameStart();


	return (0);
}