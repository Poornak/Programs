//binary search tree implementation
#include<iostream>
using namespace std;


struct Node 
	{
            struct Node *leftChild;    
	    int data;
	    struct Node *rightChild;
	};
struct Node *temp;
struct Node *root;
struct Node * insertNode(struct Node * root,int data);
void display(struct Node * root);
struct Node * deleteNode(struct Node *root,int data);
int search(struct Node *root,int data);
struct Node * findMin(struct Node * root);
struct Node * findMax(struct Node * root);
int flag=0;
int main()
{
   int choice,element;  
   root=NULL; 
   while(choice!=10){
   cout<<"---------------------------------------------\n";
   cout<<"               Main Menu                    \n";
   cout<<"--------------------------------------------\n";
   cout<<"1.Create a Node\n";
   cout<<"2.Delete a Node\n";
   cout<<"3.Search a Node\n";
   cout<<"4.Find minimum element\n";
   cout<<"5.Find maximum element\n";
   cout<<"6.Display the list\n";
   cout<<"7.Exit\n";
   cout<<"---------------------------------------------\n";
   cout<<"---------------------------------------------\n";
   cout<<"Enter your choice:";
   cin>>choice;
   switch(choice){
	case 1:cout<<"enter the data to be inserted"<<endl;
               cin>>element;
               root=insertNode(root,element);
	       break;
	case 2: cout<<"enter the element to be deleted:"<<endl;
                cin>>element;
                deleteNode(root,element);
		break;
	case 3:cout<<"enter the element to be searched:"<<endl;
                cin>>element;                
                if(search(root,element)==1)
                cout<<"Element is found:"<<element<<endl;
                else
               cout<<"Element is not found:"<<element<<endl;
		break;
        case 4:temp=findMin(root);
               cout<<"Minimum element is :"<<temp->data<<endl;
		break;
	case 5:temp=findMax(root);
               cout<<"Maximum element is :"<<temp->data<<endl;                
		break;
	case 6: display(root);
		break;
	case 7:exit(0);
		break;
        default: cout<<"Please enter the valid choice\n";
   }
}
}

struct Node * insertNode(struct Node *root,int data)
{
  if(root == NULL)
    { 
      root=(struct Node*)malloc(sizeof(struct Node*));
      root->data=data;
      root->leftChild=NULL;
      root->rightChild=NULL;
   //  cout<<"data is inserted into tree:"<<root->data;
    //cout<<"printing root address :"<<root;
    }
  else if(data<root->data)
     {
       root->leftChild=insertNode(root->leftChild,data);
     }
  else
       root->rightChild=insertNode(root->rightChild,data);
return root;
   
}
struct Node * deleteNode(struct Node *root,int data)
{
 if(root==NULL)
 cout<<"tree is empty deletion is not allowed"<<endl;
 else if(data < root->data)
 root->leftChild=deleteNode(root,data);
 else if(data > root->data)
 root->rightChild=deleteNode(root,data);
 else if(root->leftChild==NULL && root->rightChild==NULL)//leaf node with no childrens"
 {
   delete root;
   root=NULL; 
 }

 else if(root->leftChild==NULL)//node with one right child
 {
   temp=root;
   root=root->rightChild;
   delete temp;
}
else if(root->rightChild==NULL)//node with one left child
  {
   temp=root;
   root=root->rightChild;
   delete temp;
}
else //node with two childrens
{
   //there are two methods to delete a node having 2 childrens
   //1.take the least element(n) from the right subtree and replace that with parent node and delete the least element(check whether n is having one child or leaf child or 2 childrens so do a recurrsion 
  //2.take the highest element from the left subtree and replace it with parent node and then delete the highest element
  temp=findMin(root->rightChild);
  root->data=temp->data;
  root->rightChild=deleteNode(root->rightChild,temp->data);//following the first step so have to delete the min element from the right subtree
}
}

void display(struct Node * root)
{
//  cout<<"root data is:"<<root->data<<endl;
  //  cout<<"printing root address :"<<root;
  if(root==NULL)
  return;
  // cout<<root->data<<endl; // pre order 
  display(root->leftChild);
cout<<root->data<<endl;//in order traversal
  display(root->rightChild);
  // cout<<root->data<<endl; // post order

}

struct Node * findMin(struct Node * root)
{
  if(root == NULL)
  return NULL;
  else if(root->leftChild == NULL)
  return root;
  else 
  return findMin(root->leftChild);
}


struct Node * findMax(struct Node * root)
{
  if(root == NULL)
  return NULL;
  else if(root->rightChild == NULL)
  return root;
  else 
  return findMax(root->rightChild);
}

int search(struct Node * root,int data)
{
  temp=(struct Node*)malloc(sizeof(struct Node*));  
  temp=root;
  cout<<"Visting elements"<<endl;
    while(temp!=NULL)
    { 
      if(data<temp->data)
        temp=temp->leftChild;
      else if(data>temp->data)
        temp=temp->rightChild;
      else return 1;
}
 return 0;
}


 

