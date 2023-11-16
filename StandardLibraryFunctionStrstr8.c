// It finds out the first occurrence of a given string in a string and print string after occurrence.
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "This is a test string";
    char *ptr = strstr(str, "test");
    if (ptr != NULL) {
        printf("Substring found at index: %ld\n", ptr - str);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}
