#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int p1=max(a,b);
    int p2=max(b,c);
    int p3=max(p1,p2);
    cout<<p3<<" eh o maior"<<endl;

}
