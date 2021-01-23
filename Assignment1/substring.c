#include <stdio.h>

int substring(char *str, char *sub, int n, int m, int i, int j, int numberOfSub){
    if(j == n){
        return numberOfSub;
    }
    if(sub[i] != str[j]){
        i = 0;
    }
    if(sub[i] == str[j] && sub[i+1] == '\0'){
        numberOfSub++;
        i = 0;
    }

    int a = 0;
    if(sub[i] == str[j]){
        a = substring(str, sub, n, i+1, j+1, numberOfSub);
    }
    else{
        a = substring(str, sub, n, i, j+1, numberOfSub);
    }
    return (numberOfSub + a);
}


int main(){
    int n, m; 
    printf("Enter the size of string : ");
    scanf("%d", &n);
    printf("Enter the size of substring : ");
    scanf("%d", &m);

    char str[n];
    char sub[m];

    printf("Enter the String : \n");
    scanf("%s", str);
    printf("Enter the substring : \n");
    scanf("%s", sub);

    substring(str, sub, n, m, );

    return 0;
}