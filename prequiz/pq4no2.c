#include <stdio.h>

int check(int A[],int B[],int length);

int main(){
    int N;
    scanf("%d",&N);
    int arr1[N];
    int arr2[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<N;i++){
        scanf("%d",&arr2[i]);
    }
    int checked = check(arr1,arr2,N);
    printf("%d\n",checked);
    for(int i=0;i<checked;i++){
        printf("%d ",arr2[i]);
    }
}

int check(int A[],int B[],int length){
    int count = 0;
    int index = 0;
    for(int i=0;i<length;i++){
        if(A[i] > B[i]){
            count++;
            B[index++] = i+1;
        }
    }
    return count;
};