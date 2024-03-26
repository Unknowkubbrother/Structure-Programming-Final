#include <stdio.h>
#include <ctype.h>

int main(){
    int N;
    scanf("%d",&N);
    char arr[N][100];
    char dummy; // to clear the newline character after scanf
    while ((dummy = getchar()) != '\n' && dummy != EOF);
    for(int i=0;i<N;i++){
        gets(arr[i]);
    }
    int checkNodigit = 0;
    for(int i=0;i<N;i++){
        checkNodigit = 0;
        int len = strlen(arr[i]);
        for(int j=0;arr[i][j]!='\0';j++){
            int check = (int)arr[i][j];
            if(check >= (int)'0' && check <= (int)'9'){
                int min = 100;
                for(int k=0;arr[i][k]!='\0';k++){
                    int check2 = (int)arr[i][k];
                    if(check2 >= (int)'0' && check2 <= (int)'9'){
                        if(arr[i][k]-'0' < min){
                            min = arr[i][k]-'0';
                        }
                    }
                }
                if(arr[i][j]-'0' == min){
                    printf("(%c) ",arr[i][j]);
                }else{
                    printf("%c ",arr[i][j]);
                }
            }else{
                checkNodigit++;
            }
        }
        if(checkNodigit == len){
            printf("No digit char");
        }
        printf("\n");
    }
    return 0;
}