#include <bits/stdc++.h>
using namespace std;
void filter(char arr[],int num){
  int j=0;
  while(num>0){
    int last_bit=1 & num;
    if(last_bit)
  {
    cout<<arr[j];
  }
  j++;
num=num>>1;
}
cout<<endl;

 }
void printallsubsequenses(char arr[])
{
  int n=strlen(arr);
  for(int i=0;i<(1<<n);i++){
    filter(arr,i);
}
return ;
}
int main() {
      #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
     freopen("output1.txt","w",stdout);
     #endif
    vector<string>
    cin>>arr;
    printallsubsequenses(arr);
    return 0;
  }


