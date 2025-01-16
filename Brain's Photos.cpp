#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int flag=0;
    for(int i=0; i<r; i++)
    {
        for(int z=0; z<c; z++)
        {
            char color;
            cin>>color;
            if(color =='C' || color =='M' || color =='Y')
            {
                flag=1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;

    }
}
