// A string is an array of characters terminated by null character arrays.

// some strings handling functions: from <string.h>
/* strlen(str) for length
   strcpy(str1,str2) to copy string
   strcat(str1,str2) to concatenate
   strcmp(s1,s2) to compare
   strchr(str, ch) find character
   strstr(str,sub) find substring */
   // #include <stdio.h>
   #include <string.h>
   
   // int main(){
   //  char str[] = "Aryan";
   //  int len = strlen(str);
   //  printf("%d", len);
   //  return 0;
   // }

#include <stdio.h>
#include <string.h>

int main(){
   int i,len =1;
   char str[100];
   printf("Enter your string: ");
   fgets(str);


   return 0;
}