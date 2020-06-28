//Selection Sort Implementation
//select one element and compare that with all the other elements in the array and get the smallest one and keep at index 0 for first time
//similarly for the second iteration get the second min element and place at index 1
//follow the same procedure for all the remaining elements in the array
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
  int i,j,temp,min;
  for(i=0;i<size;i++)
  {
    min=i;
   for(j=i+1;j<size;j++)
   {
     if(array[j]<array[min])
      min=j;
  }
  temp=array[i];
  array[i]=array[min];
  array[min]=temp;
  }
  cout<<"\narray elements after sorting\n";
  for(int i=0;i<size;i++)
  cout<<array[i]<<endl;
}
else
cout<<"array size should be greater than 0";
return 0;
}
