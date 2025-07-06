//Problem Name: Next Alphabet
//Course Title: Competitive Programming Sessional
//Course Code: CCE-2310
//Course Teacher Name: Mirza Raquib
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin>>a;
    int b = a;
    if(b>=97 && b<122){
        a++;
        cout<<a;
    }else if(b==122){
        cout<<'a';
    }
}
