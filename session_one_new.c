#include <stdio.h>

int main()
{
	float celsium, farengeyt;

	printf("Value in celsium: ");
	scanf("%f", &celsium);
	
	printf("Your farengeyt value: ");
	farengeyt = (celsium * 1.8) + 32;
	printf("%.2f\n", farengeyt);
}
