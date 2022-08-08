/*
https://www.beecrowd.com.br/judge/en/problems/view/1038
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double arr[5];
    int x,y;
    cin>>x>>y;
    arr[0]=4.00;
    arr[1]=4.50;
    arr[2]=5.00;
    arr[3]=2.00;
    arr[4]=1.50;

    cout<<fixed<<setprecision(2)<<"Total: R$ "<<arr[x-1] * y<<endl;
}
