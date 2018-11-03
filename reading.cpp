#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
int n,k,i;
cin>>n>>k;
vector<pair<int,int> >l(n);
for(i=0;i<n;i++){
	cin>>l[i].first;
	l[i].second=i+1;
}
sort(l.begin(),l.end());
cout<<l[n-k].first<<endl;
for(i=n-k;i<n;i++){
	cout<<l[i].second<<" ";
}
}
