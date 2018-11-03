#include<bits/stdc++.h>
using namespace std;

int main(){
int i,d,n,a,ans=0;
cin>>d>>n;
for(i=0;i<n-1;i++){
	cin>>a;
	ans+=d-a;
}
cout<<ans;
}
