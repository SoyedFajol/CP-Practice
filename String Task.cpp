#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s, a1;
    cin >> s;
    int d = s.length();

    for(int i = 0; i < d; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
           s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||
           s[i]=='Y' || s[i]=='y')
        {
            continue;
        }
        else
        {
            a1 += '.';
            a1 += tolower(s[i]);
        }
    }

    cout << a1 << endl;
    return 0;
}
