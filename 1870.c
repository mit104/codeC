#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, d;
	printf ("nhap a: \n");
	scanf("%f", &a);
	printf ("nhap b: \n");
	scanf("%f", &b);
	printf ("nhap c: \n");
	scanf("%f", &c);
	d= b*b-4*a*c;
	if (d<0) {
		printf("phuowng trinh vo nghiem");
	} else if (d>0){
			printf("phuowng trinh co nghieem x1= %f", (-b+sqrt(d))/(2*a));
		printf("phuowng trinh co nghieem x2= %f", (-b-sqrt(d))/(2*a));
	}else{
		printf("phuowng trinh co nghieem kep x1=x2= %f", -b/(2*a));
		
	}

	return 0;
}
