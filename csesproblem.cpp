#include<iostream>
using namespace std;
struct node {
   int data;
   struct node *left;
   struct node *right;
};
struct node *createNode(int val) {
   struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->data = val;
   temp->left = temp->right = NULL;
   return temp;
}
void inorder(struct node *root)
 {
   if (root != NULL) 
   {
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
   }
}
struct node* insertNode(struct node* node, int val) {
   if (node == NULL) return createNode(val);
   if (val < node->data)
   node->left = insertNode(node->left, val);
   else if (val > node->data)
   node->right = insertNode(node->right, val);
   return node;
}
int main() { 
    #ifndef ONLINE_JUDGE
    freopen("output.txt","w",stdout);
    #endif
   struct node *root = NULL;
   root = insertNode(root, 4);
   insertNode(root, 5);
   insertNode(root, 2);
   insertNode(root, 9);
   insertNode(root, 1);
   insertNode(root, 3);
   cout<<"In-Order traversal of the Binary Search Tree is: ";
   inorder(root);
   return 0;
}
// #include <iostream>
// using namespace std;
//     struct node{
//         int data;
//          node* left;
//          node* right;
//     };
//      struct node* newnode(int data){
//         // node* temp =new node();
//         struct node *temp = (struct node *)malloc(sizeof(struct node)); 
//         temp->data=data;
//         temp->left=NULL;
//         temp->right=NULL;
//         return temp;
//     }
//     printinorder(node *node){
//         if(node==NULL)
//         cout<<node->data<<" ";
//           printinorder(node->left);
//           printinorder(node->right);
//     }
// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("output.txt","w",stdout);
//     #endif
//     node* root=newnode(1);
//     root->left=newnode(2);
//      root->left=newnode(3);
//       root->left->left=newnode(4);
//        root->left->right=newnode(5);
//        cout<<"inorder traversal"<<endl;
//       printinorder( root) ;
//     return 0;
//    }
