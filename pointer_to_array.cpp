//pointer to array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int *p;
    p=arr;
    //arr is pointer to arr[0];
    //arr[2] == *(arr+2)
    cout<<"Printing array values using pointer:\n";

    for(int i=0;i<5;i++)
	{
         cout<<i<<"th value:"<<*(p+i)<<endl;
        }
return 0;
}
