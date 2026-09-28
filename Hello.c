#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char ex[49];
    int x = 0, y, z;
    printf("Enter an expression: ");
    scanf("%48s", ex);
    size_t ed = strlen(ex) - 1;
    for (int i = 0; i <= ed; i++) {
        if (isdigit((unsigned char)i)) {
            x = x * 10 + (i);
        }
        else {
            break;
        }
    }