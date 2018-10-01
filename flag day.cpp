#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,j,e,k,l;
cin>>n>>m;
map<int,int>d;
vector<vector<int> >a(m);
for(i=0;i<m;i++){
	a[i].resize(3);
	for(j=0;j<3;j++){
		cin>>a[i][j];
	}
}
d[a[0][0]]=1;d[a[0][1]]=2;d[a[0][2]]=3;
for(i=1;i<m;i++){e=0;
	for(j=0;j<3;j++){
		if(d[a[i][j]]!=0) {
			e=d[a[i][j]];
		break;}
		
	}
	l=0;
	for(k=1;k<=3;k++){
		if(k==e) continue;
		if(j==l) l++;
		d[a[i][l]]=k;
		l++;
		
	}
	
}
map<int,int>::iterator it;
for(it=d.begin();it!=d.end();it++)
cout<<it->second<<" ";
}
