#include<bits/stdc++.h>
using namespace  std;
class Linked_list{
	struct  Node
	{
		int data;
		Node *next;
		Node(int d)
		{
			data=d;
			next=NULL;
		}
		
	};
	Node *head;
public:
 Linked_list(){
      head=NULL;   
      }
 void insertAtkposition(int k,int data)
 {
           Node *temp=new Node(data);
           if(k<0)
           {
           	cout<<"invalid position"<<endl;
           }
           if(empty())
            {
            	cout<<" list is empty"<<endl;
            }
         if(k==0)
         {
         	temp->next=head;
         	head=temp;
         }
         else{
                Node *current= head;
                while(current->next!=NULL&&--k)
                {
                    current=current->next;
                }
                if(k==0)
                {
                	temp->next=current->next;
                	current->next=temp;
                }
                else
                {
                	cout<<"position does not exits "<<endl;
                }
           }
};
  void print(){
    if(head==NULL)
      cout<<"list is Empty";
    else{
          Node *current =head;
          while(current!=NULL){
             cout<<current->data;
             current=current->next;
             cout<<"->";
          }
          cout<<"NULL"<<endl;
    }
  };
  bool empty(){
   return head==NULL;
  }

};
int main()
{
    #ifndef ONLINE_JUDGE
    // freopen("input1.txt","r",stdin);
     freopen("output2.txt","w",stdout);
     #endif
     Linked_list ll=Linked_list();
     ll.insertAtkposition(0,23);
}