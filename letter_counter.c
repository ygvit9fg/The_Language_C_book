#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, str, ch, lt, state;
	state = OUT;
	str = ch = lt = 0;
	while((c = getchar()) != EOF){
		++ch;
		if(c == '\n'){
			++str;
		}
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			++lt;
		}
		
	}
	printf("chars: %d\nstrings: %d\nletters: %d\n", ch, str, lt);
}
