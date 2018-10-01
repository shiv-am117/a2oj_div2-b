#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,i,j,min=INT_MAX,sum,ans;
cin>>n>>k;
vector<int>a(n);
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<k;i++){sum=0;
	for(j=i;j<n;j=j+k){
		sum+=a[j];
	}
	if(sum<min){
		min=sum;
		ans=i+1;
	}
}
cout<<ans;
}
