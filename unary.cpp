#include<bits/stdc++.h>
using namespace std;
int main(){
map<char,int>m;
m['<']=9;
m['>']=8;
m['.']=12;
m[',']=13;
m['+']=10;
m['-']=11;
m['[']=14;
m[']']=15;
string s;
cin>>s;
long long ans=0,mod=pow(10,6)+3,x=1;
int i,j=0;
for(i=s.length()-1,j=0;i>=0;i--,j++){
	ans+=x*m[s[i]];
	ans%=mod;
	x=x*16;
	x=x%mod;
}
cout<<ans%mod;
}
