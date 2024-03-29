#include <stdio.h>
#include <string.h>
typedef struct{
    char name[64];
    char phoneNumber[32];
}phonebook;
phonebook directory[50];
void addRecord(char *someone,char *pnumber);
char *serchphone(char *name);
int count = 0;

int main(){
    int round,i;
    int check;
    char ipname[64],number[32];
    scanf("%d",&round);
    for(i = 0;i < round;i++){
        addRecord(ipname,number);
    }
    scanf("%d",&check);
    char nameserch[check][64];
    for(i = 0;i < check;i++){
        scanf("%s",nameserch[i]);
    }
    for(int i=0;i<check;i++){
        char *result = serchphone(nameserch[i]);
        if(result){
           printf("%s",result);
        }else{
            printf("N/A");
        }
        if(i != check-1){
            printf("\n");
        }
    }
    return 0;
}
void addRecord(char *someone,char *pnumber){
    scanf("%s %s",directory[count].name,directory[count].phoneNumber);
    count++;
    // strcpy(directory[i].name,someone);
    // strcpy(directory[i].phoneNumber,pnumber);

}

char *serchphone(char *name){
    int i;
    for(i=0;i < 64;i++){
        if(!strcmp(directory[i].name,name)){
            return directory[i].phoneNumber;
        }
    }
    return NULL;
    
}
