//https://www.beecrowd.com.br/judge/en/problems/view/1116

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double res;
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a!=0 &&b!=0)
        {
            res=(double) a/b;

            cout<<res<<fixed<<setprecision(1)<<endl;
        }

        else if(b==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else if(a==0)
        {
            cout<<"0.0"<<endl;
        }
    }
}
