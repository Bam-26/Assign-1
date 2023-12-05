#include "tabledata.cpp"
#include <algorithm>
class Insert : public TableData
{
    string combinations[216];
    int indexMPN[216];
    int lower95[216];
    int upper95[216];
    int size = end(combinations[216])-begin(combinations[216]);
    //Count the size of array
public:
    void input()
    {
        int n = size;
        cout << "Enter the combination-of-positives triplet data: ";
        cin >> combinations[n];
        int k=0;
        //Inputing new combination-of-positive-triplet-data
        while(combinations[n]!=combinations[k] && k<size)
        {
            k++;
        }
        if(combinations[n]==combinations[k])
            cout << "This combination is in the list." << endl;
        if(combinations[n]!=combinations[k])
        {
            cout << "Enter the MPN-index data: ";
            cin >> tableData.indexMPN[n];
            //Inputing new MPN-index data
            cout << "Enter the 95-percent-confidence-limit-lower data: ";
            cin >> lower95[n];
            //Inputing new 95-percent-confidence-limit-lower data
            cout << "Enter the 95-percent-confidence-limit-upper data: ";
            cin >> upper95[n];
            //Inputing new 95-percent-confidence-limit-upper data
        }
    }
    void rearrange()
    {
        string w = combinations[size];
        int x = indexMPN[size];
        int y = lower95[size];
        int z = upper95[size];
        sort(combinations, combinations + size);
        //Sort combinations in ascending order
        int r=0;
        while(combinations[r]!="w" && r<size)
        {
            r++;
        }
        //find location of index of inserted combination
        for(int j=size;j>r;--j)
        {
            indexMPN[j] = indexMPN[j - 1];
            lower95[j] = lower95[j - 1];
            upper95[j] = upper95[j - 1];
        }
        //rearrange elements
        indexMPN[r] = x;
        lower95[r] = y;
        upper95[r] = z;
        //set value of inserted combination
        for(int n=0;n<10;n++)
            {
                cout << combinations[n] << "\t" << tableData.indexMPN[n] << "\t" << lower95[n] << "\t" << upper95[n] << endl;
            }
        //print out final table after insertion
    }
};

Insert insert;
