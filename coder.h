#ifndef CODER_H
#define CODER_H


using namespace std;

class coder
{
    public:
        coder(); // constructor
        virtual ~coder(); // destructor
        string code_word(string word);
        string decode_word(string word);
        string code_sequence(string sequence);
        string decode_sequence(string sequence);
        bool broadcast_word(string word);
        bool broadcast_sequence(string sequence);

        void print_morse(string sentence);


    protected:

    private:
};

#include"coder.cpp"

#endif // CODER_H
