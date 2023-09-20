#include<stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],sum[2][2],i,j;
    printf("enter array  elements for first array ");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
    {
    scanf("%d",&arr1[i][j]);
    }
    }
 printf("the  elements of first array is \n");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
    {
    printf("%d",arr1[i][j]);
    }
    }
     printf("enter array  elements for second array ");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
    {
    scanf("%d",&arr2[i][j]);
    }
    }
printf("the  elements of second array is \n");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
    {
    printf("%d",arr2[i][j]);
    }
    }
    printf("the sum of  array is \n");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
    { 
         sum[i][j]=arr1[i][j]+arr2[i][j];
             printf("%d",sum[i][j]);
    }
    }

    
    return 0;
    
}
