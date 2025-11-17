/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colours.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoskune <mcoskune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:13:02 by mcoskune          #+#    #+#             */
/*   Updated: 2025/11/17 12:29:25 by mcoskune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOURS_HPP
# define COLOURS_HPP

// Reset
constexpr char	RESET[]= "\033[0m";

// Regular Colors
constexpr char	BLACK[]= "\033[0;30m";
constexpr char	RED[]= "\033[0;31m";
constexpr char	GREEN[]= "\033[0;32m";
constexpr char	YELLOW[]= "\033[0;33m";
constexpr char	BLUE[]= "\033[0;34m";
constexpr char	PURPLE[]= "\033[0;35m";
constexpr char	CYAN[]= "\033[0;36m";
constexpr char	WHITE[]= "\033[0;37m";

// Bold
constexpr char	BBLACK[]= "\033[1;30m";
constexpr char	BRED[]= "\033[1;31m";
constexpr char	BGREEN[]= "\033[1;32m";
constexpr char	BYELLOW[]= "\033[1;33m";
constexpr char	BBLUE[]= "\033[1;34m";
constexpr char	BPURPLE[]= "\033[1;35m";
constexpr char	BCYAN[]= "\033[1;36m";
constexpr char	BWHITE[]= "\033[1;37m";

// Underline
constexpr char	UBLACK[]= "\033[4;30m";
constexpr char	URED[]= "\033[4;31m";
constexpr char	UGREEN[]= "\033[4;32m";
constexpr char	UYELLOW[]= "\033[4;33m";
constexpr char	UBLUE[]= "\033[4;34m";
constexpr char	UPURPLE[]= "\033[4;35m";
constexpr char	UCYAN[]= "\033[4;36m";
constexpr char	UWHITE[]= "\033[4;37m";

// Background
constexpr char	ONBLACK[]= "\033[40m";
constexpr char	ONRED[]= "\033[41m";
constexpr char	ONGREEN[]= "\033[42m";
constexpr char	ONYELLOW[]= "\033[43m";
constexpr char	ONBLUE[]= "\033[44m";
constexpr char	ONPURPLE[]= "\033[45m";
constexpr char	ONCYAN[]= "\033[46m";
constexpr char	ONWHITE[]= "\033[47m";

// High Intensity
constexpr char	IBLACK[]= "\033[0;90m";
constexpr char	IRED[]= "\033[0;91m";
constexpr char	IGREEN[]= "\033[0;92m";
constexpr char	IYELLOW[]= "\033[0;93m";
constexpr char	IBLUE[]= "\033[0;94m";
constexpr char	IPURPLE[]= "\033[0;95m";
constexpr char	ICYAN[]= "\033[0;96m";
constexpr char	IWHITE[]= "\033[0;97m";

// Bold High Intensity
constexpr char	BIBLACK[]= "\033[1;90m";
constexpr char	BIRED[]= "\033[1;91m";
constexpr char	BIGREEN[]= "\033[1;92m";
constexpr char	BIYELLOW[]= "\033[1;93m";
constexpr char	BIBLUE[]= "\033[1;94m";
constexpr char	BIPURPLE[]= "\033[1;95m";
constexpr char	BICYAN[]= "\033[1;96m";
constexpr char	BIWHITE[]= "\033[1;97m";

// High Intensity backgrounds
constexpr char	ONIBLACK[]= "\033[0;100m";
constexpr char	ONIRED[]=  "\033[0;101m";
constexpr char	ONIGREEN[]= "\033[0;102m";
constexpr char	ONIYELLOW[]= "\033[0;103m";
constexpr char	ONIBLUE[]= "\033[0;104m";
constexpr char	ONIPURPLE[]= "\033[0;105m";
constexpr char	ONICYAN[]= "\033[0;106m";
constexpr char	ONIWHITE[]= "\033[0;107m";

#endif