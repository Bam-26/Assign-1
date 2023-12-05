#include "tabledata.cpp"
class Insert : public TableData
{
    public:
    void insert()
    {
        cout << "insert\n";
    }
};

Insert insert;
