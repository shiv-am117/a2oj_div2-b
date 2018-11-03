#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0) return b;
	if(b==0) return a;
	if(b>a) return gcd(a,b%a);
	else return gcd(a%b,b);
}
int main(){
double a,b,c,d,num,den;
cin>>a>>b>>c>>d;
if(a/b<c/d)
{
	num=b*c-a*d;
	den=b*c;
}
else if(a/b>c/d){
	num=a*d-b*c;
	den=a*d;
}
else {
	num=0;
	den=b;
}
int g=gcd(num,den);
num/=g,den/=g;
cout<<(int)num<<'/'<<(int)den;
}
