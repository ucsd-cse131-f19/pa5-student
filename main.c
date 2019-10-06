#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define TRUE 0xFFFFFFFE
#define FALSE 0x7FFFFFFE

#define BOA_MIN (- (1 << 30))
#define BOA_MAX ((1 << 30) - 1)

extern int our_code_starts_here(int input_val) asm("our_code_starts_here");
extern void error(int val) asm("error");

int print(int val) {
  // FILL IN YOUR CODE FROM HERE
}

void error(int error_code) {
  // FILL IN YOUR CODE FROM HERE
}

int main(int argc, char** argv) {
  int input_val;
  // FILL IN YOUR CODE FROM HERE


  // YOUR CODE ENDS HERE
  int result = our_code_starts_here(input_val);
  print(result);
  return 0;
}
