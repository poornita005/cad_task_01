#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter nuber one ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
         printf("numbers are even");
         printf("%d",i);

        }
        else
        {
        printf("numbers are odd");
        printf("%d",i);
        }
    }
    
    return 0;
    
}