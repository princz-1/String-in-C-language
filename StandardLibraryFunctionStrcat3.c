// Concatenates first string with second string 

#include <stdio.h>
#include<string.h>
int main(void) {
char firstString[100] = "Prince ";
  char secString[] = "Panchal";

  strcat(firstString,secString);
  puts(firstString);
  return 0;
}
