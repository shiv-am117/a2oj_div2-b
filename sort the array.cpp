#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	for(i=0;i<n;i++) cin>>a[i];
	int flag=1,ans1=1,ans2=1;
	for(i=0;i<n-1;i++){
		if(a[i+1]<a[i]){
			b[i]=-1;
			flag=0;
		}
	}
	if(flag==1) {
		cout<<"yes"<<endl<<1<<" "<<1;
		return 0;
	}
	int ini=0;
	for(i=0;i<n;i++){
		if(b[i]==-1&&ini==0) {
		ans1=i;
		ini=1;
		}
		else if(b[i-1]==-1&&b[i]==0){
		ans2=i;
		
		break;}
		
	}
	
	for(i=0;i<=(ans2-ans1)/2;i++){
		swap(a[ans1+i],a[ans2-i]);
	}
	
	for(i=0;i<n-1;i++){
		if(a[i+1]<a[i]){
			flag=1;
		}
	}

if(flag==0) cout<<"yes"<<endl<<ans1+1<<" "<<ans2+1;
	else cout<<"no";
}
