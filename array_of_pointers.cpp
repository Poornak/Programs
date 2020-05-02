//array of pointers
#include<bits/stdc++.h>
using namespace std;
  
int main() 
{ 
    int arr[] = { 1, 2, 3 }; 
    // we can make an integer pointer array to 
    // storing the address of array elements 
    int i, *ptr[3]; 
  
    for (i = 0; i < 3; i++) { 
        ptr[i] = &arr[i]; 
    } 
  
    // printing values using pointer 
    for (i = 0; i < 3; i++) { 
  
        printf("Value of arr[%d] = %d\n", i, *ptr[i]); 
           }

return 0;
    } 
