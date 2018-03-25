#include <assert.h>
int main(void) {
  unsigned int i=0, n;
  float x=3;
  __VERIFIER_assume(n>1);
  while (i<=n) {
    x = ((2*x) - 1);
    i++;
  }
  assert(x>0);
  return 0;
}

