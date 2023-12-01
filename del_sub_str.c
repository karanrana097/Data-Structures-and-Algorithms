#include <stdio.h>
#include <string.h>

int main() {
    char text[200], str[20];
    
    printf("Enter the main text: ");
    fgets(text, sizeof(text), stdin);
    
    printf("Enter the string to be deleted: ");
    fgets(str, sizeof(str), stdin);

    int text_len = strlen(text);
    int str_len = strlen(str);
    int i = 0, j = 0;

    for (i = 0; i < text_len; i++) {
        int found = 0;

        // Check if the substring exists at the current position
        for (j = 0; j < str_len; j++) {
            if (text[i + j] != str[j]) {
                break;
            }
        }

        if (j == str_len) {
            // Substring found, skip it
            i += (str_len - 1);
            found = 1;
        }

        if (!found) {
            printf("%c", text[i]);
        }
    }

    return 0;
}
