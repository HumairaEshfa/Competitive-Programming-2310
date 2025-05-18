//Problem Name : Palindrome
//Course Title : Competitive Programming Sessional
//Course Code  : CCE-2310
//Course Teacher Name: Mirza Raquib
//Date : 19.05.25

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=s.size();
    //char b[a];
    //int counter=0;
    string ss="";
    for(int i=a-1;i>=0;i--)
    {
        //b[counter]=s[i];
        ss+=s[i];
        //counter++;
    }
    //cout<<s<<" "<<ss<<endl;
    bool flag=false;
    string ans="";
    for(int j=0;j<ss.size();j++)
    {
        if(ss[j]!='0') flag=true;
        if(flag==true) ans+=ss[j];
        ///else if()

    }
    cout<<ans<<endl;
    if(s!=ss) cout<<"NO"<<endl;
    else
    {
        if(ss[0]=='0') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    //if(ss[0]=='0') cout<<"NO"<<endl;
    //else if(s==ss) cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
}