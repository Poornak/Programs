//Implementation of stack using linked list
#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;
};
void push();
void pop();
void display();
Node *temp=new Node();
Node *top=new Node();
//Node *top=NULL;
int main()
{
 int choice;
 top=NULL;
 while(choice!=4){
	cout<<"---------------------------------------------\n";
	cout<<"               Main Menu                    \n";
	cout<<"--------------------------------------------\n";
	cout<<"1.Inserting an element into stack\n";
	cout<<"2.Deleting an element from the stack\n";
	cout<<"3.Display the elements in Stack\n";
        cout<<"4.Exit\n";
	cout<<"---------------------------------------------\n";
	cout<<"---------------------------------------------\n";
        cout<<"Enter your choice:";
 	cin>>choice;
        switch(choice){
	case 1:push();break;
	case 2:pop();break;
	case 3:display();break;
	case 4:exit(0);break;
	default:cout<<"please enter the valid option\n";
 		}
}
}
void push()
{
  Node *new_node=new Node();
  cout<<"Enter the data:";
  if(top==NULL)
  {
     cin>>new_node->data;
     new_node->next=NULL;
     top=new_node;   
     cout<<"Inserted successfully\n";
  }
  else
  {
     cin>>new_node->data;
     new_node->next=top;
     top=new_node;
     cout<<"Inserted successfully\n";
  }
}

void pop()
{
  if(top==NULL)
   cout<<"stack is empty please try to create an element and then try this option\n";
  else
    {
      temp=top;
      top=top->next;
      delete temp;
      cout<<"deleted successfully";
     }
}

void display()
{
   if(top==NULL)
    cout<<"stack is empty please try to create an element and then try this option\n";
   else
    {
      cout<<"printing the list\n";
      temp=top;
      while(temp!=NULL)
       {
         cout<<temp->data<<"\n";
         temp=temp->next;
       }
     cout<<"\n";
    }
}
