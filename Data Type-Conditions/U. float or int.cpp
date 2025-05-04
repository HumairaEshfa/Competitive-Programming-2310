#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long double n;
    cin>>n;
    long long a=n;
    if(a==n)
        cout << "int " << a << endl;
    else
        cout << "float " << a << " " << fixed << setprecision(3) << n - a << endl;
}