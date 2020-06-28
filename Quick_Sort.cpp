//Quick Sort Implementation
#include <iostream>
using namespace std;
void quickSort(int arr[],int low,int high);
int findIndex(int arr[],int low,int high);
void swapElements(int arr[],int i,int j);
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
  int low=0;
  int high=size-1;
  quickSort(array,low,high);//quickSort(array,0,size-1);
  cout<<"\narray elements after sorting\n";
  for(int i=0;i<size;i++)
  cout<<array[i]<<endl;
}
else
cout<<"array size should be greater than 0";
return 0;
}
void quickSort(int arr[],int low,int high)
{
   if(low<high)
   {
    int pIndex=findIndex(arr,low,high);//pivot index(all the left elements are less than <) --- pivot element ---( > all the right elements are greater than pivot element)
    quickSort(arr,low,pIndex-1);//based on pivot index the array is divided into two low to pivot-1 (pivot is already sorted)
    quickSort(arr,pIndex+1,high);//pivot+1 to high
   }
}
int findIndex(int arr[],int low,int high)
{
  int pIndex=low;
  int pivot=high;//by default pivot is assigned to high index
  for(int i=low;i<high;i++)
  {
   if(arr[i]<=arr[pivot]) 
     {
        swapElements(arr,i,pIndex);
        pIndex++;
     }
  }
 swapElements(arr,high,pIndex);
 return pIndex;  
}


void swapElements(int arr[],int i,int j)
{
 int temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;  
}

