/*
https://www.beecrowd.com.br/judge/en/problems/view/1101
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,sum=0;

   while(a>0 || b>0)
    {
     cin>>a>>b;
     if(a>b){
        int temp=a;
        a=b;
        b=temp;
     }
     if(a<=0 || b<=0){
        break;
     }
     for(int i=a;i<=b;i++){
        sum+=i;
        cout<<i<<" ";

     }

     cout<<"Sum="<<sum<<endl;
     sum=0;

    }

}
