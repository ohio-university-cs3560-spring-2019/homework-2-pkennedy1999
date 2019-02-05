/*****************************************************************
 Program: cs3560_hw01_main.cpp
 
 Author: Payton Kennedy
 Email: pk261416@ohio.edu
 
 Class: cs3560
 
 Date: 1/28/19
 
 *******************************************************************/

#include "hw01.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char**argv)
{
    string input; //variable for the string that is inputted
    string output; //variable for the string that is outputted
    string str1 = argv[1]; //second command line argument
    string str2 = argv[2]; //third command line argument
    
    getline(cin,input); //getline function to get the whole string
    
    output = find_and_replace(input, str1, str2); //output varibable equals find and replace function 
   
    cout << output << endl; //new sentence is outputted
    
    return 0;
    
}
