
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,n;
        cin>>x>>y>>n;
         long long p=(n-y)/x;
         long long k=p*x+y;

         cout<<k<<endl;
    }
    return 0;
}
