#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i;
	cin>>n>>k;
	n=n*2,k=k*2;
	for(i=1;i<=k;i=i+2){
		cout<<i+1<<" "<<i<<" ";
	}
	for(;i<=n;i=i+2){
		cout<<i<<" "<<i+1<<" ";
	}
}
