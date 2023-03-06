#include "stdio.h"
#include "./headers/delay.h"
#include "./headers/perfect_num.h"
#include "./headers/divisor_counter.h"
#include "./headers/finding_perfect_numbers.h"
#include "./headers/fibonachi_numbers.h"

int main(){
	int choose = 1;
	while(choose != 0){
		printf("0) Вийти\n1) Визначити чи є число досконалим\n2) Визначити скільки серед перших N чисел є досконалих\n3) Знайти кількість дільників для даного числа\n4) Визначити з серії Фібоначі N-не число\nПункт: \b");
		scanf("%d", &choose);
		switch(choose){
			case 0:
			break;
			case 1:
				perfect_num();
				delay();
			break;
			case 2:
				finding_perfect_numbers();
			break;
			case 3:
				divisor_counter();
			break;
			case 4:
				fibonachi_numbers();
			break;

			default:
				printf("Такого номера немає");
			break;
		}
	}
}
