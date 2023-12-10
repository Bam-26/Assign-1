#include "tabledata.cpp"
class Insert : public TableData
{
public:
     void rearrange(int &i)
    {
        string com = tableData.combinations[i];
        int in = tableData.indexMPN[i];
        int low = tableData.lower95[i];
        int up = tableData.upper95[i];
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


        tableData.combinations[q] = com;
        tableData.indexMPN[q] = in;
        tableData.lower95[q] = low;
        tableData.upper95[q] = up;
        //set value of inserted combination

        cout << endl << endl;
        cout << "                     >>>>> New Table Row <<<<<\n";

        cout << "       Combination of  MPN Index/100ml  95 percent Confidence Limit  \n";
        cout << "  No   Positives (MPN)                      Lower         Upper    \n";

        for (int n=0;n<i+1;n++)
        {
            cout << setw(4) << n + 1;
            cout << setw(13) << tableData.combinations[n];
            cout << setw(16) << tableData.indexMPN[n];
            cout << setw(15) << tableData.lower95[n];
            cout << setw(14) << tableData.upper95[n] << endl;
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
//class object

