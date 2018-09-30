#include<bits/stdc++.h>
using namespace std;
int main(){
int d,totime,i;
cin>>d>>totime;;
vector<int>min(d),max(d);
for(i=0;i<d;i++) cin>>min[i]>>max[i];
int mini=accumulate(min.begin(),min.end(),0);
if(mini>totime||accumulate(max.begin(),max.end(),0)<totime) {
	cout<<"NO";
	return 0;
}
int diff=totime-mini;
for(i=0;i<d;i++){
	if(max[i]-min[i]<=diff) {
		diff-=max[i]-min[i];
	min[i]=max[i];
	}
	else {
	min[i]=min[i]+diff;
	break;}
}
cout<<"YES"<<endl;
for(i=0;i<d;i++) cout<<min[i]<<" ";
}
