#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,j;
cin>>n>>m;
vector<int>a(n),b(m);
for(i=0;i<n;i++){
	cin>>a[i];
}
for(i=0;i<m;i++) cin>>b[i];
i=j=0;
while(i<n&&j<m){
	if(b[j]>=a[i]){
		i++;
	}
	j++;
}
cout<<n-i;
}
