#include <stdio.h>

void upperCase(char *arr){
    int i = 0;
    while(arr[i] != '\0'){
        if(arr[i] >= 97){
            arr[i] -= 32;
        }

        i++;
    }

    printf("Upper Case String : %s\n", arr);
}


int main(){
    int n; 
    printf("Enter the size : ");
    scanf("%d", &n);


    char str[n];
    printf("Enter the String : \n");
    scanf("%s", str);

    upperCase(str);

    return 0;
}