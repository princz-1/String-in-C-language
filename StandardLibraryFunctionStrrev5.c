// it return reverse of a string 
#include <stdio.h>
#include <string.h>

void rev(char*str);
int main(void) {
    char a[10] = "Hello";
    rev(a);
    return 0;
}
void rev(char* str) {
    int length = strlen(str);
    for (int i = length ; i >= 0; i--) {
        printf("%c", str[i]);
    }
}
