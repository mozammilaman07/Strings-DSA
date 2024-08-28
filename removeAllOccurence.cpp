#include <iostream>
#include <string.h>
using namespace std;

string removeAllOccurence(string s, string part)
{
    while (s.find(part) != string::npos)
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";

    string left = removeAllOccurence(s, part);
    cout << left << endl;
}