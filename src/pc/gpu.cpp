#include <iostream>
#include <vector>
#include "all_functions.h"

using namespace std;

void print(const string& text)
{
    cout << text;
}

void display()
{
    for (auto i : vec)
    {
        print(to_string(i) + " ");
    }print("\n");
}