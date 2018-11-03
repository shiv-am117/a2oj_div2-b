#include<bits/stdc++.h>
using namespace std;
int main(){
	int v,i,j,a,b,k,ans=0,one=0,x;
	cin>>v>>k;
	
vector<vector<int> >l(v);
vector<pair<int,int> >place;
for(i=0;i<v;i++) l[i].resize(v);
	for(i=0;i<k;i++){
		cin>>a>>b;
		l[a-1][b-1]=1;
		l[b-1][a-1]=1;
	}

	do{
	one=0;
	for(i=0;i<v;i++){
		if(count(l[i].begin(),l[i].end(),1)==1){
			one=1;
			x=distance(l[i].begin(),find(l[i].begin(),l[i].end(),1));
			place.push_back(make_pair(i,x));
		}
	}
	if(one==1){
		for(j=0;j<place.size();j++){
			l[place[j].first][place[j].second]=0;
			l[place[j].second][place[j].first]=0;
		}
		place.resize(0);
		ans++;	
	}
}while(one==1);
cout<<ans;
	
	
}
