#include<bits/stdc++.h>
using namespace std;

int main(){
	int au=0,i,k=0;
	string a,b;
	cin>>a>>b;
	int l1=a.length(),l2=b.length();
	for(i=0;i<l1;i++){
		if(b[k]==a[i]) k++;
	}
	if(k==l2){
		cout<<"automaton";
		return 0;
	}
	map<char,int>freq;
	for(i=0;i<l2;i++){
		freq[b[i]]++;
	}
	for(i=0;i<l1;i++){
		freq[a[i]]--;
	}
	map<char,int>::iterator it;
	for(it=freq.begin();it!=freq.end();it++){
		if(it->second>0) {
			cout<<"need tree";
			return 0;
		}
		if(it->second<0) au=1;
	}
	if(au==1) cout<<"both";
	else cout<<"array";
}
