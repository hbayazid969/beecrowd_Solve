//https://www.beecrowd.com.br/judge/en/problems/view/1180

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int l = sizeof(arr) / sizeof(arr[0]);

    int min=INT_MAX;
    int index = -1;

    for(int i=0;i<l;i++)
    {
        if(arr[i]<min)
        {

            min = arr[i];
            index = i;
        }
    }
    cout <<"Menor valor: "<< min<<endl;
    cout<<"Posicao: "<<index<<endl;
    return 0;
}
