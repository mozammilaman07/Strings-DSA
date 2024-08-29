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

    // string str1 = "This is a car";
    // string str2 = "car";
    // // desc.erase(4, 3);
    // // cout << "to erase character " << desc << endl;
    // if (str1.find(str2) == string::npos)
    // {
    //     cout << "Not Found " << endl;
    // }
    // else
    // {
    //     cout << "Found " << endl;
    // }

    string str1 = "Aman";
    string str2 = "Aman";
    if (str1.compare(str2) == 0)
    {
        cout << "Matching " << endl;
    }
    else
    {
        cout << "Not matching " << endl;
    }
}
