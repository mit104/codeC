#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char rollno[16];
    int age;
    char name[50];
    char address[200];
    printf("Nhap ma sinh vien: ");
    scanf("%s", rollno);
    printf("Nhap tuoi: ");
    scanf("%d", &age);
    printf("Nhap ten: ");
    scanf(" %s", name); 
    printf("Nhap dia chi: ");
    scanf(" %s", address); 
    printf("1. %s, %d, %s, %s\n", name, age, rollno, address);
    printf("| Ten           | Tuoi    | Ma SV     | Dia chi        |\n");
    printf("=============================\n");
    printf("| %s | %d | %s | %s |\n", name, age, rollno, address);
    printf("=============================\n");
	return 0;
}
