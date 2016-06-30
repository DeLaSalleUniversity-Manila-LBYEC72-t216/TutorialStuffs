#include <stdio.h>
#include <stdlib.h>

#define LENGTH 5

int main()
{
	int message[] = {10, 20, 30, 40, 50};
	int *ptr  = message;

	// Display elements
	for(int i = 0; i < LENGTH; i++){
		printf("%i \n", *ptr++);
	}

	return 0;
}
