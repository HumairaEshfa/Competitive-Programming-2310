#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long int a,b,c,d,e;
    cin >> a >> b;
    c=floor((a*1.00)/b);
    d=ceil((a*1.00)/b);
    e=round((a*1.00)/b);
    cout<< "floor " << a << " / " << b << " = " << c << endl;
    cout<< "ceil " << a << " / " << b << " = " << d << endl;
    cout<< "round " << a << " / " << b << " = " << e << endl;
    return 0;
}