#include <stdio.h>

int main() {
   int start, end, i, count;
   printf("enter no for start and end ");
   scanf("%d%d", &start, &end);
   while(start<end) {
      count = 0;
    if(start<=1) {
         ++start;
         continue;
      }
     for (i = 2; i <= start / 2; ++i) {

         if (start % i == 0) {
            count = 1;
            break;
         }
      }
    if (count == 0)
         printf("%d ", start);

      ++start;
   }

   return 0;
}
