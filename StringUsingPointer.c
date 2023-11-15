#include <stdio.h>

int main(void) {
char *canChange = "prince Panchal";
  puts(canChange);
  canChange = "Prince";
  puts(canChange); // Can be Reinitialized

  char cannotChange = "Prince Panchal";
  puts(cannotChange);
  cannotChange = "Prince";
  puts(cannotChange); // Cannot be Reinitialized[Error]
  
  return 0;
}
