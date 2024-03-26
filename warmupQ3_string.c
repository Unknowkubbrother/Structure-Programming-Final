#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 0;
    int n=0,sum=0;
    char str[100], neww[100], word[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter a word to search: ");
    gets(word);
    for(int i=0;str[i] != '\0';i++){
        for(int j=0;word[j] != '\0';j++){
            if(str[i] == word[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            neww[n] = str[i];
            n++;
        }else{
           
            flag = 0;
        }
    }
    neww[n] = '\0';
    int num = 0;
    for(int i=0;word[i] != '\0';i++){
        num = 0;
       for(int j=0;str[j]!='\0';j++){
           if(word[i] == str[j]){
                num++;
           }
       }
       printf("Char of '%c' in Number is %d\n", word[i], num);
    }
    printf("New string after removing '%s' is '%s'", word, neww);
}