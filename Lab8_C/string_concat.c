#include <stdio.h>
#include "stdlib.h"
#include "string.h"

int main() {
    int n, m;
    char c;
    printf("Enter the length of the first string:\n");
    scanf("%d", &n);
    char *s1 = malloc(n + 1);
    if (s1 == NULL) {
        perror("Memory allocation error");
        return 1;
    }
    printf("Enter the first string:\n");
    scanf("%c", &c);
    for (int i = 0; i < n; i++) {
        scanf("%c", &c);
        *(s1 + i) = c;
    }
    *(s1 + n) = '\0';

    printf("Enter the length of the second string:\n");
    scanf("%d", &m);
    char *s2 = malloc(m + 1);
    if (s2 == NULL) {
        perror("Memory allocation error");
        return 1;
    }
    printf("Enter the second string:\n");
    scanf("%c", &c);
    for (int i = 1; i <= m; i++) {
        scanf("%c", &c);
        s2[i - 1] = c;
    }
    *(s2 + m) = '\0';
    s2 = realloc(s2, n + m);
    if (s2 == NULL) {
        perror("Memory allocation error");
        return 1;
    }
    strcpy(s1 + n, s2);
    printf("%s", s1);
    return 0;
}
