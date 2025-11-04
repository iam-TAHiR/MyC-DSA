// Fixed capacity by using macro function called CAP
#include<stdio.h>
#define CAP 100

int main()
{
    int a[CAP];
    void printarray(int a[],int n)
    { int i=0;
        for(i=0;i<n&&i<CAP;i++)
        printf("%d ",a[i]=i);
    }
printarray(a,700);
return 0;
    
}
