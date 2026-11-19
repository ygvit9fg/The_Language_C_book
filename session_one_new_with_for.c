#include <stdio.h>

#define MIN 0
#define MAX 400
#define STEP 20

/* Learn about define for numbers that working as a logical contants */


int main()
{
	float farn;

	for(farn = MAX ; farn >= MIN ; farn -= STEP){

		printf("%.2f\t %.2f\n", farn , (farn - 32) * (5.0/9.0));
	}
}

