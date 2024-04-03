/*
 * Lab_1_ex4.c
 *
 *  Created on: Jan 31, 2024
 *      Author: jsmirni
 */
#include <stdio.h>
#define RATE .35
int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	double start, end, total, cash_back;

	printf("MILEAGE REIMBURSEMENT CALCULATOR \n");

	printf("Enter beginning odometer reading: \n");
	scanf("%lf", &start);

	printf("Enter ending odometer reading: \n");
	scanf("%lf", &end);

	total = end - start;
	cash_back = total* RATE;
	printf("You traveled %.2f. At $ 0.35 per mile, your reimbursement is %.2f.", total, cash_back);

	return 0;
}



