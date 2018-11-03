#include<bits/stdc++.h>
using namespace std;
bool taxi(string s){
		int i;
	char prev=s[0];
	for(i=1;i<s.length();i++){
	
		if(s[i]!=prev) return false;
		prev=s[i];
			if((i+2)%3==0) i++;
	}
	return true;
}
bool pizza(string s){
	int i;
	char prev=s[0];
	for(i=1;i<s.length();i++){
	
		if(s[i]>=prev) return false;
		prev=s[i];
			if((i+2)%3==0) i++;
	}
	return true;
}
int main(){
int n,i,j=0,cont;
cin>>n;
int n1=n;
string names[n],in;
vector<int>p(n),t(n),g(n);
while(n1--){
	cin>>cont>>names[j];
	for(i=0;i<cont;i++){
		cin>>in;
		if(taxi(in)) t[j]++;
		else if(pizza(in)) p[j]++;
		else g[j]++;
	}
	
	j++;
}
int maxp=*max_element(p.begin(),p.end()),maxt=*max_element(t.begin(),t.end()),maxg=*max_element(g.begin(),g.end());
cout<<"If you want to call a taxi, you should call: ";
string s="";

for(i=0;i<n;i++){
	if(t[i]==maxt) {
	s+=names[i]+", ";
	
	}
}
s=s.substr(0,s.length()-2);s+='.';
cout<<s<<endl;
cout<<"If you want to order a pizza, you should call: ";
s="";

for(i=0;i<n;i++){
	if(p[i]==maxp) {
	s+=names[i]+", ";
	
	}
}
s=s.substr(0,s.length()-2);s+='.';
cout<<s<<endl;
cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
s="";

for(i=0;i<n;i++){
	if(g[i]==maxg) {
	s+=names[i]+", ";
	
	}
}
s=s.substr(0,s.length()-2);s+='.';
cout<<s<<endl;
}
