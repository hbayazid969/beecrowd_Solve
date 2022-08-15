//https://www.beecrowd.com.br/judge/en/problems/view/1117

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    int c=0;
    double sum=0;
    for(int i=0; i<100; i++)
    {
        cin>>n;
        if(n>=0 && n<=10)
        {
            c++;
            sum+=n;

        }
        else
        {
            cout<<"nota invalida"<<endl;
        }
        if(c==2)
        {
            break;

        }

    }
    cout<<fixed<<setprecision(2)<<"media = "<<sum/2<<endl;
}
