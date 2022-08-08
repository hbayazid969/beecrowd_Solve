/*
https://www.beecrowd.com.br/judge/en/problems/view/1043
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,p,ar;
    cin>>a>>b>>c;

    if((a+b)>c && (b+c)>a && (c+a)>b){
        p=a+b+c;
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<p<<endl;
    }
    else{
        ar=0.5*(a+b)*c;
        cout<<fixed<<setprecision(1)<<"Area = "<<ar<<endl;
    }
}
