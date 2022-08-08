/*
https://www.beecrowd.com.br/judge/en/problems/view/1060
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    double arr[6];
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<6;i++)
    {
        if(arr[i]>=0){
            c++;
        }
    }
    cout<<c<<" valores positivos"<<endl;

}
