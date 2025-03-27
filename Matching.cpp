#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        long long sum=1;
        cin>>s;
        if(s[0]=='0')
        {
            cout<<0<<endl;
        }
        else
        {
            if(s[0]=='?')
            {
                sum=sum*9;
            }
            for(int i=1; i<s.size(); i++)
            {
                if(s[i]=='?')
                {
                    sum=sum*10;
                }
            }
            cout<<sum<<endl;
        }
    }
}
