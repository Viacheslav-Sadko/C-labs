#include "stdio.h"

void fibonachi_numbers(){
	int num, p = 1, d_p = 0, loop;
	printf("N: ");
	scanf("%d", &loop);
	loop -= 2;
	while(loop > 0){
		num = p + d_p;
		d_p = p;
		p = num;
		//printf("num %i\n", num);
	        loop--;	
	}
	printf("Num on N - seria : %i ", num);
}
