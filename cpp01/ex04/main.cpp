/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:38:14 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/14 12:37:05 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) 
{
    std::ifstream inputFile(filename);
    std::string newline;
    std::string line;
    
    if (!inputFile.is_open()) {
        std::cout << "Error: File '" << filename << "' not found." << std::endl;
        return;
    }
    while (std::getline(inputFile, line)) 
    {
        size_t pos = 0;
        while (pos < line.length())
        {
            size_t found = line.find(s1, pos);
            if (found != std::string::npos) 
            {
                newline += line.substr(pos, found - pos);
                newline += s2;
                pos = found + s1.length();
            } 
            else
            {
                newline += line.substr(pos);
                break;
            }
        }
        newline += "\n";
    }
    inputFile.close();
    std::string newFilename = filename + ".replace";
    std::ofstream outputFile(newFilename);
    outputFile << newline;

    std::cout << "Replacement completed. Modified content saved in '" << newFilename << "'." << std::endl;
}

int main(int ac, char **av) 
{
    if (ac != 4) {
        std::cout << "using: " << av[0] << " (filename) (s1) (s2)" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    replaceInFile(filename, s1, s2);

    return 0;
}