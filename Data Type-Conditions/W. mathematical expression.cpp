#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long a,b,c,d;
    char e,f;
    cin >> a >> e >> b >> f >> c;
    if(e=='+')  d=a+b;
    else if(e=='-') d=a-b;
    else if(e=='*') d=a*b;
    
    if(d==c)
        cout << "Yes" << endl;
    else
        cout << d << endl;
}