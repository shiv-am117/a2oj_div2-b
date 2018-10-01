#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,j;
cin>>m>>n;
vector<vector<int> >a(m),b(m);
for(i=0;i<m;i++){
	a[i].resize(n);
	b[i].resize(n);
	for(j=0;j<n;j++){
		cin>>a[i][j];
	}
}
b[0][0]=a[0][0];
for(i=1;i<m;i++) b[i][0]=b[i-1][0]+a[i][0];
for(j=1;j<n;j++){
	for(i=0;i<m;i++){
		if(i==0){
			b[i][j]=b[i][j-1]+a[i][j];
		}
		else{
		
		b[i][j]=max(b[i][j-1],b[i-1][j])+a[i][j];}
	}
	
}
for(i=0;i<m;i++){
	cout<<b[i][n-1]<<" ";
}
}
