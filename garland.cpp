#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b;
cin>>a>>b;
map<char,int>m1,m2;
int ans=0,i,l1=a.length(),l2=b.length();
for(i=0;i<l1;i++){
	m1[a[i]]++;
}
for(i=0;i<l2;i++){
	m2[b[i]]++;
}
map<char,int>::iterator it;
for(it=m2.begin();it!=m2.end();it++){
	if(m1[it->first]==0){
		cout<<-1;
		return 0;
	}
	ans+=min(it->second,m1[it->first]);
}

 cout<<ans;
}
