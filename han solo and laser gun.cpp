#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	double x,y,x1,y1,s;
	cin>>n>>x>>y;
	map<double,int>slope;
	for(i=0;i<n;i++){
		cin>>x1>>y1;
		if(x==x1) slope[100]++;
		else{
			s=(y-y1)/(x-x1);
			
			slope[s]++;
		}
	}
	cout<<slope.size();
}
