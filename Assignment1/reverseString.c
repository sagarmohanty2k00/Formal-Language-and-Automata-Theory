#include <stdio.h>

void reverseString(char *str, int n){
    int i = 0;
    char temp;
    for(i=0; i<n/2; i++){
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }

    printf("reverse string : %s\n", str);
}


int main(){
    int n; 
    printf("Enter the size : ");
    scanf("%d", &n);


    char str[n];
    printf("Enter the String : \n");
    scanf("%s", str);

    reverseString(str, n);

    return 0;
}