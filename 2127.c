#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b;
	printf("nhap so a: \n");
	scanf("%f", &a);
	printf("nhap so b: \n");
	scanf("%f", &b);
	if ( a==0){
		printf(" phuong trinh vo nghiem");
	} else {
		printf("phuong trinh co nghiem x = %f", -b/a);
	}
	return 0;
}
