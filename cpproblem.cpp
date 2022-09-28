#include<bits/stdc++.h>
using namespace  std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
         next = NULL;
    }
};
class Linkedlist
{
private:
    node *header;
    node *tail;
    int size;
 public:
    Linkedlist()
    {
        header=NULL;
        tail=NULL;
        size=0;
    }
    // getsize(){
    //     return 0;
    // }
};
void append(int data)
{
    node *n = new node(data);

    if(header==NULL)
    {
        header=n;
        tail=n;
    }
    else
        tail->next=n;
        tail=n;
 };
void display()
  {
    node *temp = header;
    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    };
 int main()
{  
    #ifndef ONLINE_JUDGE
    // freopen("input1.txt","r",stdin);
     freopen("output1.txt","w",stdout);
     #endif
 Linkedlist list;
 list.append(2);
 list.append(5);
 list.append(7);
 list.append(9);
 list.append(1);
 list.display();

    return 0;
}
};
  #include<bits/stdc++.h>
    using namespace  std;
class Solution {
public:
    int reverse(int x)
    {
        int r,rev;
        while(x>0){
            r=x%10;
            rev=(rev+10)+r;
            x=x/10;
           }
        return x;
    }
};
    int main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
         freopen("output2.txt","w",stdout);
         #endif
    
    int n;
    cin>>n;
    reverse(n);
    cout<<x<<endl;
}