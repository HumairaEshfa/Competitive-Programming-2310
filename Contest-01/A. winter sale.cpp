#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long double x,p;
    cin>>x>>p;
    long double t=((p*100)/(100.0-x));
    cout<<fixed<<setprecision(2)<<t<<endl;
}