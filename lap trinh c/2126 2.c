#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   double radius;

    
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &radius);
    double pi = 3.14159265359;
    double circumference = 2 * pi * radius;
    double area = pi * radius *  radius;
    printf("Chu vi hinh tron: %f\n", circumference);
    printf("Dien tich hinh tron: %f\n", area);

	return 0;
}
