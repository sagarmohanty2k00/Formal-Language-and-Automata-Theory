#include <stdio.h>

void sort(int *arr, int n){
    int i=0, j=0;
    int temp = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}