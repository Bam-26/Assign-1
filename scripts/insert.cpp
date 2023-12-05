#include "tabledata.cpp"
class Insert : public TableData
{
    string combinations;
    int indexMPN;
    int lower95;
    int upper95;
    void insert(string combination,int index, int lower95, int upper95)
    {

        int n=11;
        cout << "Enter the combination-of-positives triplet data: ";
        cin >> tableData.combinations[n] << tableData.indexMPN[n] << tableData.lower95[n] << tableData.upper95[n];
        for(n=0;n<10;n++)
        {
            cout << "Row " << n + 1 << " = " << tableData.combinations[n] << ", " << tableData.indexMPN[n] << ", " << tableData.lower95[n] << ", " << tableData.upper95[n] << endl;
        }
        while(tableData.combinations[n]<)
    }
    void rearrage()
    {
        ...
    }
};

int main()
{
        Insert myObj;
        myObj.
}

Insert insert;
