/*
https://www.beecrowd.com.br/judge/en/problems/view/1070
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d=0;
    cin>>n;
    for(int i=0;i<20;i++){
        if(n%2!=0){
            cout<<n<<endl;
            d++;
        }
        n++;
        if(d==6){
        break;
    }
    }


}
