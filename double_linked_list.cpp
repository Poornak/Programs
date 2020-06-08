//Implementation of double linked list
#include<bits/stdc++.h>

using namespace std;

struct Node 
	{
            struct Node *prev;    
	    int data;
	    struct Node *next;
	};
struct Node *new_node;
struct Node *temp;
struct Node *head=NULL;
struct Node *tail=NULL;
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
  cout<<"enter the data: ";
  cin>>new_node->data;
  if(head == NULL)
  {
    head=new_node;
    tail=new_node;

  }
  else
{
    tail->next=new_node;
    new_node->prev=tail;
    tail=new_node;
}
}
void createAtBegining()
{
  new_node=(struct Node*)malloc(sizeof(struct Node*));
  cout<<"enter the data: ";
  cin>>new_node->data;
  if(head == NULL)
     {
    
        head=new_node;
        tail=new_node; 

      }

   else
   {
     new_node->next=head;
     head->prev=new_node;
     head=new_node;
     new_node=tail;
   }
   cout<<"Successully inserted\n";
}

void createAtRandom()
{

    cout<<"enter the position:";
  int position;
  cin>>position;
  if(head==NULL || position==0 || position==1)
  {
     cout<<" list is empty try creating a node and then try this option\n";
  } 
  else
{
  new_node=(struct Node*)malloc(sizeof(struct Node*));
  struct Node *ptr1;
  ptr1=head;
  struct Node *ptr2;
  cout<<"enter the data: ";
  cin>>new_node->data;
  for(int i=0;i<position-1;i++)
  {
   ptr2=ptr1;
   ptr1=ptr1->next;
  }
   new_node->next=ptr1;
   new_node->prev=ptr2;
   ptr2->next=new_node;
   ptr1->prev=new_node;
   new_node=tail;
   cout<<"Successully inserted\n";
}
}

void createAtEnd()
{
  if( head == NULL)
  {
   cout<<"list is empty\n";
  } 
  else
  {
  new_node=(struct Node*)malloc(sizeof(struct Node*));
  cout<<"enter the data: ";
  cin>>new_node->data;
    new_node->prev=tail;
    tail->next=new_node;
    tail=new_node;
  }
  cout<<"successfully inserted at the end\n";
 
}

void deleteFromBegining()
{
  if(head == NULL)
  {
    cout<<"List is empty\n";  
}
else
{
cout<<"deleting mode started\n";
  new_node=head;
  while(head != NULL)
  {
   head=head->next;
   delete new_node;
   new_node=head;
  }
  tail=NULL;
  head=NULL;
 cout<<"completed successfully\n";
}
}


void deleteAtRandom()
{
  if(head == NULL)
  {
    cout<<"List is empty\n";  
}
else
{
  int position;
  cout<<"enter the position:";
  cin>>position;
  struct Node *ptr1;
  struct Node *ptr2;
  ptr1=head;
  for(int i=0;i<position-1;i++)
  {
    ptr2=ptr1;
    ptr1=ptr1->next; 
  }
  ptr2->next=ptr2->next->next; // or ptr2->next=ptr1->next;
  ptr2->next->prev=ptr2;
    cout<<"Deleted successfully\n"<<ptr1->data;
  delete ptr1;
  }

}

void deleteFirstNode()
{
  if( head == NULL)
  {
    cout<<"list is empty\n"; 
  }
 else
  {
    cout<<"deleting the first Node:"<<head->data;
    temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
    cout<<"deleted successfully\n";
}


}

void deleteLastNode()
{
   if(tail==NULL)
   cout<<"List is empty\n";
   else
   {
    temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    cout<<"successfully deleted:"<<temp->data;
    delete temp;
   }
}


void display()
{
  if(tail == NULL)
  cout<<"list is empty\n";
  else
  {
     temp=head;
     while(temp != NULL)
     {
       cout<<temp->data<<"\n";
       temp=temp->next; 
      }
  
  }

}



