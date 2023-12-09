#include "tabledata.cpp"
class Query : public TableData
{
private:
    int stack1[216];
    int stack2[216];
    int stack3[216];

    string stringTemp1;
    string stringTemp2[216];
    string stringTemp3[216];

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
        cout << "size = " << end(tableData.combinations) - begin(tableData.combinations) << endl;
        for (int n = 0; n < 17; n++)
        {
            dashIndex = tableData.combinations[n].find('-');
            stringTemp1 = tableData.combinations[n].substr(0, dashIndex);
            if (stringTemp1 == combination1 || combination1 == "no")
            {
                stack1[t] = n;
                t++;
            }
        }

        
        for (int n = 0; n < 17; n++)
        {
            cout << stack1[n]+1 << endl;
        }

        stackIndex++;
        t = 0;


        cout << endl << "stack2 :\n";
        for (int n = 0; n < sizeof(stack1) / sizeof(int); n++)
        {
            tableIndex = stack1[n];
            stringTemp2[n] = tableData.combinations[tableIndex];

            for (int o = 0; o < stackIndex; o++)
            {
                dashIndex = tableData.combinations[tableIndex].find("-");
                stringTemp2[n].erase(0, dashIndex + 1);
            }
            stringTemp2[n] = stringTemp2[n].substr(0, dashIndex);
            if(stringTemp2[n] == combination2 || combination2 == "no")
            {
                stack2[t] = tableIndex;
                t++;
            }
        }

        
        for (int n = 0; n < 17; n++)
        {
            cout << stack2[n]+1 << endl;
        }
        

        stackIndex++;
        t = 0;

        cout << endl << "stack3 :\n";
        for (int n = 0; n < sizeof(stack2) / sizeof(int); n++)
        {
            tableIndex = stack2[n];
            stringTemp3[n] = tableData.combinations[tableIndex];

            for (int o = 0; o < stackIndex; o++)
            {
                dashIndex = tableData.combinations[tableIndex].find("-");
                stringTemp3[n].erase(0, dashIndex + 1);
            }
            stringTemp3[n] = stringTemp3[n].substr(0, dashIndex);
            if (stringTemp3[n] == combination3 || combination3 == "no")
            {
                stack3[t] = tableIndex;
                t++;
            }
        }

        for (int n = 0; n < 3; n++)
        {
            cout << stack3[n]+1 << endl;
        }

/*
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
