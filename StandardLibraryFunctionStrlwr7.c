// It returns string characters in lowercase
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char a[10] = "PRINCE";
    for (int i = 0; i < strlen(a); i++) {
        a[i] = tolower(a[i]);
    }
    printf("%s", a);

    return 0;
}
