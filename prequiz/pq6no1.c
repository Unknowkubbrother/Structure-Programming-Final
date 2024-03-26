#include <stdio.h>
#include <string.h> 

typedef struct {
char name[64];
char phoneNumber[32];
} phoneBook;
phoneBook directory[50];
void addRecord(char *someone, char *pnumber);
char *searchPhone(char *name);

int count = 0;

int main(){
    int N;
    scanf("%d",&N);
    phoneBook mainBook[N];
    for(int i=0;i<N;i++){
        scanf("%s %s",mainBook[i].name,mainBook[i].phoneNumber);
    }
    for(int i=0;i<N;i++){
        addRecord(mainBook[i].name,mainBook[i].phoneNumber);
    }
    int M;
    scanf("%d",&M);
    char name[M][64];
    for(int i=0;i<M;i++){
        scanf("%s",name[i]);
    }
    for(int i=0;i<M;i++){
        char *result = searchPhone(name[i]);
        if(result){
           printf("%s",result);
        }else{
            printf("N/A");
        }
        if(i != M-1){
            printf("\n");
        }
    }

    return 0;
}

void addRecord(char *someone, char *pnumber){
    strcpy(directory[count].name,someone);
    strcpy(directory[count].phoneNumber,pnumber);
    count++;
};

char *searchPhone(char *name){
    for(int i=0;i<count;i++){
        if(strcmp(directory[i].name,name) == 0){
            return directory[i].phoneNumber;
        }
    }
    return NULL;
};
