/* .Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle.  */
#include<stdio.h>
int main()
{
    int choice;
    printf("enter nuber one ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 11:
        {
            int radius,area,PI=3.14;
            printf("enter the radius");
            scanf("%d",&radius);
            area=radius*radius*PI;
            printf("result is=",area);
             break;
        }
        
       
        case 22:
        {
            int w,h,area,;
            printf("enter the input");
            scanf("%d",&w);
             printf("enter the input");
            scanf("%d",&h);
            area=w*h;
            printf("result is=",area);
             break;
        }
        case 33:
        {
            int s,area;
            printf("enter the input");
            scanf("%d",&s);
             
            area=s*s;
            printf("result is=",area);
             break;
        }
        case 44:
        {
            int b,h,area,;
            printf("enter the input");
            scanf("%d",&b);
             printf("enter the input");
            scanf("%d",&h);
            area=1/2*b*h;
            printf("result is=",area);
             break;
        }
    }
    
    
    return 0;
    
}