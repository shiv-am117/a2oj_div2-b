#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3][3],i,j,sum1=0,sum2=0,sum3=0,a1,b,c;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
			if(i==0) sum1+=a[i][j];
			if(i==1) sum2+=a[i][j];
			if(i==2) sum3+=a[i][j];
		}
	}
	a1=sum2-sum1+sum3;
	a1=a1/2;
	b=sum3-a1;
	c=sum2-a1;
	a[0][0]=a1;a[1][1]=b;a[2][2]=c;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}
	}
	

