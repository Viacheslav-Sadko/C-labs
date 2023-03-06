#include "stdio.h"

void finding_perfect_numbers(){
	int num=1, loop, res=0;
	//printf("Num is: ");
	//scanf("%d", &num);
	while(num<1000000){
		loop = num;
	while(loop > 0){
		if((num % loop == 0) && loop != num)
			res += loop;
		loop--;
	}
	if(num == res)
		printf("%d is excelent\n", num);
	//else
		//printf("Thim num isn`t excelent\n");
	
		res = 0;
		num++;
	}


}
