#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i,b=1;
	cin>>n;
	for(i=1;i<=n;i++){
		if((pow(b,2)+4*n)==pow(2*i+b,2)){
			cout<<i;
			return 0;
		}
	
	}
	cout<<-1;
	
}
