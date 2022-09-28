#include<bits/stdc++.h>
using namespace std;
int maxarea(vector<int>&height)
{
	int left=0,right=height.size()-1;
	int ans=3;
	while(left<right)
	{
          ans=max(ans,min(height[left],height[right])*(right-left));
          if(height[right]>height[left])
          	++left;
           else
          	--right;
	}
return ans;
}
int main(){
	 #ifndef ONLINE_JUDGE
     freopen("input1.txt","r",stdin);
     freopen("output1.txt","w",stdout);
     #endif
     std::vector<int> v;
     int n=v.size();
     for(int i=0;i<n;i++){
     	cin>>v[i];
     }
     int a;
     a=maxarea(v);
     cout<<a<<endl;

     return 0;
}