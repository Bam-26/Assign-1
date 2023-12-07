#include "tabledata.cpp"
class Query : public TableData
{
private:
    string combination1;
    string combination2;
    string combination3;
    string fullCombination;

public:
    void query()
    {
        cout << "Please enter 10 ml group you want to search or leave it blank  : ";
        cin >> combination1;

        cout << "Please enter 1 ml group you want to search or leave it blank   : ";
        cin >> combination2;

        cout << "Please enter 0.1 ml group you want to search or leave it blank : ";
        cin >> combination3;

        fullCombination = combination1 + combination2 + combination3;

        tableData.combinations[0].erase(remove(tableData.combinations[0].begin(), tableData.combinations[0].end(), '-'), tableData.combinations[0].end());
        
        cout <<tableData.combinations[0];
        cout << fullCombination;
    }
};

Query query;
