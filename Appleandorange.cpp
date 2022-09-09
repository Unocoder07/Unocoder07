#include<bits/stdc++.h>
using namespace  std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
     freopen("output2.txt","w",stdout);
     #endif


    int s,t,a,b,m,n,ap,apcnt = 0,ora,orcnt = 0;
    
    cin >> s >> t >> a >> b >> m >> n;
    
    for(int i = 0;i < m;i++)
 {
        cin >> ap;
        if(a+ap >= s && a+ap <= t)
        	apcnt++;
    }
    
    for(int i = 0;i < n;i++)
 {
        cin >> ora;
        if(b+ora >= s && b+ora <= t)
        	sborcnt++;
    }
    cout << apcnt <<endl<< orcnt << endl;
    return 0;
}