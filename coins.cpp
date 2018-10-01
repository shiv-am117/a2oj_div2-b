#include<bits/stdc++.h>
using namespace std;
void count(int n){
	if(n==1){
		return;
	}
	int i,flag=0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) {
			flag=1;
		cout<<n/i<<" ";
		break;}
	}
	if(flag==0){
		cout<<1;
		return;
	}
	n=n/i;
	 return count(n);
}
int main(){
int n;
cin>>n;
cout<<n<<" ";
count(n);
}
