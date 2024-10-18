#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int h=0;
    int sum=0;

    for(int i=1; n>0; i++)
    {
        sum = i+sum;
        if(n-sum > 0)
            h++;
        n -=sum;
    }
    cout<<h<<endl;
    return 0;


}

