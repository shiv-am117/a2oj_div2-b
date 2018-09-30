#include<bits/stdc++.h>
using namespace std;

int main(){
	long long mod=pow(10,9)+7;
	long long a,b,n,i;
	cin>>a>>b>>n;
	long long x;
	n=n%6;
	switch(n){
		case 0:
		x=a-b;
		break;
		case 1:
		x=a;
		break;
		case 2:
		x=b;
		break;
		case 3:
		x=b-a;
		break;
		case 4:
		x=-a;
		break;
		case 5:
		x=-b;
		break;
	}
	if(x<0){
		if(-x%mod==0) cout<<0;
		else{
		
		int div=-x/mod+1;
		cout<<div*mod+x;}
	}
	else cout<<x%mod;
}

