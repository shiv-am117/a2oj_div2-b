#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
	if(b.second==a.second) return b.first<a.first;
	return b.second<a.second;
}
int main(){
int n,i,b=1,sum=0;
cin>>n;
vector<pair<int,int> >c(n);
for(i=0;i<n;i++) cin>>c[i].first>>c[i].second;
sort(c.begin(),c.end(),cmp);
for(i=0;i<n;i++){
	sum+=c[i].first;
	b+=c[i].second-1;
	if(b==0) break;
}
cout<<sum;
}
