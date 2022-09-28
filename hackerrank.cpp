#include<iostream>
using namespace std;
class Node
{
	  public:
		int data;
		Node* next=NULL;
		
};
class linklist
{
	public:
		Node* head;
		linklist()
		{
			head=NULL;
		}
		void insert(int num)
		{
			Node* n=new Node();
			n->data=num;
			n->next=NULL;
			if(head==NULL)
			{
				head=n;
			}
			else
			{
				Node* temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=n;
			}
		}
		void disp()
		{    
			Node* temp=NULL; 
			temp=head;
			while(temp!=NULL)
			{
				cout<<"data="<<temp->data<<endl;
				temp=temp->next;
			}
		}
		// void daletebeg()
		// {    Node* temp;
	 //            // Node* temp=NULL;
		// 		temp=head;
		// 		head=head->next;
		// 		free(temp);
		
		
		// }

		void deletend(){
         Node* temp;
          temp=head;
         while((temp->next)->next!=NULL)
         {
         	    temp=temp->next;
         	    temp->next=NULL;
         	    free(temp->next);
         }
		
		}
			void show()
		{
			Node* temp=NULL; 
			temp=head;
			while(temp!=NULL)
			{
				cout<<"data="<<temp->data<<endl;
				temp=temp->next;
			}
		}

};

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("output.txt","w",stdout);
	#endif
	linklist* l=new linklist();
	l->insert(2);
	l->insert(3);
	l->insert(4);
	l->insert(5);
	l->disp();
	cout<<"after deletion"<<endl;
	l->deletend();
	l->show();
	return 0;
	
}