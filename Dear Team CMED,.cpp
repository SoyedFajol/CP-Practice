
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h;
        cin>>h;
        string str;
        cin>>str;
        if(h==0)
            cout<<12<< str << " AM\n";
        else if(h<=11)
        {
            if(h<10)
                cout<<0<< h;
            else
                cout<<h;
            cout<<str<< " AM\n";
        }
        else if(h==12)
            cout<<h<<str<<" PM\n";
        else if(h>12)
        {
            if(h-12<10)
                cout<<0<<h-12;
            else
                cout<<h-12;
            cout<<str<<" PM\n";
        }

    }
}
