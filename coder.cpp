#include "coder.h"

using namespace std;

coder::coder()
{
    //ctor
}

coder::~coder()
{
    //dtor
}

string coder::code_word(string word)
{
    string result;
    int a = word.length() ;

    for(int i = 0; i<a ; i++)
    {
        result += dictionary::get_morse(word[i]);

        if(i+1 == a)
            break;

        if(word[i+1]!=' ' && word[i]!= ' ')
        result += "000";

    }


    return result;
}

bool coder::broadcast_word(string word)
{
    int a = word.length();
    sound signal;

    for( int i = 0; i<a;i++)
    {
        signal.get_sound_char(word[i]);
        if(i+1 == a)
            break;
    }

    return true;
}

bool coder::broadcast_sequence(string sequence)
{
    int a = sequence.length();
    int i = 0;
    cout << "Length of sequence: "<< a  << endl;
    cout << "HERE" << endl;
    sound signal;
    while(i<a)
    {

        signal.get_sound_char(sequence[i]);

            if(sequence[i+1]!=' ')
            signal.wait_dot();

            i++;
    }
    return true;
}

string coder::code_sequence(string sequence)
{
    string result;
    int a = sequence.length();
    string word;
    int i = 0;

    while(i < a)
    {
    do
        {
            if(i ==a)
                break;
            word +=sequence[i];
            i++;

        }
        while( sequence[i]!= ' ');
        result += coder::code_word(word);
        word.clear();
        result+="0000000";
        i++;

    }
    //cout << "Sequence is: " << result << endl;
    return result;

}

string coder::decode_word(string word)
{
    string result;
    string letter;
    int a = word.length();
    int i = 0;

    while(i<a)
        {

        do
        {
            if(i==a)
                break;
            letter +=word[i];
            i++;
        }
        while(word[i] != '0' || word[i+1] != '0' || word[i+2] != '0');

        result+=dictionary::get_symbol(letter);
        letter.clear();
        i=i+3;


        }


    //cout << "Result is" << endl << result << endl;
    return result;
}

string coder::decode_sequence(string sequence)
{
    string result;
    int a = sequence.length();
    string word;
    int i = 0;
    int next_line = 0;

    while(i<a)
        {

        do
        {

            word +=sequence[i];
            i++;
        }
        while(sequence[i] != '0' || sequence[i+1] != '0' || sequence[i+2] != '0' || sequence[i+3] != '0');


        result+=coder::decode_word(word);
        result+=' ';
        word.clear();
        next_line++;
        if(next_line > 10)
        {
            next_line =0;
            result+='\n';
        }
        i=i+7;


        }

       // cout << "Sequence is: " << endl << result << endl;
    return result;
}

void coder::print_morse(string sentence)
{
    string result = code_word(sentence);
    cout << result;
    return ;
}
