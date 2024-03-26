#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char fstr[31] , str[31];
     if (fgets(fstr, 30, stdin) == NULL) {
        fprintf(stderr, "Error reading reference string.\n");
        return 1;
    }
    // Remove trailing newline from reference string (if present)
    fstr[strcspn(fstr, "\n")] = '\0';
    int flen = strlen(fstr);
    char store[32][31];
    int count = 0;
    while(1){
        if (fgets(str, 30, stdin) == NULL) {
            fprintf(stderr, "Error reading reference string.\n");
            return 1;
        }
        // Remove trailing newline from input string (if present)
        str[strcspn(str, "\n")] = '\0';
        if(!strcmp(str , "end_of_string")){
            break;
        }
        int len = strlen(str);
        if(len < flen && len <= 30){
            store[count][strcspn(store[count], "\n")] = '\0';
            strcpy(store[count++] , str);
        }
    }

    for(int i = 0; i < count; i++){
        printf("%s",store[i]);
        if(i != count-1){
            printf("\n");
        }
    }


    return 0;
}