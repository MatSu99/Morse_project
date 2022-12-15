
#include "menu.h"

using namespace std;

menu::menu()
{
    //ctor
}

menu::~menu()
{
    //dtor
}


int menu::start()
{
    cout << ">WELCOME TO IMCT_1 TRANSLATOR" << endl;
    cout << ">v 0.2.1" << endl;
    cout << ">ONLY TRANSLATING TXT FILES" << endl;
    int option;

    while(true)
    {
    cout << ">MENU" << endl;
    cout << "-----------------" << endl;
    cout << "1. AUTO TEXT -> MORSE" << endl;
    cout << "2. AUTO MORSE -> TEXT" << endl;
    cout << "3. EXIT" << endl;
    cout << "4. INFORMATION" << endl;
    cout << "5. BROADCAT 0.1" << endl;
    cin >> option ;
    switch(option)
    {
    case 1:
        cout << ">MORSE TO TEXT" << endl;
        one();
        cout << ">DOUBLE TAP TO END" << endl;
        break;

    case 2:
        cout << ">TEXT TO MORSE" << endl;
        two();
        cout << ">DOUBLE TAP TO END" << endl;
        break;
    case 3:
        cout << ">END" << endl;
        exit(0);
        break;
    case 4:
        cout << ">INFORMATION" << endl;
        four();
        break;

    case 5:
        cout<< ">BROADCASTING..." << endl;
        five();
        break;

        default: cout << "INNCORECT" << endl;



    }
    getchar();
    getchar();
    system("cls");

    }
    return 0;
}

int menu::one()
{
    cout << "> PLACE YOUR FILE IN LOCATION [PLACE HOLDER]" << endl;
    cout << "> ENTER NAME OF FILE [WITHOUT .txt]"<< endl;
    cin.ignore();
    string inp_1;
    getline(cin,inp_1);

    cout << "> TRANSLATING..." << endl;

    reader red;
    int a = red.code(inp_1);

    if ( a == 1)
    {
        cout << "> TRANSLATION COMPLETE SUCCESSFULLY" << endl;
    }
    else
    {
        cout << "> TRANSLATION FAILED" << endl;
    }

    return 1;





}

int menu::two()
{
    cout << "> PLACE YOUR FILE IN LOCATION [PLACE HOLDER]" << endl;
    cout << "> ENTER NAME OF FILE [WITHOUT .txt]"<< endl;
    cin.ignore();
    string inp_2;
    getline(cin,inp_2);

    cout << "> TRANSLATING..." << endl;

    reader red;
    int a = red.decode(inp_2);

    if ( a == 1)
    {
        cout << "> TRANSLATION COMPLETE SUCCESSFULLY" << endl;
    }
    else
    {
        cout << "> TRANSLATION FAILED" << endl;
    }

        return 1;
}

int menu::four()
{
    cout<< "> "<< endl;
    cout<<  ">Current version 0.2.1 "<< endl;
    cout<<  ">PROGRAM "<< endl;
    cout<<  ">International Morse Code Translator " <<endl;
    cout<<  ">IMCT_1 "<< endl;
    cout<<  ">Author Mateusz Sudak"<< endl;
    cout<<  ">About Morse Code: "<< endl;
    cout<<  "- The length of a dot is one unit"<< endl;
    cout<<  "- A dash is three units"<< endl;
    cout<<  "- The space between parts of the same letter is one unit "<< endl;
    cout << "- The space between letters is three units "<< endl;
    cout<<  "- The space between words is seven units "<< endl;

    return 0;
}

int menu::five()
{
    cout << "> PLACE YOUR FILE IN LOCATION [PLACE HOLDER]" << endl;
    cout << "> ENTER NAME OF FILE [WITHOUT .txt]"<< endl;
    cin.ignore();
    string inp_1;
    getline(cin,inp_1);

    reader cod;
    cod.broadcat(inp_1);

    return 1;
}
