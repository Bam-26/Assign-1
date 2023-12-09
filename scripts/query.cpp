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

    int stackIteration = 0;
    int stackSize1 = 0;
    int stackSize2 = 0;
    int stackSize3 = 0;
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
       

        cout << "Stack 1 :\n";
        for (int n = 0; n < i; n++)
        {
            dashIndex = tableData.combinations[n].find('-');
            stringTemp1 = tableData.combinations[n].substr(0, dashIndex);
            if (stringTemp1 == combination1 || combination1 == "no")
            {
                stack1[t] = n;
                stackSize1++;
                t++;
            }
        }

        
        for (int n = 0; n < t; n++)
        {
            cout << stack1[n]+1 << endl;
        }

        stackIteration++;
        t = 0;


        cout << endl << "stack2 :\n";
        for (int n = 0; n < stackSize1; n++)
        {
            tableIndex = stack1[n];
            stringTemp2[n] = tableData.combinations[tableIndex];

            for (int o = 0; o < stackIteration; o++)
            {
                dashIndex = tableData.combinations[tableIndex].find("-");
                stringTemp2[n].erase(0, dashIndex + 1);
            }
            stringTemp2[n] = stringTemp2[n].substr(0, dashIndex);
            if(stringTemp2[n] == combination2 || combination2 == "no")
            {
                stack2[t] = tableIndex;
                stackSize2++;
                t++;
            }
        }

        
        for (int n = 0; n < stackSize2; n++)
        {
            cout << stack2[n]+1 << endl;
        }
        

        stackIteration++;
        t = 0;

        cout << endl << "stack3 :\n";
        for (int n = 0; n < stackSize2; n++)
        {
            tableIndex = stack2[n];
            stringTemp3[n] = tableData.combinations[tableIndex];

            for (int o = 0; o < stackIteration; o++)
            {
                dashIndex = tableData.combinations[tableIndex].find("-");
                stringTemp3[n].erase(0, dashIndex + 1);
            }
            stringTemp3[n] = stringTemp3[n].substr(0, dashIndex);
            if (stringTemp3[n] == combination3 || combination3 == "no")
            {
                stack3[t] = tableIndex;
                stackSize3++;
                t++;
            }
        }

        for (int n = 0; n < stackSize3; n++)
        {
            cout << tableData.combinations[stack3[n]] << endl;
        }
    }
};

Query query;
