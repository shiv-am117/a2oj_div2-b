#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j,max=0,ans=0,l,r;
cin>>n;
vector<int> a(n);
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++){max=1;l=1,r=1;
	j=1;
	while(l!=0||r!=0){
		if(l==1&&i-j>=0){
			if(a[i-j]<=a[i-j+1]) max++;
			else l=0;
		}
		else l=0;
		if(r==1&&i+j<n){
			if(a[i+j]<=a[i+j-1]) max++;
			else r=0;
		}
		else r=0;
		j++;
	}

	if(max>ans) ans=max;
	
}
cout<<ans;
}
