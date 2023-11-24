#include <iostream>
#include <string>
//____Linker Header____
#include "list.cpp"
#include "search.cpp"
#include "insert.cpp"
#include "update.cpp"
#include "query.cpp"
#include "exit.cpp"
//_____________________
using namespace std;

int main()
{
    cout << namespace_exit::x + namespace_insert::x;
}
