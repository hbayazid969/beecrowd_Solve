/*
https://www.beecrowd.com.br/judge/en/problems/view/1113
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,y;
   while(x!=y){
    cin>>x>>y;
    if(x>y){
        cout<<"Decrescente"<<endl;
    }
    else if(x<y){
       cout<<"Crescente"<<endl;
    }
   }

}
