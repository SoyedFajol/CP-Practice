#include<bits/stdc++.h>
using namespace std;

int main(){
       int n;
       string rehel;
       cin>> n;

       while(n--){
        cin >> rehel;

        if(rehel.size()>10)
        {
            cout<< rehel[0] << rehel.size()-2 <<rehel[rehel.size()-1] << endl;
        }
       else{
           cout << rehel << endl;
}
}
}
