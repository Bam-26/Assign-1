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
    //cout << namespace_exit::x + namespace_insert::x;
    //cout << combi

    Main tableData;
    ifstream inFile;
    inFile.open("table1.txt");
    int i = 0;
    // inputFile.open("table1.txt", ios::in);
    while (inFile >> 
    tableData.combinations[i] >> 
    tableData.indexMPN[i] >>
    tableData.lower95[i] >>
    tableData.upper95[i]
    )
    {
        //cout << "Output " << i << " =" << tableData.combinations[i] << " " << tableData.indexMPN << endl;
        i++;
    }

    cout << "Table Row :\n\n";
    for (int j = 0; j < 10; j++)
    {
        cout << "Row " << j + 1 << " = " << tableData.combinations[j] << ", " << tableData.indexMPN[j] << ", " << tableData.lower95[j] << ", " << tableData.upper95[j] << endl;
    }

    for (int j = 0; j < 10; j++)
    {
        cout << tableData.combinations[j] << ", ";
    }
    //cout << "output = " << namespace_exit::x + namespace_insert::x;
    //cout << "find = " << yes.find('W') << endl;
    //string delet = yes.erase(0, 2 );
}
