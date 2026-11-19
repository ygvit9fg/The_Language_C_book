#include <stdio.h>


int main()
{

	int c, victims;
	
	victims = 0;
	while ((c = getchar()) != EOF){

		if (c == '	' || c == ' ' || c == '\n')
			++victims;
	}
	printf("%d\n", victims);

}
