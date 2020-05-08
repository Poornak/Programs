//Single linked list implementation
#include<bits/stdc++.h>
using namespace std;
   
class Node 
	{
	    public:
	    int data;
	    Node* next;
	};
Node *head=new Node();
Node *temp=new Node();
void createNode();
void display();
void createAtBegining();
void createAtRandom();
void createAtEnd();
void deleteFromBegining();
void deleteAtRandom();
void deleteFirstNode();
void deleteLastNode();
int main()
{
   int choice;  
   head=NULL; 
   while(choice!=10){
   cout<<"---------------------------------------------\n";
   cout<<"               Main Menu                    \n";
   cout<<"--------------------------------------------\n";
   cout<<"1.Create a Node\n";
   cout<<"2.Create a Node at the begining\n";
   cout<<"3.Create a Node at a Random position\n";
   cout<<"4.Create a Node at the end\n";
   cout<<"5.Delete all Nodes from the begining\n";
   cout<<"6.Delete a Node at a Random position\n";
   cout<<"7.Delete a Node at First position\n";
   cout<<"8.Delete a Node at a Last position\n";
   cout<<"9.Display the list\n";
   cout<<"10.Exit\n";
   cout<<"---------------------------------------------\n";
   cout<<"---------------------------------------------\n";
   cout<<"Enter your choice:";
   cin>>choice;
   switch(choice){
	case 1:createNode();break;
	case 2:createAtBegining();break;
	case 3:createAtRandom();break;
        case 4:createAtEnd();break;
	case 5:deleteFromBegining();break;
	case 6:deleteAtRandom();break;
    	case 7:deleteFirstNode();break;
        case 8:deleteLastNode();break;
	case 9: display();break;
	case 10:exit(0);break;
        default: cout<<"Please enter the valid choice\n";
   }
}
}


void createNode()
{
  Node* new_node=new Node();
  cout<<"\nEnter the data:";
  cin>>new_node->data;
  if(head == NULL)
    {
      head=new_node;  
      temp=new_node;
      cout<<"\nNode Creation completed\n";
      return;
    }

  else
    {
      temp->next=new_node;
    }
  temp=temp->next;
  cout<<"\nNode Creation completed\n";
}



void createAtBegining()
{
  
  Node* new_node=new Node();
  cout<<"\nEnter the value:";
  cin>>new_node->data;
  if(head==NULL)
    {
      head=new_node;  
      temp=new_node;
    }
   else
    {
     new_node->next=head;
     head=new_node;
     new_node=temp;
    }
}

void createAtRandom()
{
  Node *prev=new Node();
  Node* new_node=new Node();
  cout<<"enter the position:";
  int n;
  cin>>n;
  prev=head;
  int i;
  if(head==NULL || n==0 )
  {
   cout<<"cannot be created as there are no nodes in the list please create a node or you should try to insert at random postion not the starting so try another option\n";
  return;
  }
  else
{
    cout<<"\nEnter the value:";
  cin>>new_node->data;
  for(i=0;i<n-1;i++)
   prev=prev->next;

  new_node->next=prev->next;
  prev->next=new_node;
  cout<<"-----node is inserted--------\n";
}
}

void createAtEnd()
{
  Node *new_node=new Node();
  if(head==NULL)
  {
   cout<<"List is empty so try inserting a node and then try this option";
  }
  else
 {
  cout<<"Enter the value:";
  cin>>new_node->data;
  temp->next=new_node;
  temp=temp->next;//or temp=new_node;
  cout<<"Node is created at the End\n";
  }
}

void deleteFromBegining()
{
  cout<<"Deletion started\n";
  while(head!=NULL)
  {
	temp=head;
	head=temp->next;
	delete temp;
  }
  cout<<"List deletion completed\n";
}

void deleteAtRandom()
{
    Node *prev=new Node();
    Node *ptr=new Node();
    //ptr=head;
    prev=head;
  if(head==NULL)
  {
   cout<<"cannot be deleted as there are no nodes in the list please create a node and try this another option\n";
   return;
  }
  else
  {     
    cout<<"Enter the position:";
    int n,i;
    cin>>n;
  	for(i=0;i<n;i++)
  		{
    			ptr=prev;
    			prev=ptr->next;
  		}
	ptr->next=prev->next;
	delete prev;
  }
  cout<<"Deletion completed \n";
  return;
}

void deleteFirstNode()
{

   Node *ptr=new Node();
   ptr=head;
   if(head==NULL)
  {
   cout<<"cannot be deleted as there are no nodes in the list please create a node and then try this option:\n";
  }
  else
  {
    head=head->next;
    delete ptr;
  }
  cout<<"Node at first position is deleted\n";

  return;
}


void deleteLastNode()
{

  Node *ptr1=new Node();
  Node *ptr2=new Node();
   if(head==NULL)
  {
   cout<<"cannot be deleted as there are no nodes in the list please create a node and then try this option:\n";
  }
  else
    {
       ptr1=head;
       while(ptr1->next!=NULL)
           {
          	     ptr2=ptr1;	
		     ptr1=ptr1->next;	
   
            }
        temp=ptr2;
        temp->next=NULL;
//      ptr2->next=NULL;
        delete ptr1;
        cout<<"Node at the last position is deleted:\n";
    }
 
}
void display()
{
    Node *temp=new Node();
    temp=head;
    if(temp==NULL)
     cout<<"Nothing to print as there are no nodes created so please try to create a node and try this option\n";
    else{
    cout<<"printing the list\n";
    while(temp!=NULL)
    {
     cout<<temp->data<< " \n";
     temp=temp->next;
    }
}
}


