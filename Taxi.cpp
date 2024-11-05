#include<iostream>
using namespace std;

int main()
{
    int t;
    int a=0,b=0,c=0,d=0,min_t=0;
    cin>>t;
    int A[t];
    for(int i=0; i<t; i++)
    {
        cin>>A[i];
        if(A[i]==1)
        {
            a++;
        }
        if(A[i]==2)
        {
            b++;
        }
        if(A[i]==3)
        {
            c++;
        }
        if(A[i]==4)
        {
            d++;
        }
    }

    min_t=d;
    while(a!=0 && c!=0)
    {
        c=c-1;
        a=a-1;
        min_t=min_t+1;
    }
    if(a==0 && c!=0)
    {
        min_t=min_t+c;
        c=0;
    }
    min_t=min_t+ b/2;
    if(b%2!=0)
    {
        if(a<=2)
        {
            min_t=min_t+1;
            b=0;
            a=0;
        }
        else
        {
            a=a-2;
            min_t=min_t+1;
            b=0;
        }
    }
    if(a!=0)
    {
        min_t=min_t+ a/4;
        if(a%4!=0)
        {
            min_t=min_t+1;
        }
    }
    cout<<min_t<<endl;
}




