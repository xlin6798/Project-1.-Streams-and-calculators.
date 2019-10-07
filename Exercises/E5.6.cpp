/*
Author: Xinyi Lin
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E5.6

The program below takes an string as input and returns the middle character(s) of the string.
*/

#include <iostream>
std::string middle(std::string str)
{
  if (str.length() % 2 == 0)
    return str.substr((str.length() - 1) / 2, 2); 
  else
    return str.substr(str.length() / 2, 1);
}

