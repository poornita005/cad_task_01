#include <stdio.h>
#include <string.h>
int main()
{
  	char string1[10], revstr[10];
  	int i, j, size;
  	printf(" enter the string  ");
  	gets(string1); 	
  	j = 0;
  	size = strlen(string1);
  	for (i=size-1;i>=0;i--)
  	{
  		revstr[j++] = string1[i];
  	}
  	revstr[i] = '\0';
  	printf("the revers string ias:::::: %s", revstr); 	
  	return 0;
}