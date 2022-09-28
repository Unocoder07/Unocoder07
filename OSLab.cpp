#include<bits/stdc++.h>
using namespace std;
int main(){
		#ifndef ONLINE_JUDGE
	    freopen("output1.txt","w",stdout);
	     #endif
	int buffer[10],bufsize,produce,consume;
	int choice,in=0,out=0;
	bufsize=10;
	while(choice!=3){
		cout<<"1. produce   "<<"2.consume    "<<"3.exit"<<endl;
		cout<<"Enter your choice";
		cin>>choice;
		switch(choice){
			 case 1:if((in+1)%bufsize==out){

				cout<<"buffer is full;"<<endl;
			}
			else{
				cout<<"Enter a number"<<endl;
				cin>>produce;
				buffer[in]=produce;
				in=(in+1)%bufsize;
			}
			break;
			case 2:
			if(in==out){
				cout<<"buffer is Empty"<<endl;

			}else{
				consume=buffer[out];
				cout<<"cunsumed value is :"<<consume<<endl;
				out=(out+1)%bufsize;

			}
			break;

		}
	}
}

// #include<bits/stdc++.h>
// using namespace  std;
// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("output1.txt","w",stdout);
// 	#endif
// 	int n,bt[10],at[10],tat[10],wt[10],i,j;
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
// 	wt[i]=0;
// 	for( j=0;j<i;j++){
// 		wt[i]+=bt[j];
// 	}
// }
//  cout<<"\nProcess\tArrival_time\tBurst_Time\tWaiting_Time\tTurnaround_Time";
//  for( i=0;i<=n-1;i++){
//  	tat[i]=bt[i]+wt[i];
//  	avg_wt+=wt[i];
//  	avg_tat+=tat[i];
//  	cout<<"\np"<<i+1<<"\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
//  }
//  avg_wt/=i;
//  avg_tat/=i;
//  cout<<endl;
//  cout<<"average of waiting time:-"<<avg_wt;
//  cout<<endl;
//  cout<<"average of Turnaround_Time"<<avg_tat;
//  return 0;
// }