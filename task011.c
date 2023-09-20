

#include <stdio.h>
int main()
{
    int no;
    int pro=1;

    
    printf("Enter any number to product of digit: ");
    scanf("%d", &no);
    while(no != 0)
    {
        
        pro = pro * (no % 10);

       
        no = no / 10;
    }

    printf("Product of digits = %d", pro);

    return 0;
}