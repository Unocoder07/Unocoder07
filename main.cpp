#include<iostream>
using namespace std;
class Node{
public:
	  int data;
	  node* next;
	   node(int val){
	   	int data ;
	   	next=NULL:
	   }
	};
void insertatTail(node* &head,int val){
	node* n=new node(val);
	node* temp=head;
	if(head==NULL){
		head=n;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	 node* head=NULL:
	 insertatTail(head,10);
	 insertatTail(head,10);
	 insertatTail(head,10);
	 display(head);
	 return 0;
}

#include<iostream>
using namespace std;
int man()
{
int a=1;
int b=2;
int c=7;
int sum = a+b+c;
cout<<sum;
}