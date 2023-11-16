// Check if a given character is present in a string or not.

#include <stdio.h>
#include<string.h>
void checkCharacter(char str[], char ch);
int main(void) {
char str[] = "Prince";
  char ch = 'o';
  checkCharacter(str, ch);
  return 0;
}
void checkCharacter(char str[],char ch){
  for(int i=0; str[i]!= '\0'; i++){
    if(str[i] == ch){
      printf("Character is Present!");
      return;
    }
    
  }
  printf("Character is Not Present!");
}
