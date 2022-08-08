/*
https://www.beecrowd.com.br/judge/en/problems/view/1042
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    int a[3];
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];

        }
     for (int i = 0; i < n; ++i)
        {
            a[i]=arr[i];

        }
    sort(arr, arr + n);

    for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << endl;
        }
        cout<<endl;


     for (int i = 0; i < n; ++i)
        {
            cout << a[i] << endl;
        }
}
