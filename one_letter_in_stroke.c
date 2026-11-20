#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, lt, status;
	status = OUT;
	
	while((c = getchar()) != EOF){
		putchar(c);
		if(c == ' ' || c == '\t' || c == '\n'){
			status = OUT;
			putchar('\n');	
		}
		else if (status == OUT){
			status = IN;
		}
		
	}
}
