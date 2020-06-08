//Implementation of Queue using Linked List
#include<bits/stdc++.h>

using namespace std;

struct Node 
	{
	    int data;
	    struct Node *next;
	};
struct Node *new_node;
struct Node *temp;
struct Node *rare=NULL;
struct Node *first=NULL;

void insertAnElement();
void deleteAnElement();
void display();

int main()
{
   int choice;
   while(choice!=4){
	cout<<"---------------------------------------------\n";
	cout<<"               Main Menu                    \n";
	cout<<"--------------------------------------------\n";
	cout<<"1.Inserting an element into queue\n";
	cout<<"2.Deleting an element from the queue\n";
	cout<<"3.Display the elements in queue\n";
        cout<<"4.Exit\n";
	cout<<"---------------------------------------------\n";
	cout<<"---------------------------------------------\n";
        cout<<"Enter your choice:";
 	cin>>choice;
        switch(choice){
	case 1:insertAnElement();
               break;
	case 2:deleteAnElement();
               break;
	case 3:display();
               break;
	case 4:exit(0);
	       break;
	default:cout<<"please enter the valid option\n";
 		}
}
}
void insertAnElement()
{ 
    new_node =(struct Node*)malloc(sizeof(struct Node*));
    cout<<"enter the data:";
   if(rare == NULL)
     {
        cin>>new_node->data;
        first=new_node;
	rare=new_node;
     cout<<"inserted successfully:->"<<first->data;
     }
   else
     { 
       cin>>new_node->data;
       rare->next=new_node;
       rare=new_node;
     cout<<"inserted successfully:"<<rare->data;
     }
}


void deleteAnElement()
{

  cout<<"hii\n";
  if(rare==NULL)
  cout<<"queue is empty\n";
  else if(rare == first)
{
     temp =(struct Node*)malloc(sizeof(struct Node*));
     temp=first;
     first=first->next;
     rare=rare->next;
      cout<<"deleted successfully:"<<temp->data;
     delete temp;
}
else
  {
    temp =(struct Node*)malloc(sizeof(struct Node*));
     temp=first;
     first=first->next;
      cout<<"deleted successfully:"<<temp->data;
     delete temp;

}
  
}

void display()
{
 
 if(rare==NULL)
 cout<<"Queue is empty\n";
 else
 {
   cout<<"Printing the queue:\n";
   new_node=first;
   while(new_node!=NULL)
    {
      cout<<new_node->data<<"\n";
      new_node=new_node->next;
    }
}
}
  
