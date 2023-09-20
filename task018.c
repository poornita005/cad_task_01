#include<stdio.h>
int main()
{
    int arr[7],i,sort=0;
    printf("enter array elements ");
    for(i=0;i<7;i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("sort elements are ");
    for(i=0;i<7;i++)
    {    arr[i]>sort;
         sort=arr[i];
        printf("%d",arr[i]);
    }
     printf("even elements are ");
    for(i=0;i<7;i++)
    {   if(arr[i]%2==0)
        printf("%d",arr[i]);
    }
    printf("odd elements are ");
    for(i=0;i<7;i++)
    {   if(arr[i]%2!=0)
        printf("%d",arr[i]);
    }
    return 0;
    
}
