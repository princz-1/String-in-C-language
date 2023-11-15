// Ask the user to enter their firstName & print it back to them.
// Also try this with their fullName.

//         ------> String Draw Back:- scanf() cannot input multi-word string with spaces <------

#include <stdio.h>

int main(void) {
  /*     ---> String Functions 
        gets(str) ----{Dangerous & Outdated}
          [input a string {even multiword}]
      ---------------------------------------------------------
      |  -----[Using it]----                                  |
      |  puts(str)                                            |
      |  [output a string]                                    |
      |                                                       |
      | fgets(str,n,file{by default using :-stdin})           |
      | [stop when n-1 chars input or new line is entered]    |
      ---------------------------------------------------------
*/
char name[100];
  printf("Enter your full name :");
 fgets(name,100,stdin);
  printf("your name is :");
  puts(name);
  return 0;
}
