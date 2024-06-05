/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:22:44 by disantam          #+#    #+#             */
/*   Updated: 2024/05/14 17:35:45 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(char **args) {
	
	int		i;
	int		j;
	char	c;

	for (i = 0; args[i] != NULL; i++) {
		for (j = 0; args[i][j] != '\0'; j++) {
			c = args[i][j];
			if ( c >= 'a' && c <= 'z' ) {
				c = c - ( 'a' - 'A' );
			}
			std::cout << c;
		}
	}
}

int	main( int argc, char *argv[] ) {

	if ( argc == 1 ) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		megaphone(argv + 1);
	}
	std::cout << std::endl;
	return 0;
}
