#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool word = false;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i += 2;
            if(word)
            {
                cout << " ";
            }
            word = false;
        }
        else
        {
            cout << s[i];
            word = true;
        }
    }
    if(word)
    {
        cout << " ";
    }
    cout << endl;
    return 0;
}
