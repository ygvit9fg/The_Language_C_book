#include <stdio.h>

int main()
{
	float farn;

	for(farn = 0 ; farn <= 400 ; farn += 20){

		printf("%.2f\t %.2f\n", farn , (farn - 32) * (5.0/9.0));
	}
}

