#include <stdio.h>
#include <string.h>

int main() {
    char text[200], str[20], str1[20];
    
    printf("Enter the main text: ");
    fgets(text, sizeof(text), stdin);
    
    printf("Enter the string to be deleted: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the string to be replaced: ");
    fgets(str1, sizeof(str1), stdin);

    int text_len = strlen(text);
    int str_len = strlen(str);
    int i = 0, j = 0;
    char result[200]; 
    int result_len = 0;

    for (i = 0; i < text_len; i++) {
        int found = 0;

     
        for (j = 0; j < str_len; j++) {
            if (text[i + j] != str[j]) {
                break;
            }
        }

        if (j == str_len) {
            for (j = 0; j < strlen(str1); j++) {
                result[result_len++] = str1[j];
            }
            i += (str_len - 1);
            found = 1;
        }

        if (!found) {
            result[result_len++] = text[i];
        }
    }

    result[result_len] = '\0';

    printf("New text: %s\n", result);

    return 0;
}
