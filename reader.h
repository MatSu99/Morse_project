#ifndef READER_H
#define READER_H



class reader
{
    public:
        reader();
        virtual ~reader();
        int open();
        int find_and_open(string name);
        int code( string name);
        int decode(string name);
        int broadcat(string name);

    protected:

    private:
};

#include"reader.cpp"

#endif // READER_H
