#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int day, month, year;
    printf("Nhap ngay (1-31): ");
    scanf("%d", &day);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);
    printf("Nhap nam (1900-2099): ");
    scanf("%d", &year);
        printf("%d/%d/%d\n", day, month, year);
    
	return 0;
}
