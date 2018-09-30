#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,suma=0,sumg=0;
cin>>n;
string s="";
vector<int>a(n),g(n);
for(i=0;i<n;i++) cin>>a[i]>>g[i];
for(i=0;i<n;i++){
	if(suma+a[i]-sumg<=500){
		suma+=a[i];
		s+='A';
	}
	else {
		sumg+=g[i];
		s+='G';
	}
}if(abs(sumg-suma)>500) cout<<-1;
else cout<<s;
}
