// insert at end
#include<stdio.h>
#define CAP 100
int main()
{  int n,val;
   int arr[CAP]={10,20,30};
   n=3;
   val=9;
   if(n<CAP)
   {
       arr[n]=val;
   
    n++;
   }
   else
    {
        printf("Array is full\n");
        
    }
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
    
}
