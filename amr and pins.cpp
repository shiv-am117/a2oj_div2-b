#include<bits/stdc++.h>
using namespace std;

int main(){
	long long r,x1,y1,x2,y2;
	cin>>r>>x1>>y1>>x2>>y2;
	double d=pow(x1-x2,2)+pow(y1-y2,2);
	d=sqrt(d);
	cout<<ceil(d/(2*r));
}
