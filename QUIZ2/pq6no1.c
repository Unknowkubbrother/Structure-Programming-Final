#include <stdio.h>
// #include <stdlib.h>

typedef struct
{
    char name[100];
    char pass[64];
    int score[5];
} student;

student cs[64] = {
    {"nut", "pass_1", {10, 20, 30, 40, 50}},
    {"benz", "pass_2", {60, 70, 80, 90, 100}}};

void addrecord(student *cs1, int N);
int readData();
int Login(char *username,char *pass,int);
int changePassword(char *username,char *Newpass,int);

int main()
{
    int check;
    int person = readData();
    printf("Register or Login (1/0): ");
    scanf("%d", &check);
    if (check)
    {
        int N;
        scanf("%d", &N);
        student MainCs[N];
        char dummy;
        while ((dummy = getchar()) != '\n');
        char *piece;
        for (int i = 0; i < N; i++)
        {
            char all[100];  
            gets(all);
            piece = strtok(all, ": ");
            strcpy(MainCs[i].name, piece);
            piece = strtok(NULL, " ");
            strcpy(MainCs[i].pass, piece);
            for (int j = 0; j < 5; j++)
            {
                scanf("%d", &MainCs[i].score[j]);
            }
            getchar();
        }
        addrecord(&MainCs, person);
    }else{
        char name[100];
        char pass[100];
        scanf("%s %s",name,pass);
        if(Login(name,pass,person)){
            int checkPass;
            printf("change password  YES (1) /NO (0) :");
            scanf("%d",&checkPass);
            if(checkPass){
                char newpass[64];
                scanf("%s",newpass);
                if(changePassword(name,newpass,person)){
                    printf("Changed Password");
                }
            }
        }else{
            printf("incorrect");
        }
    }
    return 0;
}

int readData()
{
    int count = 0;
    while (cs[count].name[0] != NULL)
    {
        count++;
    }
    return count;
}

void addrecord(student *cs1, int N)
{
    for (int i = 0; i < N; i++)
    {
        strcpy(cs[i].name, cs1[i].name);
        strcpy(cs[i].pass, cs1[i].pass);
        for (int j = 0; j < 5; j++)
        {
            cs[i].score[j] = cs1[i].score[j];
        }
    }
}

int Login(char *username,char *pass,int count){
    for(int i=0;i<count;i++){
        if(!strcmp(cs[i].name,username) && !strcmp(cs[i].pass,pass)){
            return 1;
        }
    }
    return 0;
}

int changePassword(char *username,char *Newpass,int count){
    for(int i=0;i<count;i++){
        if(!strcmp(cs[i].name,username)){
            strcpy(cs[i].pass,Newpass);
            printf("newpass => %s\n",cs[i].pass);
            return 1;
        }
    }
    return 0;
}