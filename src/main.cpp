#include <iostream>
#include <vector> // vector<>
#include <fstream> // ofstream, ifstream
#include <string> // stoi()
#include <cstdlib> // rand()
#include <map> // map<>
#include <ctime> // time_t, tm*
#include <iomanip> // get_time(), put_time(), get_time()

#include "all_functions.h"

using namespace std;

vector<int> vec(8);

int main()
{
    string move;
    do {
        cout << "Enter move: ";
        cin >> move;
        if (move == "sum")
        {
            print(to_string(sum()) + "\n");
        }
        else if (move == "save")
        {
            save();
        }
        else if (move == "load")
        {
            write(load());
        }
        else if (move == "input")
        {
            vec = input();
            write(vec);
        }
        else if (move == "display")
        {
            display();
        }
    } while (move != "exit");
}