#include<bits/stdc++.h>
using namespace std;

int main(){
string a;
int n,i,ans=0,l;
cin>>a>>n;
l=a.length();
int c[26];
for(i=0;i<26;i++) cin>>c[i];
for(i=0;i<l;i++) ans+=(i+1)*c[a[i]-97];
int add=*max_element(c,c+26);

for(i=l+1;i<=l+n;i++) ans+=(i)*add;
cout<<ans;

}
