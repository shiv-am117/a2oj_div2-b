#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,i;
	cin>>n>>m;
	long long task[m];
	for(i=0;i<m;i++){
		cin>>task[i];
	}
	long long pos=1,ans=0;
	for(i=0;i<m;i++){
		if(task[i]<pos) {
			ans+=n+task[i]-pos;
			pos=task[i];
		}
		else{
			ans+=task[i]-pos;
			pos=task[i];
		}
	}
	cout<<ans;
}
