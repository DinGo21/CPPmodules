/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:04:36 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:43:18 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	minised(std::ostream& outfile, std::string str, char* s1, char* s2) {

	std::size_t	i;
	std::size_t	pos;
	
	pos = 0;
	for (i = 0; i < str.size(); i++) {
		pos = str.find(s1, i);
		if (pos == i) {
			outfile << s2;
			i += std::string(s1).size() - 1; 
		}
		else {
			outfile << str[i];
		}
	}
}

int	main(int argc, char *argv[]) {

	char			c;
	std::string		str;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc < 4) {
		return 1;
	}
	infile.open(argv[1]);
	if (!infile.is_open()) {
		std::cout << "Error: " << argv[1] << ": Files does not exist" << std::endl;
		return 1;
	}
	outfile.open(std::string(argv[1]).append(".replace").c_str());
	if (!outfile.is_open()) {
		return 1;
	}
	while (infile >> std::noskipws >> c) {
		str += c;
	}
	minised(outfile, str, argv[2], argv[3]);
	infile.close();
	outfile.close();
	return 0;
}
