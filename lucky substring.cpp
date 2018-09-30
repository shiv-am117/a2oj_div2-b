#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int f=count(s.begin(),s.end(),'4');
int se=count(s.begin(),s.end(),'7');
if(se==0&&f==0) cout<<-1;
else if(se>f) cout<<7;
else cout<<4;
}
