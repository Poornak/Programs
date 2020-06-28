//Binary search program

#include <iostream>
using namespace std;

int main()
{
  int size,flag=0,position;
  cout<<"enter the size of the array:";
  cin>>size;
 if(size != 0)
{
  int array[size];
  cout<<"\nenter the elements of the array in ascending order:\n";
  for(int i=0;i<size;i++)
  cin>>array[i];
  int element;
  cout<<"enter the element to search:";
  cin>>element;
  int low=0;
  int high=size-1;
  cout<<"\nBinary search started:\n";
  while(low<=high)
  {
   int mid=(low+high)/2;
   if(element == array[mid])
   {
     flag++;
     position=mid;
     break;
   }
   else if(element < array[mid])
     high=mid-1;
   else
    low=mid+1; //element > array[mid]
  }

  if(flag == 1)
  cout<<"element :"<<element<<" is found in the array at position:"<<position<<endl;
  else
  cout<<"element is not there in the array"<<endl;
}
else
cout<<"size of the array should be greater than 0"<<endl;

return 0;
}
