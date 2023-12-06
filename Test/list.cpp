#include "tabledata.cpp"
class List : public TableData
{
public:
    void list()
    {
        cout << "                     >>>>> Table Row <<<<<\n";
        cout << "+------+----------------+-----------------+-----------------------------+\n";
        cout << "|      | Combination of | MPN Index/100ml | 95 percent Confidence Limit | \n";
        cout << "|  No. | Positives (MPN)|                 |     Lower     |    Upper    |\n";
        cout << "+------+----------------+-----------------+---------------+-------------+\n";
        for (int n = 0; n < 10; n++)
        {
            cout << "|  " << n + 1;
            cout << "   ";

            cout << tableData.combinations[n];

            cout << tableData.indexMPN[n] << tableData.lower95[n];

            cout << tableData.upper95[n] << endl;
        }
    };
};

List list;

int main()
{
    ifstream inFile;
    inFile.open("table1.txt");
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

    list.list();
}
