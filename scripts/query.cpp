#include "tabledata.cpp"
class Query : public TableData
{
    public:
    void query()
    {
        cout << "query\n";
    }
};

Query query;
