#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                for(int k=j;k<n;k++)
                {
                    ar[k]=ar[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}