
/*
Author: Xinyi Lin
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E4.8

The program below reads a word and prints each character of the word on a separate line.
*/

#include <iostream>
#include <string>

int main()
{
    std::string s;
    
    std::cout << "Please enter a word: ";
    
    std::cin >> s;
    
    for(int i = 0; i < s.length(); i++)
    {
      std::cout << s.at(i) << "\n" ;
    }
    
    return 0;
}
