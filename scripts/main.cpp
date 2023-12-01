#include <iostream>
#include <fstream>
#include <string>
//____Linker Header____
#include "list.cpp"
#include "search.cpp"
#include "insert.cpp"
#include "update.cpp"
#include "query.cpp"
#include "exit.cpp"
//_____________________
using namespace std;

fstream inputFile;

class Main
{
private:
public: 
    int combinations[216];
    int indexMPN[216];
    int lower95[216];
    int upper95[216];
};


int main()
{ 
    //cout << namespace_exit::x + namespace_insert::x;
    //cout << combi
    inputFile.open("table1.txt", ios::in);
    while (!inputFile.eof())
    {
        char input[10];
        inputFile.getline(input, 100);
        cout << input << endl;
    }

    //cout << "output = " << namespace_exit::x + namespace_insert::x;
    //cout << "find = " << yes.find('W') << endl;
    //string delet = yes.erase(0, 2 );
}
