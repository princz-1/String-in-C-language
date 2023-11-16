// It return string character in uppercase.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char a[10] = "prince";
    for (int i = 0; i < strlen(a); i++) {
        a[i] = toupper(a[i]);
    }
    printf("%s", a);
    return 0;
}
