#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;

vector<pair<int,int> >team(n);
for(i=0;i<n;i++){
	cin>>team[i].first>>team[i].second;
}
map<int,int>h,a;
for(i=0;i<n;i++){
	h[team[i].first-1]++;
	a[team[i].second-1]++;
}
for(i=0;i<n;i++){
	cout<<h[team[i].second-1]+n-1<<" "<<n-1-h[team[i].second-1]<<endl;

}
}
