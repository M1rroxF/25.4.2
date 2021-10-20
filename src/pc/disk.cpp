#include <iostream>
#include <vector>
#include <fstream>
#include "all_functions.h"

using namespace std;

vector<int> load()
{
    vector<int> result(8);
    ifstream file("data.txt", ios::binary);
    for (int i = 0 ; i < 8 ; i++)
    {
        file.read( (char*)&result[i], 4);
    }
    file.close();
    return result;
}

void save()
{
    ofstream file("data.txt", ios::binary);
    if (file.is_open()){
        for (int i = 0 ; i < 8 ; i++)
        {
            file.write( (char*)&vec[i], 4 );
        }
    }
    else {
        print("False\n");
    }
    file.close();
}