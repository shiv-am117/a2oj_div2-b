#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
int i,c=0,b=0,pos;
cin>>s;
string::iterator it;
it=find(s.begin(),s.end(),'.');
if(it!=s.end()){
	pos=distance(s.begin(),it);
	if(pos+2<s.length()) t.push_back(s[pos+2]); else t.push_back('0');
	if(pos+1<s.length()) t.push_back(s[pos+1]); else t.push_back('0');
	t.push_back(s[pos]);
}
else {
pos=s.length();
t+="00.";
}
for(i=pos-1;i>=0;i--){
	if(s[i]=='-'){
		b=1;
		break;
	}
	if(c==3){
		c=0;
		t.push_back(',');
	}
	t.push_back(s[i]);
	c++;
}
if(b==1) cout<<'(';
reverse(t.begin(),t.end());
cout<<"$"<<t;
if(b==1) cout<<')';
}
