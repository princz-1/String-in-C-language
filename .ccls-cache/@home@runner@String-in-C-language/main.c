// A character array terminated by a "\0"(null character)
// Null character denoted string termination.

#include <stdio.h>

int main(void) {
// Example Initialising String
  char name[] ={'P','R','I','N','C','E','\0'};
  char name2[] = "PRINCE";

  // String Formate Specifier
  char name3[50];
  printf("Enter your name :");
  scanf("%s",name3);

  printf("Your name is :%s",name3);
  return 0;
}