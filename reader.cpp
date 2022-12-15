using namespace std;

reader::reader()
{
    //ctor
}

reader::~reader()
{
    //dtor
}


int reader::open()
{

fstream plik;
plik.open("test.txt", ios::in);

if(plik.good()==false)
{
    cout << "NO FILE XD" << endl;
    return 0;
}
    string result;
    string line;

    while(getline(plik,line))
    {
        result+= line;
    }

    plik.close();

    cout << "Text: " <<result <<endl;


return 1;
}


int reader::code(string name)
{
    string new_name = name;
    name+=".txt";
    fstream plik;
    plik.open(name,ios::in);

    if(plik.good()==false)
    {
        cout << "Error 222" << endl;
        return 0;
    }

    string input;
    string to_code;

    while(getline(plik,input))
    {
        to_code+=input;
    }

    plik.close();
    new_name+= "_CODED.txt";
    coder cod;
    string coded = cod.code_sequence(to_code);
    remove(new_name.c_str());

    fstream plik2;
    plik2.open(new_name,ios::out | ios::app);
    plik2 << coded;
    plik2.close();


    return 1;
}

int reader::decode(string name)
{
    string new_name = name;
    name+=".txt";
    fstream plik;
    plik.open(name,ios::in);

    if(plik.good()==false)
    {
        cout << "Error 202" << endl;
        return 0;
    }

    string input;
    string to_decode;

    while(getline(plik,input))
    {
        to_decode+=input;
    }

    plik.close();
    new_name+= "_DECODED.txt";
    coder cod;
    string decoded = cod.decode_sequence(to_decode);

    remove(new_name.c_str());
    fstream plik2;
    plik2.open(new_name,ios::out | ios::app);
    plik2 << decoded;
    plik2.close();

    return 1;




}

int reader::broadcat(string name)
{
    string new_name = name;
    name+=".txt";
    fstream plik;
    plik.open(name,ios::in);

    if(plik.good()==false)
    {
        cout << "Error 222" << endl;
        return 0;
    }

    coder cod;
    string input;

     while(getline(plik,input))
    {
       cod.broadcast_sequence(input);
    }
    cout << "HELLOOO" << endl;

    plik.close();
    return 0;
}






