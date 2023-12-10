//____File Headers____
#include "list.cpp"
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

     int options;
do
    {
    cout << "=============================" << endl;
    cout << "*      MPN Data Manager     *" << endl;
    cout << "=============================" << endl;
    cout << "\nPlease pick your options : " << endl;
    cout << "1) List --------------------- Display the data on screen." << endl;
    cout << "2) Search ------------ Search using triplet combinations." << endl;
    cout << "3) Insert ------------------------ Insert new data entry." << endl;
    cout << "4) Update ------------------------- Update existing data." << endl;
    cout << "5) Query --- Search using triplet combination attributes. " << endl;
    cout << "6) Exit ------------------------------ Exits the program." << endl;
    cout << "\nOption : ";
    //_______________________________User Input_______________________________


        cin >> options;
        switch (options)
        {
        case 1:
            list.list();
            //call list function
            break;

        case 2:
            appSearch.appSearch(i);
            //call search function
            break;

        case 3:
            obj.insertNew(i);
            //call insert function
            i++;
            break;

        case 4:
            update.update(i);
            //call update function
            break;

        case 5:
            query.query();
            //call query function
            break;

        case 6:
            appExit.appExit();
            //call exit function
            break;

        default:
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n! Input error, please enter the appropriate number !\n\n";
            cout << "Please enter the number your options : " << endl;
            break;
        }

        cout << endl << endl;
    } while (options != 6);
}
