//Problem Name: Hard Compare
//Course Title: Competitive Programming Sessional
//Course Code: CCE-2310
//Course Teacher Name: Mirza Raquib
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b*log(a)>d*log(c))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
