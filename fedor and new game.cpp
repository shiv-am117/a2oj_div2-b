#include<bits/stdc++.h>
using namespace std;
vector<int> tobinary(int x,int n){
	vector<int> bin(n);
	int i=n-1,j;
	while(x){
		j=x%2;
		bin[i]=j;
		x=x/2;
		i--;
	}
	return bin;
}
int main(){
int n,m,k;
cin>>n>>m>>k;
vector<vector<int> >player(m+1);
for(int i=0;i<m+1;i++){

int a;
cin>>a;
player[i]=tobinary(a,n);
}
int diff,i,j,ans=0;
for(i=0;i<m;i++){
	diff=0;
	for(j=0;j<n;j++){
		if((player[m][j]!=player[i][j])) diff++;
	}
	if(diff<=k) ans++;
}
cout<<ans;
}
