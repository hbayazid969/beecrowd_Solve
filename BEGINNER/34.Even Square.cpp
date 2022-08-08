/*
https://www.beecrowd.com.br/judge/en/problems/view/1073
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i=2;i<=t;i++){
    if(i%2==0){
        cout<<i<<"^"<<"2"<<" = "<<i*i<<endl;
    }
   }
}
