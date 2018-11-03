#include<bits/stdc++.h>
using namespace std;
int tobit(int x){
	int c=0;
	while(x){
		if(x%2==1) return pow(2,c);
		c++;
		x/=2;
	}
	
}
int main(){
	int sum,lim,ans=0,c=0,x,i,j;
	double y;
	cin>>sum>>lim;
	vector<int>out;
	int e=lim/2,o=e;
	if(lim%2!=0) {
	o++;lim--;}
	for(i=lim;i>0;i=i-2){
		
		if(ans+o>=sum) break;
		x=log2(i);
		y=log2(i);
		if(x==y) {
			
		ans+=i;
		
		out.push_back(i);
		c++;}
		else{
			ans+=tobit(i);
			c++;
			out.push_back(i);
		}
		
	}
	if(sum-ans>o){
		cout<<-1;
		return 0;
	}
	j=1;
	for(i=1;j<=sum-ans;i=i+2){
		out.push_back(i);
		c++;j++;
	}
	cout<<c<<endl;
	for(i=0;i<out.size();i++) cout<<out[i]<<" ";
	
	
}
