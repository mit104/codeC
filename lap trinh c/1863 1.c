#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int a;
    
    printf("Nhap vào mot so a: ");
    scanf("%d", &a);
    
    int a2 = a * a;
    int a3 = a * a * a;
    int a4 = a * a * a * a;
    
    printf("a^2 = %d\n", a2);
    printf("a^3 = %d\n", a3);
    printf("a^4 = %d\n", a4);
	return 0;
}
