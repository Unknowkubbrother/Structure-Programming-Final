#include <stdio.h>

typedef struct {
char name[16];
char surname[20];
int score[5];
float stotal;
} Student;
void readStudentData(Student *);
void printScore2(Student[],int);

int main(){
    int N;
    scanf("%d",&N);
    Student student[N];
    for(int i=0;i<N;i++){
        readStudentData(&student[i]);
    }
    printScore2(student,N);
    return 0;
}

void readStudentData(Student *student){
    scanf("%s %s",student->name,student->surname);
    for(int i=0;i<5;i++){
        scanf("%d",&student->score[i]);
    }
    student->stotal = 0;
    for(int i=0;i<5;i++){
        student->stotal += student->score[i];
    }
}

void printScore2(Student student[],int N){
    for(int i=0;i<N;i++){
        printf("%s %d\n",student[i].name,student[i].score[1]);
    }
}