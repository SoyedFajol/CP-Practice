
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int count = 0;
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] == ' ')
        {
            continue;
        }
        else if(i == s.length() - 1 || s[i] != s[i+1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
