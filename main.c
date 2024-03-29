#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// Suggested values for `true` and `false` to distinguish them from pointers
#define TRUE  0x0000000000000006L
#define FALSE 0x0000000000000002L

#define BOA_MIN (- (1L << 62))
#define BOA_MAX ((1L << 62) - 1)

extern int64_t our_code_starts_here(int64_t* the_heap, int64_t input_val) asm("our_code_starts_here");
extern int64_t print(int64_t input_val) asm("print");
extern void error(int64_t val) asm("error");

int64_t print(int64_t val) {
  // FILL IN YOUR CODE FROM HERE
}

void error(int64_t error_code) {
  // FILL IN YOUR CODE FROM HERE
}

int main(int argc, char** argv) {
  int64_t input_val;
  // FILL IN YOUR CODE FROM HERE


  // YOUR CODE ENDS HERE
  int64_t* the_heap = calloc(10000, sizeof(int64_t));
  int64_t result = our_code_starts_here(the_heap, input_val);
  print(result);
  return 0;
}
