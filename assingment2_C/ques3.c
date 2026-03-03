// Write programs to implement string related concepts such as sorting of a string, finding its length, reversing, concatenation, comparing two strings etc.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Aryan";
    char str2[100] = " Singh";
    char str3[100] = "Aryan Singh";
    char joinedStr[200];
    int len;

    strcpy(joinedStr, str1); // copied the string...
    strcat(joinedStr, str2); // joined the strings...

    printf("The joined String is: %s\n", joinedStr);

    len = strlen(joinedStr);
    printf("The Length of joined string is %d\n", len); // eheheh I have used strlen in this piece of code...

    if(strcmp(str3,joinedStr)==0){
        printf("The strings are identical...");
    }
    else{
        printf("The Strings are different...");
    }

    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        int temp = str3[i];
        str3[i] = str3[j];
        str3[j] = temp;
    }

    printf("Reversed String is: %s\n", str3);

    int n = strlen(str2);
    char temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str2[j] > str2[j + 1]) {
                temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str2);
    return 0;
}