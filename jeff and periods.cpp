#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,count=0;
	cin>>n;
	vector<int>a(n);
	for(i=0;i<n;i++) cin>>a[i];
	map<int,int>c;
	map<int,int>d;
	for(i=0;i<n;i++){
		if(c[a[i]]==0){
			c[a[i]]=i+1;
			d[a[i]]=0;
		}
		else if(d[a[i]]==0){
			d[a[i]]=i+1-c[a[i]];
			c[a[i]]=i+1;
		}
		else if(d[a[i]]!=-1){
			if(i+1-c[a[i]]==d[a[i]]){
				c[a[i]]=i+1;
			}
			else {
			d[a[i]]=-1;
			count++;}
		}
	}
	cout<<d.size()-count<<endl;
	map<int,int>::iterator it;
	for(it=d.begin();it!=d.end();it++){
		if(it->second!=-1)
		cout<<it->first<<" "<<it->second<<endl;
	}
}
