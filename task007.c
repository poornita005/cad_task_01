#include<stdio.h>
int main()
{
    int month;
    printf("enter nuber one ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("jan");
        break;
        case 2:
        printf("feb");
        break;
        case 3:
        printf("mar");
        break;
        case 4:
        printf("apr");
        break;
        case 5:
        printf("may");
        break;
        case 6:
        printf("june");
        break;
        case 7:
        printf("july");
        break;
        case 8:
        printf("aug");
        break;
        case 9:
        printf("sept");
        break;
        case 10:
        printf("oct");
        break;
        case 11:
        printf("nov");
        break;
        case 12:
        printf("dec");
        break;
        default:
        printf("wrong month you entered");

    }
    
    
    return 0;
    
}