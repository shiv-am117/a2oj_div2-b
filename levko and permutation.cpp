#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k,i,f,l;
cin>>n>>k;
if(k>=n){
	cout<<-1;
}
else{
	if(k%2==n%2) {
		f=n,l=1;
	}
	else{
		f=1;
		l=n;
	}
	for(i=1;i<=k+1;i++){
		if(i==1) cout<<f<<" ";
		else{
			cout<<i<<" ";
		}
	}
	for(i=k+2;i<=n;i=i+2){
		if(i==n) cout<<l;
		else{
			cout<<i+1<<" "<<i<<" ";
		}
	}
}
}
