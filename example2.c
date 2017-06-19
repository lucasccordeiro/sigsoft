#include <stdio.h>
#include <assert.h>
#include <math.h>
int main(void) {
 unsigned int i=1, n = -1;
 float x;
 __VERIFIER_assume(x>1);
 while (i<=n) {
   x = ((2*x) - 1);
   if(isinf(x)) {
     printf("\%d\n", i);
     break;
   }
   assert(x>0);
   printf("i: \%d\n", i);   
   i++;
 }
 assert(x>0);
 return 0;
}

