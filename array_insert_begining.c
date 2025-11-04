// insert at begining
#include<stdio.h>
#define CAP 100
int main()
{  int n,val;
   int arr[CAP]={10,20,30};
   n=3;
   val=9;
   if(n<CAP)
   {
       {for(int i=n;i>0;i--)
    arr[i]=arr[i-1];
   }
    arr[0]=val;
    n++;
   }
   else
    {
        printf("Array is full\n");
        
    }
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
    
}
