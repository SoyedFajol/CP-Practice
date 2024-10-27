#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        cout<<(m-c)+(n-r)*(2*m-1)<<endl;
    }
    return 0;
}
