#include<stdio.h>
int even(int arr[5]);
int main()
{
 int z,arr[5]={2,3,7,9,8};
 //z=arr[5];
 even(arr);
}
int even(int arr[5])
{
  int i,y,z;
// arr[z]={2,3,7,9,8};
 for(i=0;i<5;i++)
 {
  z=arr[i];
 y=z%2;
 if(y==0)
 printf("it is even=%d\n",z);
 else
 printf("it is odd=%d\n",z);
}
}

  
