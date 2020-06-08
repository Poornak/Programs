//Implementation of Queue using Array
#include<bits/stdc++.h>
using namespace std;
int SIZE=10;
int Queue[10];
int front=-1,rare=-1;
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
	case 1:insertAnElement();break;
	case 2:deleteAnElement();break;
	case 3:display();break;
	case 4:exit(0);break;
	default:cout<<"please enter the valid option\n";
 		}
}
}
void insertAnElement()
{ 
   int element;
   if(rare==SIZE-1)
   cout<<"Queue overflow";
   else
     { 
       cout<<"enter the data:";
       cin>>element;
       if(front==-1)
         front++;
       rare++;
       Queue[rare]=element;
       cout<<"inserted successfully\n";
}
}

void deleteAnElement()
{
  if(rare==-1 || front>rare)
  cout<<"Queue underflow";
  else
  {
    int element;
    element=Queue[front];
    front++;
    cout<<"element deleted successfully\n";
  }
}

void display()
{
  if(rare==-1 || front>rare)
  cout<<"queue is empty\n";
  else
   {
     cout<<"Printing list\n";
     for(int i=front;i<=rare;i++)
      {  
         cout<<Queue[i]<<"\n";
      }
   }

}
   
