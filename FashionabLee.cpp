#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int x=n/2;
        if(n<=2 || n%2!=0 || x%2!=0)
        {
            cout<<"NO"<<endl;

        }else
        {
            cout<<"YES"<<endl;
        }
    }
}
