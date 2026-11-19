#include <stdio.h>

int main()
{

	int s, ns;

	ns = 0;

	while((s = getchar()) != EOF){
		if(s == '\n'){
			++ns;
		}
	}	
	printf("%d\n", ns);
	
}
