#include<bits/stdc++.h>
using namespace std;

int main(){
	string n;
	cin>>n;
	long long i,j;
	int f=0;
	long long l=n.length();
	char ch=n[l-1];
	for(i=0;i<l-1;i++){
		if(n[i]%2==0){
			if(n[i]<ch){	
			swap(n[l-1],n[i]);
			cout<<n;
			return 0;}
			else{
				j=i;
			}
			f=1;
		}
		
	}
	if(f==0) cout<<-1;
	else {
		swap(n[j],n[l-1]);
		cout<<n;
	}
	 
}
