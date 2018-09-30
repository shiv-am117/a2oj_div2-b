#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i,a,b,ans=0;
cin>>n;
for(i=0;i<n;i++){
	cin>>a;
	if(i==0){
		ans+=a+1;
	}
	else{
		ans+=2+abs(a-b);
	}
	b=a;
}
cout<<ans;
}
