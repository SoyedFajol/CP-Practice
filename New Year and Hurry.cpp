#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    arr[0]=0;
    for(int i=1; i<=n; i++)
    {
        arr[i]=i;
        arr[i]=arr[i]*5;
    }
    int c=0;
    int ch=k;
    for(int i=1; i<=n; i++)
    {
        if(ch<=240)
        {
            ch+=arr[i];
            if(ch>240)
            {
                break;
            }
            c++;
        }
    }
    cout<<c<<endl;
}
