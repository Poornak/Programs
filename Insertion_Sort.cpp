//Insertion Sort Implementation
//Need to select one elemnt and compare with all the elements on it's left hand side and swap it is less than left hand sided element 
//we will insert the min elemnent first 
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
  int i,j,temp;
  for(i=1;i<size;i++)
  {
    temp=array[i];
   for(j=i;j>0;j--)
   {
     if(temp<array[j-1])
      {
        array[j]=array[j-1];
        array[j-1]=temp;
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
