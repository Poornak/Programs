//Merge Sort Implementation
#include <iostream>
using namespace std;
void mergeSort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);
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
  mergeSort(array,low,high);//mergeSort(array,0,size-1);
  cout<<"\narray elements after sorting\n";
  for(int i=0;i<size;i++)
  cout<<array[i]<<endl;
}
else
cout<<"array size should be greater than 0";
return 0;
}

void mergeSort(int arr[],int low,int high)
{
        //cout<<"before printing low and high"<<low<<high<<endl;
  if(low<high)
   {
     int mid=(low+high)/2;
      cout<<"printing mid low and high"<<mid<<low<<high<<endl;
     mergeSort(arr,low,mid);
     mergeSort(arr,mid+1,high);
     merge(arr,low,mid,high);
      cout<<"merge printing mid low and high"<<mid<<low<<high<<endl;
   }
   else
   return;
}
void merge(int arr[],int low,int mid,int high)
{
  int i=low;//i is used to keep track of left sub array
  int j=mid+1;//j is used to keep track of right sub array
  int k=low;//k is used to keep track of temp array 
  int temp[100];//it is used to create one temp array to copy the sorted elements 
  while(i<=mid&&j<=high) // left sub array starts from 0 to mid && right sub array starts from mid+1 to high so i should be less= than mid and j should be less= than high
  {
   if(arr[i]<arr[j]) //if element in left sub array is less than the the element in right sub array 
    {
      temp[k]=arr[i]; //then copy the minimum element from left sub array to temp array
      i++;k++; //increments the index as they are already used
    }
  else //if element in right sub array is less than the the element in left sub array 
    {
     temp[k]=arr[j]; //then copy the minimum element from right sub array to temp array
     j++;k++;//increments the index as they are already used
    }
  }
  
  while(i<=mid) // this should happen when some elements in left sub array are remaining but there are no elements there to compare in right sub array ex: (379) ->left sub array
 //             (26)  ->right sub array
// after comparsion temp array will be like --|2|3|6| | | | ...
//7 and 9 are still need to copied to temp array so this while loop will take care of that
  {
      temp[k]=arr[i];
      i++;k++; 
  }
  while(j<=high) //similar to the above while loop for left sub array
  {
     temp[k]=arr[j];
     j++;k++;
  }

 for(int x=low;x<=high;x++) //this loop used to copy the elements in temp array to main array (arr) --keep a track of index from index=low till index=high
    arr[x]=temp[x];
}
