#include "tabledata.cpp"
class Search : public TableData
{
    public:
        string search_combination;
        int h=0;
        int index;
    void input_search() // to input the combination-of-positive-triplet-data
    {
        cout<<"Input combination of positives: ";
        cin>>search_combination;
    }
    int appSearch(int i)
    {
        input_search(); // call the function for combination input
        for (int n=0; n<i; n++)
        {
            if (search_combination==tableData.combinations[n]) // Looking for the same combination in the list as the input combination
            {
                cout<<"For "<<tableData.combinations[n];
                cout<<", MPN = "<<tableData.indexMPN[n]<<";";
                cout<<" 95% of samples contain between "<<tableData.lower95[n];
                cout<<" and "<<tableData.upper95[n]<<" bacterial/ml."<<endl;
                h+=1; // as an index if the combination sought is in the list
                index=n; // for the update menu where the data in this combination will be updated
            }
        }
        if(h==0)
            cout<<"There is no data combination in the list"<<endl;
    }
};

Search appSearch;
