#include "tabledata.cpp"
#include <algorithm>
class Insert : public TableData
{
    int size = end(tableData.combinations[216])-begin(tableData.combinations[216]);
    //Count the size of array
public:
    void input()
    {
        int n = size;
        cout << "Enter the combination-of-positives triplet data: ";
        cin >> tableData.combinations[n];
        int k=0;
        //Inputing new combination-of-positive-triplet-data
        while(tableData.combinations[n]!=tableData.combinations[k] && k<size)
        {
            k++;
        }
        if(tableData.combinations[n]==tableData.combinations[k])
            cout << "This combination is in the list." << endl;
        if(tableData.combinations[n]!=tableData.combinations[k])
        {
            cout << "Enter the MPN-index data: ";
            cin >> tableData.indexMPN[n];
            //Inputing new MPN-index data
            cout << "Enter the 95-percent-confidence-limit-lower data: ";
            cin >> tableData.lower95[n];
            //Inputing new 95-percent-confidence-limit-lower data
            cout << "Enter the 95-percent-confidence-limit-upper data: ";
            cin >> tableData.upper95[n];
            //Inputing new 95-percent-confidence-limit-upper data
        }
    }
    void rearrange()
    {
        string w = tableData.combinations[size];
        int x = tableData.indexMPN[size];
        int y = tableData.lower95[size];
        int z = tableData.upper95[size];
        //set fixed variables for the inserted datas
        int q=0;
        while(q<size && tableData.combinations[size]>tableData.combinations[q])
        {
            q++;
        }
        //Find position of inserted data in supposed order
        for(int j=size;j>q;--j)
        {
            tableData.combinations[j] = tableData.combinations[j - 1];
            tableData.indexMPN[j] = tableData.indexMPN[j - 1];
            tableData.lower95[j] = tableData.lower95[j - 1];
            tableData.upper95[j] = tableData.upper95[j - 1];
        }
        //alternative code: sort(tableData.combinations, tableData.combinations + size);
        //rearrange elements in ascending order
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
    void insertNew()
    {

    //create object of insert class
            input();
            //call input function
            rearrange();
            //call rearrange function
    }
};

<<<<<<< HEAD
Insert obj;


=======
void insertNew()
{
    Insert myObj;
    //create object of insert class
    myObj.input();
    //call input function
    myObj.rearrange();
    //call rearrange function
}
>>>>>>> 72e7532eae0209945912e95bcc4a37589ce0cf0f

