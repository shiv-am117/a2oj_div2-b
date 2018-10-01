#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
cin>>n;
string s="abcd";
int d=n/4;
int m=n%4;
for(i=0;i<d;i++) cout<<s;
cout<<s.substr(0,m);
}
