#include <stdio.h>

int linearSearch(int *arr, int n, int item){
    int i = 0;
    for(i=0; i<n; i++){
        if(arr[i] == item){
            return i;
        }
    }

    return -1;
}

void main(){
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);

    printf("Enter the values: ");
    int arr[n];
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int item;
    printf("Enter the number to search : ");
    scanf("%d", &item);

    int pos = 0;
    pos = linearSearch(arr, n, item);
    if(pos != -1){
        printf("position of the number is : %d.", pos);
    }
    else{
        printf("Element not found.");
    }

    printf("\n");
}