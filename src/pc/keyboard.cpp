#include <iostream>
#include <vector>
#include "all_functions.h"

using namespace std;

vector<int> input()
{
    print("Enter: ");
    vector<int> n(8);
    for (int i = 0 ; i < 8 ; i++)
    {
        cin >> n[i];
    }
    return n;
}