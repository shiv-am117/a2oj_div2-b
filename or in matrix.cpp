#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,k;
	cin>>n>>m;
	vector<vector<int> >a(n),b(n),c(n);
	for(i=0;i<n;i++){
		a[i].resize(m);
		b[i].resize(m);
		c[i].resize(m);
		fill(b[i].begin(),b[i].end(),1);
		for(j=0;j<m;j++)
		cin>>a[i][j];
		
	}
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		if(a[i][j]==0){
			fill(b[i].begin(),b[i].end(),0);
			for(k=0;k<n;k++) b[k][j]=0;
		}
	}
}
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		if(b[i][j]==1){
			fill(c[i].begin(),c[i].end(),1);
			for(k=0;k<n;k++) c[k][j]=1;
		}
	}
}
if(a!=c) cout<<"NO";
else {
	cout<<"YES"<<endl;
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		cout<<b[i][j]<<" ";
	}cout<<endl;
}
}
}
