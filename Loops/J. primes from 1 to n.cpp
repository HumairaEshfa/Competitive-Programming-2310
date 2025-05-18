//Problem Name : Primes from 1 to n
//Course Title : Competitive Programming Sessional
//Course Code  : CCE-2310
//Course Teacher Name: Mirza Raquib
//Date : 19.05.25

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        count = 0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            cout<<i<<" ";
        }
    }
}