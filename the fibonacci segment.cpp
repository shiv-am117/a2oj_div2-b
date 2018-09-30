#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,max=0,ans=0;
cin>>n;
if(n==1){
	cout<<1;
	return 0;
}
vector<int>a(n);
for(i=0;i<n;i++) cin>>a[i];
for(i=2;i<n;i++){
	if(a[i]==a[i-1]+a[i-2]) max++;

	else{
		if(max>ans) ans=max;
		max=0;
	}
}
if(max>ans) ans=max;
cout<<ans+2;
}
