/*
https://www.beecrowd.com.br/judge/en/problems/view/1010
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p1,p2;
    double u1,u2,pr1,pr2;
    cin>>p1>>u1>>pr1>>p2>>u2>>pr2;
    double res = (u1*pr1)+(u2*pr2);
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<res<<endl;

}
