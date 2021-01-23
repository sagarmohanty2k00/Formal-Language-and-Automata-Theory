#include <stdio.h> 

void compareStrings(char* x, char* y) 
{ 
    int unequal = 0;

    while (*x != '\0' || *y != '\0') { 
        if (*x == *y) { 
            x++; 
            y++; 
        } 
  
        else if ((*x == '\0' && *y != '\0') 
                 || (*x != '\0' && *y == '\0') 
                 || *x != *y) { 
            unequal = 1; 
            printf("Strings are not equal\n"); 
            return;
        } 
    } 
  
    printf("Strings are Equal\n");
} 

int main(void) 
{ 
    int length;
    printf("Enter the Size : ");
    scanf("%d", &length);

    char str1[length];
    printf("Enter the String1 : ");
    scanf("%s", str1); 

    char str2[length];
    printf("Enter the String2 : ");
    scanf("%s", str2);
   
    compareStrings(str1, str2); 
    return 0; 
} 