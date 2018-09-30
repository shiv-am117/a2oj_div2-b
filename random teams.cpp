#include<bits/stdc++.h>
using namespace std;
long long friends(int n){
	long long sum=0;
	for(int i=1;i<n;i++){
		sum+=i;
	}
	return sum;
}
int main(){
long long n,m;
	cin>>n>>m;
	if(m==1) {
		long long ans=friends(n);
		cout<<ans<<" "<<ans;
		return 0;
	}
	long long min=0,max=0;
	long long temp=n;
	long long div=temp/m;
	long long rem=temp%m;
	long long ans=friends(div);
	min=(m)*ans+rem*(div);
	temp=n-(m-1);
	temp-=div;
	for(int i=div;i<div+temp;i++) ans+=i;
	max=ans;
	cout<<min<<" "<<max;
}
