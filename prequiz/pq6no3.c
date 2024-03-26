#include <stdio.h>

typedef struct {
char name[16];
char surname[20];
int score[5];
float stotal;
} Student;
void readStudentData(Student *);
void printMaxScore(Student *,int);

int main(){
    int N;
    scanf("%d",&N);
    Student student[N];
    for(int i=0;i<N;i++){
        readStudentData(&student[i]);
    }
    printMaxScore(student,N);
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

void printMaxScore(Student *student,int N){
    int M;
    scanf("%d",&M);
    int arr[M];
    int people[M];
    for(int i=0;i<M;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<M;i++){
        int max = 0;
        for(int j=0;j<N;j++){
            if(student[j].score[arr[i]-1] > max){
                max = student[j].score[arr[i]-1];
                people[i] = j;
            }

        }
        printf("%s %d",student[people[i]].name,max);
        if(i!=M-1){
            printf("\n");
        }
    }
}
