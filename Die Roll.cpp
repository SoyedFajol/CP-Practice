#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=max(a,b);
    c=6-c;
    c++;
    int d=6;
    if(c==6)
    {
        c/=6;
        d/=6;
    }else if(c==4)
    {
        c/=2;
        d/=2;
    }else if(c==3)
    {
        c/=3;
        d/=3;
    }else if(c==2)
    {
        c/=2;
        d/=2;
    }
    cout<<c<<"/"<<d;
}
