#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
double ans=0.0;
cin>>n;
vector<int>r(n);
for(i=0;i<n;i++) cin>>r[i];
sort(r.begin(),r.end());
if(n%2==0) i=1;
else {
	i=2;
	ans+=r[0]*r[0];	
}
for(;i<n;i=i+2){
	ans+=pow(r[i],2)-pow(r[i-1],2);
}
ans=3.1415926536*ans;
cout<<ans;
}
