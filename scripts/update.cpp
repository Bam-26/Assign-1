#include "tabledata.cpp"
class Update : public TableData
{
    public:
    void update()
    {
        cout << "update\n";
    }
};

Update update;