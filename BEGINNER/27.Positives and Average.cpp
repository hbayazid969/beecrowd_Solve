/*
https://www.beecrowd.com.br/judge/en/problems/view/1064
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    double arr[6],sum=0;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<6;i++)
    {
        if(arr[i]>=0){
            sum+=arr[i];
            c++;
        }
    }

    cout<<c<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<sum/c<<endl;

}
