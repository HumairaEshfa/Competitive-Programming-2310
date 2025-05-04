#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long a,b,k;
    cin>>a>>b>>k;
    long long c=(a%k==0);
    long long d=(b%k==0);
    if(c&&d) 
        cout<<"Both"<<endl;
    else if(c) 
        cout<<"Memo"<<endl;
    else if(d)
        cout<<"Momo"<<endl;
    else 
        cout<<"No One"<<endl;
}