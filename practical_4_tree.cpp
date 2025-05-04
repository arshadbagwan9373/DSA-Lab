#include<iostream>
#include<strings.h>
using namespace std;

struct Node{
    string name;
    int count;
    Node *childs[10];
}*root;

class GTree{

    public:
    GTree(){
        root = NULL;
    }

    void insert_data(){
        root = new Node;
         cout<<"Enter Book Name :";
         cin>>root->name;
         cout<<"Enter Number of chapters :";
         cin>>root->count;
         for(int i=0;i<root->count;i++){
            root->childs[i]=new Node;
            cout<<"Enter Name of Chapter "<<i+1<<":";
            cin>>root->childs[i]->name;
            cout<<"Enter Number of Sections in Chapter "<<i+1<<":";
            cin>>root->childs[i]->count;
            
            for (int j=0;j<root->childs[i]->count;j++){
                root->childs[i]->childs[j]= new Node;
                cout<<"Enter Name of Section "<<j+1<<":";
                cin>>root->childs[i]->childs[j]->name;
                cout<<"Enter Number of Subsections in section "<<j+1<<":";
                cin>>root->childs[i]->childs[j]->count;
            }

         }
    }


    void display(){
        cout<<"----Tree Hierarchy------";
        cout<<"Book Name :"<<root->name<<endl;
        cout<<"Number of chapters in Book :"<<root->count<<endl;
         for(int i=0;i<root->count;i++){
            cout<<" Name of Chapter "<<i+1<<"---"<<root->childs[i]->name<<endl;
            cout<<"Sections in Chapter "<<i+1<<"-----"<<endl;
            for (int j=0;j<root->childs[i]->count;j++){
                cout<<" Name of Section "<<j+1<<"---"<<root->childs[i]->childs[j]->name<<endl;
                cout<<"Number of Subsections in section "<<j+1<<":"<<root->childs[i]->childs[j]->count<<endl;;
            }

         }
        
    }

};

int main(){
    GTree gt;
    int ch;
    
    while(1){
	
        cout<<"--------------"<<endl;
        cout<<"---------GENERAL TREE IMPLEMENTATION------"<<endl;
        cout<<"-----BOOK STRUCTURE-----------"<<endl;
        cout<<"1.Create"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        
        switch(ch){
        case 1:gt.insert_data();
        break;
        case 2:gt.display();
        break;
        case 3: exit(0);
        
        default:cout<<"Wrong choice"<<endl;	
        
        }
        }
    return 0;
}
