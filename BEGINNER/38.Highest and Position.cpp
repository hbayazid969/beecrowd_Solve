/*
https://www.beecrowd.com.br/judge/en/problems/view/1080
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[100];
   int index=-1;
   for(int i=1;i<=100;i++){
    cin>>arr[i];
   }
   for(int i=1;i<=100;i++){
    if(arr[i]>arr[0]){
      arr[0]=arr[i];
      index=i;
    }
   }
   cout<<arr[0]<<endl;
   cout<<index<<endl;
}
