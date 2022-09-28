#include<bits/stdc++.h>
using namespace  std;
int main(){
    int n,proc[10],bt[10],wt[10],tat[10],k,temp,i;
    float avg_tat=0,avg_wt=0;
    cout<<"Enter the num,ber of process"<<endl;
    cin>>n;
    cout<<"Enter the value of burst time"<<endl;
    for( i=0;i<=n-1;i++){
        cout<<"P:"<<i+1<<":";
        cin>>bt[i];
    }
   for(i=0;i<n-1;i++)
   {
    for( j=0;j<n-1;j++)
    {
        if(bt[i]>bt[i+1])
        {
            temp=bt[i];
            bt[i]=bt[k];
            b[k]=temp;
            temp=proc[i];
            proc[i]=proc[k];
            proc[k]=temp;
        }
    }
}
for(i=0;i<=n-1;i++){
    wt[i]=wt[i-1]+bt[i-1];
    tat[i]=tat[i-1]+bt[i-1];
    avg_wt=wt[i];
    avg_tat=tat[i];
}
cout<<"\n "
 return 0;

}



















// #include<bits/stdc++.h>
// using namespace  std;
// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("output1.txt","w",stdout);
//     #endif
//     int n,bt[10],at[10],tat[10],wt[10],i,j;
//  float avg_tat=0,avg_wt=0;
// cout<<"Enter the number of process"<<endl;
// cin>>n;
// cout<<"Enter the Burst time"<<endl;
// for(i=0;i<=n-1;i++){
//     cout<<"P"<<i+1<<":";
//     cin>>bt[i];
// }
// cout<<"Enter the Arrival time"<<endl;
// for( i=0;i<=n-1;i++){
//      cin>>at[i];
// }
// wt[0]=0;
// for( i=1;i<=n-1;i++){
//     wt[i]=0;
//     for( j=0;j<i;j++){
//         wt[i]+=bt[j];
//     }
// }
//  cout<<"\nProcess\tArrival_time\tBurst_Time\tWaiting_Time\tTurnaround_Time";
//  for( i=0;i<=n-1;i++){
//     tat[i]=bt[i]+wt[i];
//     avg_wt+=wt[i];
//     avg_tat+=tat[i];
//     cout<<"\np"<<i+1<<"\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
//  }
//  avg_wt/=i;
//  avg_tat/=i;
//  cout<<endl;
//  cout<<"average of waiting time:-"<<avg_wt;
//  cout<<endl;
//  cout<<"average of Turnaround_Time"<<avg_tat;
//  return 0;
// }