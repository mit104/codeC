#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("nhap so a: \n");
	scanf("%d", &a);
	printf("nhap so b: \n");
	scanf("%d", &b);
	if ( a > b){
		printf("\n so lon nhat la: %d", a);
		printf("\n so nho nhat la: %d", b);
	} else {
		printf("\n so lon nhat la: %d", b);
		printf(" \nso nho nhat la: %d", a);
	}
	
	int x, y;
	printf("\nnhap vao so x:  \n");
	scanf("%d", &x);
		printf("\nnhap vao so  y:  \n");
	scanf("%d", &y);
	if ( y == 0){
		printf("khong co ket qua\n");
	} else {
		printf("ket qua la: %d", x/y);
	}
	
	return 0;
}
