//Bubble Sort Implementation
#include <iostream>
using namespace std;

int main()
{
  int size;
  cout<<"enter the size of the array:";
  cin>>size;
if(size != 0)
  {
  int array[size];
  cout<<"\nenter the elements of the array\n";
  for(int i=0;i<size;i++)
  cin>>array[i];
  cout<<"array elements before sorting \n";
  for(int i=0;i<size;i++)
  cout<<array[i]<<endl;
  int i,j;
  for(i=0;i<size;i++)
  {
   for(j=0;j<size-1;j++)
   {
     if(array[j]>array[j+1])
      {
       int temp=array[j];
           array[j]=array[j+1];
           array[j+1]=temp;
      }
    }
  }
  cout<<"\narray elements after sorting\n";
  for(int i=0;i<size;i++)
  cout<<array[i]<<endl;
}
else
cout<<"array size should be greater than 0";
return 0;
}
