/**************************************************************************************
Name: Ildiko Fallahpour
Coding 03
Purpose: This program will will read in a text file, then count and display the letter, 
         whitespace and word count.
**************************************************************************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::fstream;
using std::string;

int count_spaces(string);
int count_non_spaces(string);
void display_file(fstream&);

#endif /* FUNCTIONS_H */
