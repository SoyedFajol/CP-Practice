#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    if(arr[i]=="Tetrahedron")
    {
        count+=4;
    }
    else if(arr[i]=="Cube")
    {
        count+=6;
    }
    else if(arr[i]=="Octahedron")
    {
        count+=8;
    }
    else if(arr[i]=="Dodecahedron")
    {
        count+=12;
    }
    else if(arr[i]=="Icosahedron")
    {
        count+=20;
    }
}
    cout<<count;
    return 0;
}
