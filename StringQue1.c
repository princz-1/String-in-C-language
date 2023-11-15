// Create a string firstName & lastName to store details of user & print all the character using a loop ?
void printString(char arr[]);
#include <stdio.h>

int main(void) {
  char firstName[] = "Prince";
  char lastName[] = "Panchal";
printString(firstName);
  printString(lastName);
  
  return 0;
}
void printString(char arr[]){
  for(int i=0; arr[i] != '\0'; i++){
    printf("%c",arr[i]);
  }
  printf("\n");
}
