#include <stdio.h>
#include <string.h>

// Function to remove characters from s1 that are present in s2
void squeeze(char s1[], char s2[]) {
    int i, j, k;
    int found;

    k = 0; // 'k' tracks the position where we keep "safe" characters

    // Iterate through every character in s1
    for (i = 0; s1[i] != '\0'; i++) {
        found = 0;

        // Check if s1[i] exists in s2
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                found = 1;
                break; // Found it! No need to check further
            }
        }

        // If the character was NOT found in s2, keep it
        if (found == 0) {
            s1[k] = s1[i];
            k++; // Move the "keep" index forward
        }
    }

    // Null-terminate the new shortened string
    s1[k] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter the main string: ");
    gets(str1); // Note: gets() is risky, usually fgets() is preferred, but simple for learning
    
    printf("Enter characters to remove: ");
    gets(str2);

    squeeze(str1, str2);

    printf("Resulting String: %s\n", str1);

    return 0;
}