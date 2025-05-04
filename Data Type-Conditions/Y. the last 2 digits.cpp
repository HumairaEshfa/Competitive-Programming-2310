#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << setw(2) << setfill('0') << a*b % 100 *c % 100 *d % 100 << endl;
}