#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,i,j,l;
cin>>n>>k;
vector<int>p(n);
for(i=0;i<n;i++) cin>>p[i];
int max=*max_element(p.begin(),p.end());
int min=*min_element(p.begin(),p.end());
if(k+min<max){
	cout<<"NO";
	return 0;
}
cout<<"YES"<<endl;
for(i=0;i<n;i++){
	l=1;
	for(j=1;j<=p[i];j++,l++){
		if(l>k) l=1;
		cout<<l<<" ";
	}cout<<endl;
}

}
