#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //     string name;
    //     getline(cin, name);
    //     // empty string
    //     string temp = "";
    //     // cout << "Length of string " << name.length() << endl;
    //     // cout << "string is empty or not " << temp.empty() << endl;

    //     // cout << "Character at index 1 is " << name.at(1) << endl;
    //     string str1 = "Love";
    //     string str2 = "Babbar";
    //     cout << "Before " << str1 << endl;
    //     cout << "Before " << str2 << endl;
    //     // apend
    //     str1.append(str2);
    //     cout << "After " << str1 << endl;
    //     cout << "After " << str2 << endl;
    string desc = "This is a car";
    desc.erase(4, 3);
    cout << "to erase character " << desc << endl;
}
