/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoskune <mcoskune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:20:43 by mcoskune          #+#    #+#             */
/*   Updated: 2025/11/17 14:21:45 by mcoskune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
# define MAP_HPP

#include <cstdint>
#include <vector>

#include "AActor.hpp"

class Map
{
	public:
		Map();
		~Map();

		void	drawMap(std::vector<AActor> const& _players);

	private:
		int		_fd;
		// uint8_t		_worldWidth;
		// uint8_t		_worldHeight;
		// uint16_t	_tileSize;

		// char		**_map;

};


#endif