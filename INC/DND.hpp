/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DND.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoskune <mcoskune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:36:24 by mcoskune          #+#    #+#             */
/*   Updated: 2025/11/17 14:22:13 by mcoskune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DND_HPP
# define DND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

#include "colours.hpp"
#include "Map.hpp"
#include "AActor.hpp"


class DND
{
	public:
		DND();
		~DND();

		void	setNumPlayers(uint8_t num);
		uint8_t	getNumPlayers() const;

		void	addPlayer(AActor const& player);
		// void	removePlayer(XX);
		AActor	*getPlayer(std::string playerName);


		void	gameStart();

	
	private:
		uint8_t				_numPlayers;

		Map					_map;
		std::vector<AActor>	_players;


	
};



#endif