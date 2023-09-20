#include<stdio.h>
int main()
{
    int arr[7],i,large=0;
    printf("enter array elements ");
    for(i=0;i<7;i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("large to sort  elements are ");
    for(i=0;i<7;i++)
    {    arr[i]>large;
         large=arr[i];
        printf("%d\n",arr[i]);
    }
     printf("the second large  elements are ");
    for(i=0;i<2;i++)
    {    if(i==arr[0])
          {
            continue;
          }
        printf("%d",arr[1]);
    }
     
    return 0;
    