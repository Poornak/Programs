//Linear search program

#include <iostream>
using namespace std;

int main()
{
  int size,flag=0;
  cout<<"enter the size of the array:";
  cin>>size;
 if(size != 0)
{
  int array[size];
  cout<<"\nenter the elements of the array:\n";
  for(int i=0;i<size;i++)
  cin>>array[i];
  int element;
  cout<<"enter the element to search:";
  cin>>element;
  cout<<"\nLinear search started:\n";
  for(int i=0;i<size;i++)
  {
  if(array[i]==element)
  flag++;
  }
 if(flag == 1)
  cout<<"element :"<<element<<" is found in the array:"<<endl;
 else
  cout<<"element is not there in the array"<<endl;
}
else
cout<<"size of the array should be greater than 0"<<endl;

return 0;
}
