#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 #include <stdio.h>

int main() {
    char rollno[16];
    int age;
    char name[50];
    char address[200];

    // Nh?p th�ng tin sinh vi�n
    printf("Nh?p m� sinh vi�n: ");
    scanf("%s", rollno);

    printf("Nh?p tu?i: ");
    scanf("%d", &age);

    printf("Nh?p t�n: ");
    scanf(" %[^\n]s", name); // �?c chu?i k? c? kho?ng tr?ng

    printf("Nh?p d?a ch?: ");
    scanf(" %[^\n]s", address); // �?c chu?i k? c? kho?ng tr?ng

    // Hi?n th? th�ng tin sinh vi�n theo d?nh d?ng d�ng
    printf("1. %s, %d, %s, %s\n", name, age, rollno, address);

    // Hi?n th? th�ng tin sinh vi�n theo d?nh d?ng b?ng
    printf("=============================\n");
    printf("| Ten           | Tuoi    | Ma SV     | Dia chi        |\n");
    printf("=============================\n");
    printf("| %-13s | %-6d | %-9s | %-15s |\n", name, age, rollno, address);
    printf("=============================\n");

    return 0;
}

 return 0;
}
