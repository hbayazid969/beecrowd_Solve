/*
https://www.beecrowd.com.br/judge/en/problems/view/1071
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,d=0;
    cin>>n1>>n2;
    int m1=max(n1,n2);
    int m2=min(n1,n2);
    int p=m2+1;
    for(int i=m2;i<m1-1;i++){
        if(p%2!=0){
            d+=p;
        }
        p++;
    }
    cout<<d<<endl;


}
