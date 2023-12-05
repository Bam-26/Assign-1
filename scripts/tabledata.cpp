#ifndef TABLEDATA_H
#define TABLEDATA_H

#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;
class TableData
{
    public:
        int combinations[216][3];
        int indexMPN[216];
        int lower95[216];
        int upper95[216];
};

TableData tableData;

#endif