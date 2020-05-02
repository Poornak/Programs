#include<stdio.h>
void add(int *c,int *b,int *sum) //function for the addition of two numbers
{ 
  *sum=*c+*b;
   printf("the sum of the two numbers is:%d\n",*sum);
}
int main()
{
int a=10,b,c,sum=0; // variable declartion
int *p; //pointer declaration

int *p1 = NULL; //null pointer
p=&a; //stores the address of variable a in pointer variable --p
printf("address of the variable a is :");
printf("%p\n",&a); //printing the address of integer variable --a
printf("address of the variable p is :");
printf("%p\n",&p); //printing the address of pointer variable --p
printf("the sotred value in pointer variable\n");
printf("%p\n",p);
printf("Value stored in pointer variable is:");
printf("%d\n",*p);  // printing the value in the pointer variable --p
printf("the value of the null pointer p1 is :%p",p1);
printf("\nenter b and c values:");
scanf("%d%d",&b,&c);
add(&c,&b,&sum);//calling function
return 0;
}


