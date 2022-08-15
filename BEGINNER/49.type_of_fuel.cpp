//https://www.beecrowd.com.br/judge/en/problems/view/1134

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t=100;
    int a=0,b=0,c=0,d=0;
    while(t){
        cin>>n;
        if(n==1){
            a++;
        }
        else if(n==2){
            b++;
        }
        else if(n==3){
            c++;
        }
        else if(n>3 && n!=4){
            d++;
        }
        else if(n==4){
            break;
        }
        t--;
    }

    if(d>0){
        cout<<"MUITO OBRIGADO"<<endl;
    }
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<b<<endl;
    cout<<"Diesel: "<<c<<endl;


}
