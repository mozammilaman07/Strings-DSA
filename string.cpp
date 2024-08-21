#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    // empty string
    string temp = "";
    // cout << "Length of string " << name.length() << endl;
    // cout << "string is empty or not " << temp.empty() << endl;

    cout << "Character at index 1 is " << name.at(1) << endl;
}
