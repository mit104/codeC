#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x1, x2, x3;
	x1 = 3;
	x2 = ++x1;
	x3 = x1++ + ++x1 - --x2 + 2;
	printf("\nx1 = %d, x2 = %d, x3 = %d", x1, x2, x3);
	
	return 0;
}
