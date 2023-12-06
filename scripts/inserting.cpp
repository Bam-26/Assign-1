#include "tabledata.cpp"
#include <algorithm>
class Insert : public TableData
{
public:
     void rearrange(int &i)
    {
        string w = tableData.combinations[i];
        int x = tableData.indexMPN[i];
        int y = tableData.lower95[i];
        int z = tableData.upper95[i];
        //set fixed variables for the inserted data


        int q=0;
        while(q<i && tableData.combinations[i]>tableData.combinations[q])
        {
            q++;
        }
        //Find position of inserted data in supposed order


        for(int j=i;j>q;--j)
        {
            tableData.combinations[j] = tableData.combinations[j - 1];
            tableData.indexMPN[j] = tableData.indexMPN[j - 1];
            tableData.lower95[j] = tableData.lower95[j - 1];
            tableData.upper95[j] = tableData.upper95[j - 1];
        }
        //alternative code: sort(tableData.combinations, tableData.combinations + size);
        //rearrange elements in ascending order


        tableData.combinations[q] = w;
        tableData.indexMPN[q] = x;
        tableData.lower95[q] = y;
        tableData.upper95[q] = z;
        //set value of inserted combination


        for(int n=0;n<10;n++)
            {
                cout << tableData.combinations[n] << "\t" << tableData.indexMPN[n] << "\t" << tableData.lower95[n] << "\t" << tableData.upper95[n] << endl;
            }
        //print out final table after insertion
    }


    void input(int &i)
    {
        string combi;
        cout << "No of combinations: " << i << endl;
        cout << "Enter the combination-of-positives triplet data: ";
        cin >> combi;
        //Inputing new combination-of-positive-triplet-data


        int k=0;
        while(combi!=tableData.combinations[k] && k<i)
        {
            k++;
        }
        //To find if there is a duplicate


        if(combi==tableData.combinations[k])
        {
            cout << "This combination is in the list." << endl;
        }
        //Output when there is a duplicate


        if(combi!=tableData.combinations[k])
        {
            cout << "Enter the MPN-index data: ";
            cin >> tableData.indexMPN[i];
            //Inputing new MPN-index data
            cout << "Enter the 95-percent-confidence-limit-lower data: ";
            cin >> tableData.lower95[i];
            //Inputing new 95-percent-confidence-limit-lower data
            cout << "Enter the 95-percent-confidence-limit-upper data: ";
            cin >> tableData.upper95[i];
            //Inputing new 95-percent-confidence-limit-upper data
            tableData.combinations[i] = combi;
            rearrange(i);
            //Call rearrange function
        }
    }

    void insertNew(int i)
    {

        input(i);
        //call input function
    }
};

Insert obj;


