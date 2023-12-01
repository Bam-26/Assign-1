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
    string combinations[216];
    int indexMPN[216];
    int lower95[216];
    int upper95[216];
};


int main()
{ 
    Main tableData;
    ifstream inFile;
    inFile.open("table1.txt");
    int i = 0;
    
    while 
    (
        inFile >> 
        tableData.combinations[i] >> 
        tableData.indexMPN[i] >>
        tableData.lower95[i] >>
        tableData.upper95[i]
    )
    {i++;}

    cout << "Table Row :\n\n";
    for (int j = 0; j < 10; j++)
    {
        cout << "Row " << j + 1 << " = " << tableData.combinations[j] << ", " << tableData.indexMPN[j] << ", " << tableData.lower95[j] << ", " << tableData.upper95[j] << endl;
    }

    cout << "\nMPN Combinations = ";
    for (int j = 0; j < 10; j++)
    {
        cout << tableData.combinations[j] << ", ";
    }
}