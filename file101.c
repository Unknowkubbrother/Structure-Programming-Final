#include <stdio.h>
int main(){
    FILE *fp;
    char text;
    char n;
    fp = fopen("file101.txt","r");
    n = fgetc(fp);
    while(n!=EOF){
        n = fgetc(fp);
        printf("%c",n);
    }
    fclose(fp);
}