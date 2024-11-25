#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr[b];
    for(int i=0; i<b; i++)
    {
        cin>>arr[i];
    }
       long long int count=0;
       int current = 1;

   for(int i=0;i<b;i++)
   {
       if(arr[i] >= current)
           count += arr[i] - current;
       else
           count += a - current + arr[i];

       current = arr[i];
   }
    cout<<count;
    return 0;
}
