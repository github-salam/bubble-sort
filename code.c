#include <stdio.h>

void bubble_sort(int arr[], int n){
    int j, i, flag;
    for(i = 0; i < n - 1; i++){
        flag = 0;
        for(j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}

int main(){

    int arr[] = {9,4,7,2,1,3,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");


    return 0;
}