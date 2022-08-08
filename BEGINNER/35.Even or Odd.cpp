/*
https://www.beecrowd.com.br/judge/en/problems/view/1074
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,n;
   cin>>t;
   for(int i=1;i<=t;i++){
    cin>>n;
    if(n==0){
        cout<<"NULL"<<endl;
    }
    if(n>0)
     if(n%2!=0){
        cout<<"ODD POSITIVE"<<endl;
     }else{
        cout<<"EVEN POSITIVE"<<endl;
    }
     if(n<0){
        if(n%2==0)
            {
                cout<<"EVEN NEGATIVE"<<endl;
            }else{
                cout<<"ODD NEGATIVE"<<endl;
            }
     }
   }
}
