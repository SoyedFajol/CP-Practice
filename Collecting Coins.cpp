#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int x= max(a,max(b,c));
        int y=(x-a)+(x-b)+(x-c);
        if(n>=y &&(n-y)%3==0){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
