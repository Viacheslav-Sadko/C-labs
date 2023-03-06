#include "stdio.h"

void perfect_num(){
	int num, loop, res=0;
	printf("Num is: ");
	scanf("%d", &num);
	loop = num;
	while(loop > 0){
		if((num % loop == 0) && loop != num)
			res += loop;
		loop--;
	}
	if(num == res)
		printf("This num is excelent\n");
	else
		printf("Thim num isn`t excelent\n");

}
