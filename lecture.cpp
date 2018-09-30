#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i;
	cin>>n>>k;
	map<string,string> m1,m2;
	string s1,s2;
	for(i=0;i<k;i++){
		cin>>s1>>s2;
		if(s2.length()<s1.length()){
			m1[s1]=s2;
			m2[s2]="1";
		}
		else{
			m1[s2]=s1;
			m2[s1]="1";
		}
	}
	
	vector<string> s3(n);
	for(i=0;i<n;i++) cin>>s3[i];
	for(i=0;i<n;i++){
		if(m2[s3[i]]=="1") cout<<s3[i]<<" ";
		else cout<<m1[s3[i]]<<" ";
	}
	
}
