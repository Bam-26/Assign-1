//____FIle Headers____
//#include "tabledata.cpp"
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

    int j = 0;
    int i = 0;
    while 
    (
        inFile >> 
        tableData.combinations[j][i] >> 
        tableData.indexMPN[i] >>
        tableData.lower95[i] >>
        tableData.upper95[i]
    )
    {
        j++;
        i++;
        if(j >= 2)
        {
            j = 0;
        }
    }
    //________________________________________________________________________

    cout << "=============================" << endl;
    cout << "*      MPN Data Manager     *" << endl;
    cout << "=============================" << endl;

    //"_________________________________________________________________\n";
    cout << "\nPlease pick your options : " << endl;
    cout << "1) List -- Display the data on screen." << endl;
    cout << "2) Search -- Search MPN data using combination of positive triplets." << endl;
    cout << "3) Insert -- Insert new data entry." << endl;
    cout << "4) Update -- Update existing data." << endl;
    cout << "5) Query " << endl;

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
            cout << "\n! Input error, please enter the appropriate number !\n\n";
            cout << "Please enter the number your options : " << endl;
            //cout << "_________________________________________________________________\n";
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
