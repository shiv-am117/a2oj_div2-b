#include<bits/stdc++.h>
using namespace std;
int main(){
	int v,i,j;
	cin>>v;
	vector<int>c(9);
	for(i=0;i<9;i++) cin>>c[i];
	map<int,int>l;
	for(i=0;i<9;i++){
		l[c[i]]=i+1;
	}
	int min=*min_element(c.begin(),c.end());
	int div=v/min,rem=v%min;
	if(div==0){
		cout<<-1;
		return 0;
	}
	string s="";
	
	for(i=0;i<div;i++) s+=l[min]+'0';
	if(rem==0) {
		cout<<s;
		return 0;
	}
	for(i=0;i<div;i++){
		for(j=8;j>=0;j--){
			if(rem+min>=c[j]) {
			s[i]=(char)(j+1+'0');
			rem=rem-c[j]+min;
			break;}
		}
		if(j<0) break;
	}
	cout<<s;
}
