#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,i,temp;
	cin>>n>>m;
	if(m==0){
		cout<<"YES";
		return 0;
	}
	vector<long long> c(m);
	for(i=0;i<m;i++){
		cin>>c[i];
		
	}
	sort(c.begin(),c.end());
	
	if(c[0]==1||c[m-1]==n) {
	cout<<"NO";
	return 0;}
	for(i=0;i<m-2;i++){
		if(c[i]+1==c[i+1]&&c[i+1]+1==c[i+2]) {
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
