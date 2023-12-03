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
    //_______________________________File Input_______________________________
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
    //________________________________________________________________________

    cout << "=============================" << endl;
    cout << "*      MPN Data Manager     *" << endl;
    cout << "=============================" << endl;

    cout << "\n\nPlease pick your options : ";

    //_______________________________User Input_______________________________
    int options;
    do
    {
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
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input error, please enter the appropriate number.\n\n";
            cout << "Please pick your options : ";
            break;
        }
    } while (options != 6);
    //________________________________________________________________________
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
