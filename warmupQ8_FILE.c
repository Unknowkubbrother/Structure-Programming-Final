#include <stdio.h>
#include <string.h>
typedef struct
{
    char username[64];
    char password[64];
} Login;

Login Data[100];

void addRecord();
int readRecord();
int LoginUser(char *username,char *password,int count);
int changePassword(char *username,char *password,int count);

int main(){
    printf("1) Login\n2) Register\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1){
        int count = readRecord();
        char username[64],password[64];
        printf("Enter username: ");
        scanf("%s",username);
        printf("Enter password: ");
        scanf("%s",password);
        int check = LoginUser(username,password,count);
        if(check==1){
            printf("Login successful\n");
            printf("Do you want to change password? (1/0): ");
            int ch;
            scanf("%d",&ch);
            if(ch==1){
                printf("Enter new password: ");
                scanf("%s",password);
                int check = changePassword(username,password,count);
                if(check==1){
                    printf("Password changed successfully\n");
                }
                else{
                    printf("Password change failed\n");
                }
            }
        }
        else{
            printf("Login failed\n");
        }
    }else if(choice==2){
        addRecord();
    }
    return 0;
}

int changePassword(char *username,char *password,int count){
    FILE *fptr;
    fptr=fopen("DataUser.dat", "wb");
    for(int i=0;i<count;i++){
        if(!strcmp(Data[i].username,username)){
            strcpy(Data[i].password,password);
            fwrite(&Data[i], sizeof(Login), 1, fptr);
            return 1;
        }
    }
    fclose(fptr);
    return 0;
}

int LoginUser(char *username,char *password, int count){
    for(int i=0;i<count;i++){
        if(!strcmp(Data[i].username,username) && !strcmp(Data[i].password,password)){
            return 1;
        }
    }
    return 0;
};

void addRecord(){
    int people = readRecord();
    Login cs;
    FILE *fptr;
    fptr=fopen("DataUser.dat", "ab");
    printf("Enter username: ");
    scanf("%s",cs.username);
    printf("Enter password: ");
    scanf("%s",cs.password);
    for(int i=0;i<people;i++){
        if(!strcmp(Data[i].username,cs.username)){
            printf("Username already exists\n");
            return;
        }
    }
    fwrite(&cs, sizeof(Login), 1, fptr);
    fclose(fptr);
    printf("Data saved successfully\n");
}

int readRecord(){
    FILE *fptr;
    fptr=fopen("DataUser.dat", "rb");
    int i=0;
    while(fread(&Data[i], sizeof(Login), 1, fptr))
    {
        i++;
    }
    fclose(fptr);
    return i;
}