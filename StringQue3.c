// Make a program that inputs user's name & prints length ?

#include <stdio.h>
int contLength(char arr[]);
int main(void) {
char name[100];
  fgets(name,100,stdin);
printf("Length is : %d",countLength(name));
  
  
  return 0;
}
int countLength(char arr[]){
  int count = 0;
  for(int i = 0; arr[i] != '\0'; i++){
    count++;
    
  }
  return count-1;
}
