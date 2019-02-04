/*****************************************************************
 Program: hw01.cc
 
 Author: Payton Kennedy
 Email: pk261416@ohio.edu
 
 Class: cs3560
 
 Date: 1/28/19
 
 *******************************************************************/

#include "hw01.h"

//find_and_replace function decleration
string find_and_replace(string sentence, const string& target, const string& replacement)
{
    size_t location = 0; //variable for the position of the string found
    
    //while loop goes through the phrase and finds ever instance of the tagret string
    while ((location = sentence.find(target, location)) != string::npos) 
    {
         sentence.replace(location, target.length(), replacement); //string function that replaces teh string
         location += replacement.length(); //position goes up by the length of the replacement word in the loop
    }
   
    return sentence; //returns the new phrase with the new words in
}  


