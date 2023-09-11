#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    
	return 0;
}
