#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,l,i;
	cin>>n>>l;
	vector<long long> lant(n);
	for(i=0;i<n;i++) cin>>lant[i];
	sort(lant.begin(),lant.end());
	
long long ans1=0,ans2=0,maxi=0;
	if(lant[0]!=0) ans1=lant[0];
	if(lant[n-1]!=l) ans2=l-lant[n-1];
	
	for(i=0;i<n-1;i++){
		if(lant[i+1]-lant[i]>maxi) maxi=lant[i+1]-lant[i];
	}
	
	int flag=0;
	if(maxi%2==0)
	flag=1;
	maxi=maxi/2;
	
	long long ans=max(max(ans1,ans2),maxi);
	
	if(ans==maxi&&flag==0) cout<<ans<<".5";
	else cout<<ans;
}
