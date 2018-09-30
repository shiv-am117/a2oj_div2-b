#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s,t,i,c=0,p;
	cin>>n>>s>>t;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
	p=s;
	
		while(true){
			if(p==t) break;
		
			p=a[p-1];
				if(p==s) {
				cout<<-1;
				return 0;
			}
			c++;
		}
		cout<<c;
	
}
