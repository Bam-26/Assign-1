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
            for (int o = 0; o < 3; o++)
            {
                cout << tableData.combinations[n][o] << "-";
            }
                cout << ", " << tableData.indexMPN[n] << ", " << tableData.lower95[n] << ", " << tableData.upper95[n] << endl;
        }
    };
};

List list;
