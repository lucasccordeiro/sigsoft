#include <stdio.h>
#include <assert.h>
#include <math.h>
int main(void) {
 unsigned int i=1;
 float x=0.9;
 while (1) {
   x = ((2*x) - 1);
   if(isinf(x)) {
     printf("\%d\n", i);
     break;
   }
   printf("iii: \%d\n", i);
   assert(x>0);
   ++i;
 }
 assert(x>0);
 return 0;
}

