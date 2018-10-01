#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,d,i,ans=0;
	cin>>n>>m>>d;
	int a=n*m;
	
	vector<int>g(a);
	for(i=0;i<a;i++){
		cin>>g[i];
		
	}
	sort(g.begin(),g.end());
	int med=a/2;
	int r=g[med];
	for(i=0;i<a;i++){
			if(abs(g[i]-r)%d!=0){
				cout<<-1;
				return 0;}
			ans+=abs(g[i]-r)/d;
		
	}
	cout<<ans;
}
