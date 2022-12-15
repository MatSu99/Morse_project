#include "dictionary.h"

dictionary::dictionary()
{
    //ctor
}

dictionary::~dictionary()
{
    //dtor
}


std::string dictionary::get_morse(char symbol)
{
    std::string a;

    if(symbol == ' ')
    a = "0000000";
    else if(symbol == 'a')
        a = "10111";
    else if(symbol == 'b' )
        a = "111010101";
        else if(symbol == 'c')
        a = "11101011101";
        else if(symbol == 'd' )
        a = "1110101";
        else if(symbol == 'e' )
        a = "1";
        else if(symbol == 'f')
        a = "101011101";
        else if(symbol == 'g')
        a = "111011101";
        else if(symbol == 'h')
        a = "1010101";
        else if(symbol == 'i')
        a = "101";
        else if(symbol == 'j')
        a = "1011101110111";
        else if(symbol == 'k')
        a = "111010111";
        else if(symbol == 'l')
        a = "101110101";
        else if(symbol == 'm')
        a = "1110111";
        else if(symbol == 'n')
        a = "11101";
        else if(symbol == 'o')
        a = "11101110111";
        else if(symbol == 'p')
        a = "10111011101";
        else if(symbol == 'q')
        a = "1110111010111";
        else if(symbol == 'r')
        a = "1011101";
        else if(symbol == 's')
        a = "10101";
        else if(symbol == 't')
        a = "111";
        else if(symbol == 'u')
        a = "1010111";
        else if(symbol == 'v')
        a = "101010111";
        else if(symbol == 'w')
        a = "101110111";
        else if(symbol == 'x')
        a = "11101010111";
        else if(symbol == 'y')
        a = "1110101110111";
        else if(symbol == 'z')
        a = "11101110101";
        else if(symbol == '1')
        a = "10111011101110111";
        else if(symbol == '2')
        a = "101011101110111";
        else if(symbol == '3')
        a = "1010101110111";
        else if(symbol == '4')
        a = "10101010111";
        else if(symbol == '5')
        a = "101010101";
        else if(symbol == '6')
        a = "11101010101";
        else if(symbol == '7')
        a = "1110111010101";
        else if(symbol == '8')
        a = "111011101110101";
        else if(symbol == '9')
        a = "11101110111011101";
        else if(symbol == '0')
        a = "1110111011101110111";
        else if(symbol == '.')
        a = "10111010111010111";
        else if(symbol == ',')
        a = "1110111010101110111";
        else if(symbol == '?')
        a = "101011101110101";
        else if (symbol == '-')
            a = "111010101010111";
        else
        {
            std::cout << "Error 10" << std::endl; // Error 10 << Occurs when there is no such symbol in dictionary
            std::cout << "PROBLEM WITH>" << symbol << "<" << std::endl;
        }





    return a;
}


std::string dictionary::get_symbol(std::string morse)
{
    std::string a;
    if(morse == "0000000")
        a = " ";
    else if(morse == "10111")
        a = "a";
    else if(morse == "111010101")
        a = "b";
        else if(morse == "11101011101")
        a = "c";
        else if(morse == "1110101")
        a = "d";
        else if(morse == "1")
        a = "e";
        else if(morse == "101011101")
        a = "f";
        else if(morse == "111011101")
        a = "g";
        else if(morse == "1010101")
        a = "h";
        else if(morse == "101")
        a = "i";
        else if(morse == "1011101110111")
        a = "j";
        else if(morse == "111010111")
        a = "k";
        else if(morse == "101110101")
        a = "l";
        else if(morse == "1110111")
        a = "m";
        else if(morse == "11101")
        a = "n";
        else if(morse == "11101110111")
        a = "o";
        else if(morse == "10111011101")
        a = "p";
        else if(morse == "1110111010111")
        a = "q";
        else if(morse == "1011101")
        a = "r";
        else if(morse == "10101")
        a = "s";
        else if(morse == "111")
        a = "t";
        else if(morse == "1010111")
        a = "u";
        else if(morse == "101010111")
        a = "v";
        else if(morse == "101110111")
        a = "w";
        else if(morse == "11101010111")
        a = "x";
        else if(morse == "1110101110111")
        a = "y";
        else if(morse == "11101110101")
        a = "z";
        else if(morse == "1110111011101110111")
        a = "0";
        else if(morse == "10111011101110111")
        a = "1";
        else if(morse == "101011101110111")
        a = "2";
        else if(morse == "1010101110111")
        a = "3";
        else if(morse == "10101010111")
        a = "4";
        else if(morse == "101010101")
        a = "5";
        else if(morse == "11101010101")
        a = "6";
        else if(morse == "1110111010101")
        a = "7";
        else if(morse == "111011101110101")
        a = "8";
        else if(morse == "11101110111011101")
        a = "9";
        else if(morse == "10111010111010111")
        a = ".";
        else if(morse == "101011101110101")
        a = "?";
        else if(morse == "1110111010101110111")
        a = ",";
        else
        {
            std::cout << "Error 11" << std::endl;  // Error 10 << Occurs when there is no such sequence of impulses in dictionary
        }


    return a;
}


