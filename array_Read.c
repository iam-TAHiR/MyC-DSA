#include<stdio.h>
int main()
{
    int arr[]={3,8,7,8,9};
    int index=3;
    int n= sizeof(arr)/sizeof(arr[0]);
    if(index>0&&index<n)
    {
        printf("arr[%d]=%d",index,arr[index]);
    }
}
