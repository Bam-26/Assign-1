//____FIle Headers____
#include "tabledata.cpp"
#include "list.cpp"
#include "search.cpp"
#include "insert.cpp"
#include "update.cpp"
#include "query.cpp"
#include "exit.cpp"
//_____________________

int main()
{
    //_______________________File Input_______________________
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
    //________________________________________________________


    //User Options
    int options;
    cin >> options;
    switch (options)
    {
    case 1:
        list.list();
        break;

    case 2:
        search.search();
        break;

    case 3:
        insert.insert();
        break;

    case 4:
        update.update();
        break;

    case 5:
        query.query();
        break;

    case 6:
        appExit.appExit();
        break;

    default:
        cout << "error";
        break;
        }
}
    
/*
    cout << "Table Row :\n\n";
    for (int n = 0; n < 10; n++)
    {
        cout << "Row " << n + 1 << " = " << tableData.combinations[n] << ", " << tableData.indexMPN[n] << ", " << tableData.lower95[n] << ", " << tableData.upper95[n] << endl;
    }

    cout << "\nMPN Combinations = ";
    for (int n = 0; n < 10; n++)
    {
        cout << tableData.combinations[n] << ", ";
    }
}
*/
