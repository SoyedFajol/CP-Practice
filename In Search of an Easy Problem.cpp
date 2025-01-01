#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"EASY"<<endl;
    }else
    {
        cout<<"HARD"<<endl;
    }
    return 0;
}
