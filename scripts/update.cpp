#include "tabledata.cpp"
#include "search.h"
class Update : public TableData, public Search
{
    public:
    void update(int i)
    {
        appSearch(i);
        if (h==1)
        {
            cout<<"Input the new number for MPN : ";            
            cin>>tableData.indexMPN[index];
            cout << "Input the new number for lower bounds:";
            cin >> tableData.lower95[index];
            cout << "Input the new number for upper bounds:";
            cin >> tableData.upper95[index];
        }
    }
};

Update update;
