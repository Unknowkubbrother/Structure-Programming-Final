#include <stdio.h>

int recursiveMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        int max = recursiveMax(arr, size - 1);
        return (arr[size - 1] > max) ? arr[size - 1] : max;
    }
}

int recursiveMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        int min = recursiveMin(arr, size - 1);
        return (arr[size - 1] < min) ? arr[size - 1] : min;
    }
}



int main(){
    int arr[] = {10,2,3,4,5,6,7,1,8,9};
    printf("Max => %d",recursiveMax(arr,10));
    printf("\nMin => %d",recursiveMin(arr,10));
}

