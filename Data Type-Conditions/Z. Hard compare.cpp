#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long a,b,c,d;
    cin>> a >> b >> c >> d;
    long double e1 = b*log(a);
    long double e2 = d*log(c);
    if(e1 > e2) 
        cout<<"YES";
    else 
        cout<<"NO";
}
