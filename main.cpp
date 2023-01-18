#include <iostream>
#include <cstring>

#define MAXL 100

int main() {
    char s[MAXL];
    int l;

    printf("\nTask 1. Enter string and remove 1st symbol\n");
    printf("Enter string:");
    gets(s);
    l = strlen(s);
    for (int i = 0; i < l; i++) {
        s[i] = s[i+1];
    }
    printf("Result string: %s\n", s);

    printf("\nTask 2. Mirror string\n");
    printf("Enter string:");
    gets(s);
    l = strlen(s);
    char s2[MAXL];
    for (int i = 0; i<l; i++) {
        s2[l-1-i] = s[i];
    }
    s2[l] = s[l];
    printf("Result string: %s\n", s2);


    return 0;
}
