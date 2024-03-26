#include <stdio.h>
typedef struct{
    char name[30];
    int x;
} data;

int main(){
    FILE *file;
    char ch;
    int a;
    data cs;
    file = fopen("dataQ10.txt", "r"); // a w r
    ch = fgetc(file);
    fputc((char)ch,file);
    fprintf(file,"%d %c",a,ch);
    fscanf(file,"%d %c",&a,&ch);
    fwrite(&cs,sizeof(data),1,file);
    fread(&cs,sizeof(data),1,file);
    fseek(file,1,5); // 0 เริ่มต้น 1 ปัจจุบัน 2 ตัวสุดท้าย
    ftell(file); //ตำแหน่งปัจจุบัน
    fclose(file);
    rewind(file); //กลับจุดเริ่มต้น

    // อ่านค่าจากไฟล์ตัวอักษรทีละตัว
    while ((ch = fgetc(file)) != EOF) {
        
        
    }

    ch = getchar();
    while(ch!='A'){
        ch = getchar();
        fputc((char)ch,file);
    }

    return 0;
}