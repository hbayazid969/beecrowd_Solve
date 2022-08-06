/*
https://www.beecrowd.com.br/judge/en/problems/view/1015
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double r1=(x2-x1);
    double r2=(y2-y1);
    double res = sqrt((pow(r1,2)) + (pow(r2,2)));
    cout<<fixed<<setprecision(4)<<res<<endl;

}
