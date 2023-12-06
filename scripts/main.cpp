//____File Headers____
//#include "tabledata.cpp"
//#include "list.cpp"
#include "search.cpp"
#include "inserting.cpp"
#include "update.cpp"
#include "query.cpp"
#include "exit.cpp"
//_____________________

int main()
{
    //_______________________________File Input_______________________________
    ifstream inFile;
    inFile.open("table1.txt");
    /*
    if(!infile)
    {
        cout << "File cannot be opened!" << endl;
        exit(1);
    }
    */
    int i = 0;
    while (
        inFile >>
        tableData.combinations[i] >>
        tableData.indexMPN[i] >>
        tableData.lower95[i] >>
        tableData.upper95[i])
    {

        i++;
    }
    //________________________________________________________________________

    cout << "=============================" << endl;
    cout << "*      MPN Data Manager     *" << endl;
    cout << "=============================" << endl;

    //"_________________________________________________________________\n";
    cout << "\nPlease pick your options : " << endl;
    cout << "1) List --------------------- Display the data on screen." << endl;
    cout << "2) Search ------------- Search with triplet combinations." << endl;
    cout << "3) Insert ------------------------ Insert new data entry." << endl;
    cout << "4) Update ------------------------- Update existing data." << endl;
    cout << "5) Query ---- Search with triplet combination attributes." << endl;
    cout << "6) Exit ------------------------------ Exits the program." << endl;
    cout << "\n Option : ";

    //_______________________________User Input_______________________________
    int options;
    do
    {
        cin >> options;
        switch (options)
        {
        case 1:
            //list.list();
            break;

        case 2:
            appSearch.appSearch(i);
            break;

        case 3:
            inserting.insertNew();
            break;

        case 4:
            update.update(i);
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
            cout << "\n! Input error, please enter the appropriate number!\n";
            cout << "\nPlease pick your options : " << endl;
            cout << "1) List --------------------- Display the data on screen." << endl;
            cout << "2) Search ------------- Search with triplet combinations." << endl;
            cout << "3) Insert ------------------------ Insert new data entry." << endl;
            cout << "4) Update ------------------------- Update existing data." << endl;
            cout << "5) Query ---- Search with triplet combination attributes." << endl;
            cout << "6) Exit ------------------------------ Exits the program." << endl;
            cout << "\n Option : ";
            //"_________________________________________________________________\n";
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
