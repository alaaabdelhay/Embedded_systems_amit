#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char words[50][50];
    int i = 0, j = 0, k = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        } else {
            words[k][j++] = str[i];
        }
    }
    words[k][j] = '\0';

    printf("Reversed words string: ");
    for (i = k; i >= 0; i--) {
        printf("%s", words[i]);
        if (i != 0)
            printf(" ");
    }
    printf("\n");

    return 0;
}
