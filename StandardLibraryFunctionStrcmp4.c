// Compare 2 strings & return a value 
// 0 -> string Equal 
// positive -> first > second(ASCII)
// negative -> first < second(ASCII)


#include <stdio.h>
#include<string.h>

int main(void) {
char firstStr[] = "Apple";
  char secStr[] = "Banana";  
  printf("%d\n",strcmp(firstStr,secStr)); // B(66) - A(65) = -1
 
  return 0;
}
