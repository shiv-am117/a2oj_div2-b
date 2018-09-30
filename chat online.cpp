#include<bits/stdc++.h>
using namespace std;
int main(){
int p,q,l,r,i,ans=0,j,m,n;
cin>>p>>q>>l>>r;
vector<pair<int,int> >z(p),x(q);
vector<int>c(r+1);
for(i=0;i<p;i++) {
	cin>>z[i].first>>z[i].second;
}
for(i=0;i<q;i++){
	cin>>x[i].first>>x[i].second;
}
for(i=0;i<q;i++){
	for(j=0;j<p;j++){
		if(x[i].first>z[j].second) continue;
		m=min(r,z[j].second-x[i].first);
		n=max(l,z[j].first-x[i].second);
		if(n>r) n=r;
		fill(c.begin()+n,c.begin()+m+1,1);
}
}

cout<<count(c.begin(),c.end(),1);
}
