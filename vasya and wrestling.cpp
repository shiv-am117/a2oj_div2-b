#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,temp,j=0,k=0,sum1=0,sum2=0;
	cin>>n;
	vector<long long>a(n),b(n);
	for(i=0;i<n;i++){
		cin>>temp;
		if(temp<0) {
			sum2-=temp;
			b[k++]=-temp;
		}
		else{
			sum1+=temp;
			a[j++]=temp;
		}
	}
	if(sum1>sum2) cout<<"first";
	else if(sum2>sum1) cout<<"second";
	else{
		for(i=0;i<max(j,k);i++){
			if(a[i]>b[i]) {
			cout<<"first";
			return 0;}
			else if(a[i]<b[i]){
			cout<<"second";
			return 0;}
		}
		if(temp<0) cout<<"second";
		else cout<<"first";
	}
}
