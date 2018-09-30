#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,j,ans=0;
cin>>n>>m;
vector<vector<char> >g(n);
for(i=0;i<n;i++){
	g[i].resize(m);
	for(j=0;j<m;j++){
		cin>>g[i][j];
	}
}
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		if(g[i][j]=='P'){
			if(i!=n-1&&g[i+1][j]=='W'){
				ans++;
				g[i+1][j]='.';
			}
			else if(i!=0&&g[i-1][j]=='W'){
				ans++;
				g[i-1][j]='.';
			}
			else if(j!=m-1&&g[i][j+1]=='W'){
				ans++;
				g[i][j+1]='.';
			}
			else if(j!=0&&g[i][j-1]=='W'){
				ans++;
				g[i][j-1]='.';
			}
		}
	}
}
cout<<ans;
}
