#include<bits/stdc++.h>
using namespace std;
void solve(string ip,string op)
{
	if(ip.length()==0)
		cout<<op;
	return ;
	string notpick=op;
	string pick=op+ip[0];
	string subpick=op;
	ip=ip.substr(1);
	solve(ip,notpick);
	solve(ip,pick);
}
int main(){
	 #ifndef ONLINE_JUDGE
     freopen("input1.txt","r",stdin);
     freopen("output1.txt","w",stdout);
     #endif
     string ip,op;
      cin>>ip;
      solve(ip,op);
     return 0;
}
