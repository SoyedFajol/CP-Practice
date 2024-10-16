#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0; int count1=0; int count2=0;
        for(int i=0; i<n; i++)
        {
            int candy;
            cin>>candy;
            sum+=candy;
            if(candy==1)
                count1++;
            else
                count2++;
        }
        bool fairDivide=(sum % 2 == 0) && (count2 % 2 == 0 || count1>= 2);
        if(fairDivide)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
