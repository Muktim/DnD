/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoskune <mcoskune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:17:24 by mcoskune          #+#    #+#             */
/*   Updated: 2025/11/18 13:20:15 by mcoskune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_HPP
# define TYPES_HPP

#include <cstdint>

// Position on the map in cartesian coordinates
typedef struct s_pos
{
	int32_t	xPos;
	int32_t	yPos;
	int32_t	zPos;
}	t_pos;





#endif