#include "tabledata.cpp"
class Query : public TableData
{
private:
    int stack1[216];
    int stack2[216];
    int stack3[216];

    string stringTemp1;
    string stringTemp2[216];
    string stringTemp3;

    string combination1;
    string combination2;
    string combination3;

    int tableIndex;
    int dashIndex;
    int stackIndex = 0;
    int t = 0;
    //string fullCombination;

public:
    void query()
    {
        cout << "Please enter 10 ml group you want to search or enter \"no\" to leave it blank  : ";
        cin >> combination1;

        cout << "Please enter 1 ml group you want to search or enter \"no\" to leave it blank   : ";
        cin >> combination2;

        cout << "Please enter 0.1 ml group you want to search or enter \"no\" to leave it blank : ";
        cin >> combination3;

        //fullCombination = combination1 + combination2 + combination3;

        /*
        tableData.combinations[0].erase(remove(tableData.combinations[0].begin(), tableData.combinations[0].end(), '-'), tableData.combinations[0].end());
        */

        cout << "Stack 1 :\n";
        for (int n = 0; n < 17; n++)
        {
            //cout << tableData.combinations[n].find('-') << endl;
            dashIndex = tableData.combinations[n].find('-');
            stringTemp1 = tableData.combinations[n].substr(0, dashIndex);
            if (stringTemp1 == combination1 || combination1 == "no")
            {
                stack1[t] = n;
                cout << tableData.combinations[n] << endl;
                t++;
            }
            //cout << tableData.combinations[n] << endl;
        }
/*
        for (int n = 0; n < 17; n++)
        {
            cout << stack1[n] << endl;
        }*/

        stackIndex++;
        t = 0;
        cout << stackIndex;

        cout << "stack2 :\n";
            for (int n = 0; n < 17; n++)
        {
            tableIndex = stack1[n];
            stringTemp2[t] = tableData.combinations[tableIndex];

            for (int o = 0; o < stackIndex; o++)
            {
                dashIndex = tableData.combinations[tableIndex].find("-");
                stringTemp2[t].erase(0, dashIndex + 1);
            }
            stringTemp2[t] = stringTemp2[t].substr(0, dashIndex);
            if(stringTemp2[t] == combination2 || combination2 == "no")
            {
                cout << tableIndex << endl;
            }
            //cout << stringTemp2[t] << endl;
            t++;  
        }
/*
        //cout << combination1 << endl;

        
                 if (tableData.combinations[0][0] == combination1)
                 {
                     cout << "yassssssssss";
                     // cout << tableData.combinations[n][0] << endl;
                 }

                 for (int n = 0; n < 10; n++)
                 {
                     if ((int)tableData.combinations[n][0] == combination1)
                     {
                         cout << "Index " << n << " in.\n";
                         //cout << tableData.combinations[n][0] << endl;
                     }
                 }*/
    }
};

Query query;
