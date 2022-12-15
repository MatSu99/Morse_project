// IMCT_1
//Author Mateusz Sudak
// v 0.2.1

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <sstream>
#include <windows.h>
#include "dictionary.h"
#include "sound.h"
#include "coder.h"
#include "reader.h"
#include "menu.h"


using namespace std;


int main()
{   /*
    coder test;
    test.print_morse("at iee");
    cout << endl;
    test.print_morse("lama");
    test.decode_word("10111010100010111000111011100010111000");
    cout << "*************************************************";
    cout << endl;
    test.code_sequence("my name is matthew");
    cout << "*************************************************";
    test.decode_sequence("1110111000111010111011100000001110100010111000111011100010000000101000101010000000111011100010111000111000111000101010100010001011101110000000");
    cout << endl;
    */


    menu test;
    test.start();

    //reader test;
    //test.broadcat("tekst1_CODED");

    //sound test;
    //test.test_sound();





    cout << "Hi there" << endl;
return 0;
}
