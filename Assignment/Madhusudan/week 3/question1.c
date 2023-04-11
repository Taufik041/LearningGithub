#include <stdio.h>
#include <string.h>

void remove_char(char *str, char ch);

int main() {
    char str[100], ch;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character you want to remove: ");
    scanf("%c", &ch);

    remove_char(str, ch);

    printf("String after removing '%c': %s", ch, str);

    return 0;
}

void remove_char(char *str, char ch) {
    int i, j;
    int len = strlen(str);

    for (i = j = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
