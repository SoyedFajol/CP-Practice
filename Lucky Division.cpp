#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

        if( (t%4==0) || (t%7 ==0) || (t%44 ==0) || (t%47==0) || (t%74 ==0) || (t%77 ==0) || (t%444==0) || (t%447 ==0) || (t%474 ==0) || (t%477 ==0) || (t%744 ==0))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    return 0;
}
