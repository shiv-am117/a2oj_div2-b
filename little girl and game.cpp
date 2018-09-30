#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int count=0,i,l=s.length();
map<char,int>temp;
for(i=0;i<l;i++){
	temp[s[i]]++;
}
map<char,int>::iterator it;
for(it=temp.begin();it!=temp.end();it++){
	if(it->second%2!=0) count++;
}
if(count==0||count%2!=0) cout<<"First";
else cout<<"Second";
}
