#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,c;
cin>>n>>m;
vector<pair<int,int> >r(m);
for(i=0;i<m;i++) cin>>r[i].first>>r[i].second;
vector<int>a(n);
for(i=0;i<m;i++){
	a[r[i].first-1]=1;
	a[r[i].second-1]=1;
}
for(i=0;i<n;i++){
	if(a[i]==0){
		c=i+1;
		break;
	}
}
	cout<<n-1<<endl;
for(i=1;i<=n;i++){

	if(i!=c)
	cout<<i<<" "<<c<<endl;
}
}
