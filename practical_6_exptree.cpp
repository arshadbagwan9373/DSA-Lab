#include<iostream>
#include<string>
#define MAX 50
using namespace std;

struct Node{

char data;
Node *left;
Node *right;

}*node;

class tree{
   public:
   int top;
   string exp;
   Node *stack[MAX];
   
   tree(){
       top=-1;
   }
   void push(Node *ptr){
       stack[++top]=ptr;
       cout<<"Operand (Pushed to stack)"<<endl;
   }
   
   Node *pop(){
       return stack[top--];
   }
   
   void accept(){
       cout<<"Enter Expression :";
       cin>>exp;
       int s=size(exp)-1;
       for(int j=s;j>=0;j--){
           node = new Node;
           node->data=exp[j];
           
           if(isalpha(exp[j])){
               node->left=NULL;
               node->right=NULL;
               push(node);
               
           }
           else{
               Node *n1;
               Node *n2;
               n1=pop();
               n2=pop();
               node->right=n1;
               node->left=n2;
               push(node);
               
           }
       }
       
       
   }
   
   void display(){
       
       for(int i=0;i<=top;i++){
           cout<<stack[i]->data<<endl;
       }
       
   }
   
   void printPostorder(Node* ptr)
{
    if (ptr == NULL)
        return;

    printPostorder(ptr->left);
    printPostorder(ptr->right);
    cout << ptr->data << " ";
}
   
};

int main(){
    
    tree t;
    t.accept();
    t.display();
    t.printPostorder(t.pop());

    return 0;
    
}
