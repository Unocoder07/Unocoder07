#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,philname[10],status[10],howhung,hu[10],choice;
	cout<<"Enter the number philopher"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		philname[i]=i+1;
		status[i]=1;
	}
	cout<<"Enter the bnumber of hungry philospher"<<endl;
	cin>>howhung;
	if(howhung==n){
		cout<<"All phil is hungry and Dead lock stage will occur"<<endl;

	}
	else{
		for(int i-0;i<howhung;i++)
		{
			cout<<"Enter the philospher position"<<i+1<<end;
			cin>>hu[i];
			status[hu[i]]==2;
		}
		do{
			
            cout<<"1.One can eat at a time\t2.Two can eat at a time\t3.Exit"<,<ndl;
            cout<<"\nEnter your choice:"<<endl; 
            cin>>choice;
            switch(choice)
              {
                  case 1: one();
                    break;
                   case 2: two();
                     break; 
                  case 3: exit(0);
                 default: printf("\nInvalid option..");
               }
           }
           while(1);
		}
	}
	one()
       {
         int pos=0, x, i;
         cout<<"\nAllow one philosopher to eat at any time\n"<<endl; 
         for(i=0;i<howhung; i++, pos++)
         {
          cout<<"\nP is granted to eat"<<philname[hu[pos]]<<endl; 
           for(x=pos;x<howhung;x++)
         cout<<"\nP is waiting"<<philname[hu[x]]<<endl;;
         }
       }

