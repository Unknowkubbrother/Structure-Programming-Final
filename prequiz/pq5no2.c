#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int range = 0;
    gets(str);
    int N;
    scanf("%d",&N);
    char arr[N][100];
    char dummy; // to clear the newline character after scanf
    while ((dummy = getchar()) != '\n' && dummy != EOF);
    for(int i=0;i<N;i++){
        gets(arr[i]);
    }
    for(int i=0;str[i]!='\0';i++){
        int check = (int)str[i];
        if(check >= (int)'0' && check <= (int)'9'){
            range+= str[i]-'0';
        }
    }
    printf("%d\n",range);
    int sum = 0;
    for(int i=0;i<N;i++){
        sum = 0;
        for(int j=0;arr[i][j]!='\0';j++){
            int check = (int)arr[i][j];
            if(check >= (int)'0' && check <= (int)'9'){
                sum+= arr[i][j]-'0';
            }
        }
        if(sum == range){
            printf("%s\n",arr[i]);
        }
    }
}