#ifndef TABLEDATA_H
#define TABLEDATA_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <limits>
#include <algorithm>

using namespace std;
class TableData
{
    public:
        string combinations[216];
        int indexMPN[216];
        int lower95[216];
        int upper95[216];
};

TableData tableData;
int i = 0;

#endif
