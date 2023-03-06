#include "stdio.h"

void divisor_counter(){
	int num, loop, c = 0;
	printf("Input X:");
	scanf("%d", &num);
	loop = num;
	while(loop>0){
		if( num % loop == 0){
			c++;
			printf("Num: %d\n", loop);
		}
		loop--;
	}
	printf("The num with 0 remainder: %i\n", c);

}
