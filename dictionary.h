#ifndef DICTIONARY_H
#define DICTIONARY_H


class dictionary
{
    public:
        dictionary(); // Constructor
        virtual ~dictionary(); // Destructor
        static std::string get_morse(char symbol); // Converting a character into morse sequence
        static std::string get_symbol(std::string morse); // Converting a morse sequence into character

    protected:

    private:
};

#include"dictionary.cpp"

#endif // DICTIONARY_H
