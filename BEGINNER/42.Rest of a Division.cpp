/*
https://www.beecrowd.com.br/judge/en/problems/view/1133
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,sum=0;
    cin>>x>>y;
    int m=max(x,y);
    int t=min(x,y);
    int n=t+1;
    while(n<m){
        if(n%5==2 || n%5==3){
            cout<<n<<endl;
        }
        n++;
    }

}
