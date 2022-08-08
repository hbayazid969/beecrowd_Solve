/*
https://www.beecrowd.com.br/judge/en/problems/view/1065
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0){
            c++;
        }
    }

    cout<<c<<" valores pares"<<endl;

}
