/*
https://www.beecrowd.com.br/judge/en/problems/view/1132
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,sum=0;
    cin>>x>>y;
    int m=max(x,y);
    int n=min(x,y);
    while(m>=n){
        if(n%13!=0){
            sum+=n;
        }
        n++;
    }
    cout<<sum<<endl;
}
