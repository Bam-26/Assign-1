#include "tabledata.cpp"
class Search : public TableData
{
    public:
        string search_combination;
        int h;
        int index;
    void input_search()
    {
        cout<<"Input combination of positives: ";
        cin>>search_combination;
    }
    void search(int i)
    {
        input_search();
        for (int n=0; n<i; n++)
        {
            if (search_combination==tableData.combinations[n])
            {
                cout<<"For "<<tableData.combinations[n];
                cout<<", MPN = "<<tableData.indexMPN[n]<<";";
                cout<<" 95% of samples contain between "<<tableData.lower95[n];
                cout<<" and "<<tableData.upper95[n]<<"bacterial/ml."<<endl;
                h=1;
                index=n;
            }
        }
        if (h==0)
        {
            cout<<"There is no data combination in the list"<<endl;
        }
    }
};

Search search;
