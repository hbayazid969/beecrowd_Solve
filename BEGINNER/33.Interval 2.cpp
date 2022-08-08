/*
https://www.beecrowd.com.br/judge/en/problems/view/1072
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,c=0,d=0;
   cin>>t;
   for(int i=0;i<t;i++)
    {
    cin>>n;
   if(n>=10 && n<=20){
    c++;
   }else{
    d++;
   }
   }
   cout<<c<<" in"<<endl;
   cout<<d<<" out"<<endl;
}
