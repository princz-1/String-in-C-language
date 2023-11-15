// string copy 

#include <stdio.h>
#include <string.h>
int main(void) {
char oldString[] = "oldString";
  char newString[] = "newString";

  strcpy(newString,oldString);
  puts(newString);

  strcpy(oldString,newString);
  puts(oldString);
  return 0;
}
