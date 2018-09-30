#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++) cin>>a[i];
int min=a[0],c=0,f=0;
for(i=1;i<n;i++){
	if(a[i]<a[i-1]&&f==0){
		if(a[i]<=min) {
		f=1;
		c++;}
		else break;
	}
	else if(f==1){
		if(a[i]>=a[i-1]&&a[i]<=min) c++;
		else break;
	}
}
if(i!=n) cout<<-1;
else cout<<c;
}
