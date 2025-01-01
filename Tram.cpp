#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    int sum=0,p=0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        sum=(a+p)-b;
        if(sum<0)
        {
            p=0;
        }else
        {
            p=sum;
        }
    }
    cout<<sum<<endl;
    return 0;

}
