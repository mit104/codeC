#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    double radius;
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%lf", &radius);
    double pi = 3.14159265359; 
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;
    printf("Chu vi hình tròn: %.2lf\n", circumference);
    printf("Dien tich hinh tron: %.2lf\n", area);
	return 0;
}
