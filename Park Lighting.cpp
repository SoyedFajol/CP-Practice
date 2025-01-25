#include<iostream>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a=n*m;
        if(a==1)
        {
            cout<<1<<endl;
        }else if(a%2==0)
        {
            cout<<a/2<<endl;
        }else if(a%2==1)
        {
            cout<<a/2+1<<endl;
        }
    }
    return 0;
}
