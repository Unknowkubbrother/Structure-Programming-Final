#include <stdio.h>

int main() {
    FILE *file;
    int num1, num2;

    // เปิดไฟล์สำหรับเขียน
    char filename[15] = "data";
    sprintf(filename, "%s.txt", filename);
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("ไม่สามารถเปิดไฟล์ได้");
        return 1;
    }

    // เขียนข้อมูลลงในไฟล์
    int check = fprintf(file, "%d %d", 10, 20);
    while (check != EOF)
    {
       check = fprintf(file, "%d %d", 10, 20);
    }
    

    // ปิดไฟล์
    fclose(file);

    // เปิดไฟล์สำหรับอ่าน
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("ไม่สามารถเปิดไฟล์ได้");
        return 1;
    }

    // อ่านข้อมูลจากไฟล์
    fscanf(file, "%d %d", &num1, &num2);

    // ปิดไฟล์
    fclose(file);

    // พิมพ์ผลลัพธ์
    printf("ค่าที่อ่านได้: %d %d", num1, num2);

    return 0;
}