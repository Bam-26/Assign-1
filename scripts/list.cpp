#include "tabledata.cpp"
class List : public TableData
{
public:
    void list()
    {
        cout << "Table Row :\n\n";
        for (int n = 0; n < 10; n++)
        {
            cout << "Row " << n + 1 << " = ";
            cout << tableData.combinations[n][0] << "-" << tableData.combinations[n][1] << "-" << combinations[n][2];
            cout << ", " << tableData.indexMPN[n] << ", " << tableData.lower95[n] << ", " << tableData.upper95[n] << endl;
        }
    };
};

List list;
