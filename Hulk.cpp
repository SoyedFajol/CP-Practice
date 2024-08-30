#include<iostream>
using namespace std;

int main(){
  int s;
  cin>>s;
  for(int i=1; i<s; i++)
  {
      if(i%2!=0)
      {
          cout<<"I hate that ";
      }
      if(i%2==0)
      {
          cout<<"I love that ";
      }
  }
  if(s%2!=0)
  {
      cout<<"I hate it";
  }
  if(s%2==0)
  {
      cout<<"I love it";
  }



}
