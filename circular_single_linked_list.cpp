//Circular Single linked list implementation
#include<bits/stdc++.h>
using namespace std;
struct Node 
	{   
	    int data;
	    struct Node *next;
	};
struct Node *new_node;
struct Node *prev;
struct Node *head=NULL;
struct Node *temp=NULL;
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
	case 1:createNode();
               break;
	case 2:createAtBegining();
               break;
	case 3:createAtRandom();
               break;
        case 4:createAtEnd();
               break;
	case 5:deleteFromBegining();
               break;
	case 6:deleteAtRandom();
               break;
    	case 7:deleteFirstNode();
               break;
        case 8:deleteLastNode();
               break;
	case 9: display();
                break;
	case 10:exit(0);
                break;
        default: cout<<"Please enter the valid choice\n";
   }
}
}


void createNode()
{

   new_node=(struct Node*)malloc(sizeof(struct Node*)); 
 cout<<"\nEnter the data:";
  cin>>new_node->data;
  if(head == NULL)
    {
      head=new_node;  
      temp=new_node;
      cout<<"\nNode Creation completed\n";
    }

  else
    {
      temp->next=new_node;
        temp=new_node;
      temp->next=head;
      cout<<"\nNode Creation completed\n";
    }

}



void createAtBegining()
{
  new_node=(struct Node*)malloc(sizeof(struct Node*));
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
     temp->next=head;
    }
}

void createAtRandom()
{
struct Node *prev;  
//Node *prev=new Node();
  //Node* new_node=new Node();
  new_node=(struct Node*)malloc(sizeof(struct Node*));
  prev=(struct Node*)malloc(sizeof(struct Node*));
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
   new_node=(struct Node*)malloc(sizeof(struct Node*));
// Node *new_node=new Node();
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
  temp->next=head;
  cout<<"Node is created at the End\n";
  }
}

void deleteFromBegining()
{
  struct Node *prev;  
  struct Node *ptr1;  
  cout<<"Deletion started\n";
  prev=(struct Node*)malloc(sizeof(struct Node*));
  ptr1=(struct Node*)malloc(sizeof(struct Node*));
  ptr1=head;
  while(prev->next!=ptr1)
  {
	/*temp=head;
	head=temp->next;
	delete temp;*/
        prev=head;
        head=prev->next;
        delete prev;
  }
   head=NULL;
 
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

struct Node *ptr;  
  ptr=(struct Node*)malloc(sizeof(struct Node*));   
//Node *ptr=new Node();
   ptr=head;
   if(head==NULL)
  {
   cout<<"cannot be deleted as there are no nodes in the list please create a node and then try this option:\n";
  }
  else
  {
    head=head->next;
    temp->next=head;
    delete ptr;
  }
  cout<<"Node at first position is deleted\n";

  return;
}


void deleteLastNode()
{

  struct Node *ptr2;  
  ptr2=(struct Node*)malloc(sizeof(struct Node*)); 
struct Node *ptr1;  
  ptr1=(struct Node*)malloc(sizeof(struct Node*)); 
//Node *ptr1=new Node();
  //Node *ptr2=new Node();
   if(head==NULL)
  {
   cout<<"cannot be deleted as there are no nodes in the list please create a node and then try this option:\n";
  }
  else
    {
       ptr1=head;
       while(ptr1->next!=head)
           {
          	     ptr2=ptr1;	
		     ptr1=ptr1->next;	
   
            }
        temp=ptr2;
        temp->next=head;
//      ptr2->next=NULL;
        delete ptr1;
        cout<<"Node at the last position is deleted:\n";
    }
 
}
void display()
{
    temp=head;
    if(head==NULL)
     cout<<"Nothing to print as there are no nodes created so please try to create a node and try this option\n";
    else{
    cout<<"printing the list\n";
    while(temp->next!=head)
    {
     cout<<temp->data<< " \n";
     temp=temp->next;
    }
   cout<<temp->data<<"\n";
}
}

