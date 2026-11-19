#include <stdio.h>

int main()
{
	printf("Table of equivalences\n");
	int start_number , last_number, step;
	float celsius , farengeyt;

	start_number = 0;
	last_number = 400;
	step = 20;
	

	celsius = start_number;
	while (celsius <= last_number){
	
		farengeyt = (celsius * 1.8) + 32;
		printf("%.2f\t %.2f\n", celsius, farengeyt);
		celsius += step;
	}

}
