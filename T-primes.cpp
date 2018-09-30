#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,i,p;
	cin>>t;
	long long n=pow(10,6);
	vector<bool>prime(n,true);
	prime[0]=false;
	  for ( p=2; p*p<=n; p++) 
    { 
        
        if (prime[p-1] == true) 
        { 
           
            for ( i=p*2; i<=n; i += p) 
                prime[i-1] = false; 
        } 
    }
	for(i=0;i<t;i++){
		long long n;
		cin>>n;
	
		
		long long y=sqrt(n);
		
		if(y*y==n){
			if(prime[y-1]) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
