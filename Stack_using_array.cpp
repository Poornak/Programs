//Implementation of Stack using Array
#include<bits/stdc++.h>
using namespace std;
int SIZE=10;
int Stack[10];
int top=-1;
void push();
void pop();
void display();
int main()
{
   int choice;
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

void push(){
   if(top==SIZE-1)
    {
       cout<<"stack overflow\n";
    }
   else
    {
       cout<<"enter the data:";
       int data;
       cin>>data;
       top++;
       Stack[top]=data;
       cout<<"element is inserted into stack\n";
      }

}
void pop()
{
     if(top==-1)
       {
        cout<<"stack underflow\n"; 
        cout<<"there are no elements in stack so please create and then try this option\n\n";
       }
     else
       {
         int temp=Stack[top];
         top--;
         cout<<"element is deleted from the stack\n";
       }
}

void display()
{
     if(top==-1)
        {
          cout<<"stack is empty\n";
        }
     else
        {
           int temp=top;
           cout<<"printing the stack\n";
           for(int i=temp;i>=0;i--)
             {
                cout<<Stack[temp]<<"\n";
                temp--;
             }
         }
//return;
}
