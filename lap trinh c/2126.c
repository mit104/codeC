#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int length, width;
    printf("Nhap chieu dai cua hinh chu nhat: ");
    scanf("%d", &length);
    
    printf("Nhap chieu reng cua hinh chu nhat: ");
    scanf("%d", &width);
    
    int area = length * width;
    int perimeter = 2 * (length + width);
    
    // In k?t qu? ra màn hình
    printf("Dien tich hinh chu nhat: %d\n", area);
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
	return 0;
}
