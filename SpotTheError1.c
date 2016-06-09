#include <stdio.h>
#include <stdlib.h>

int main(){
	char choice;

	
	while( choice != 'q' ){
		
	puts("Enter selection:");
	puts("a: Formula 1");
	puts("b: Formula 2");
	puts("q: Quit");
	scanf("%c", &choice);

	switch(choice){
		case 'a':
			puts("Compute Formula 1");
			break;
		case 'b':
			puts("Compute Formula 2");
			break;
		case 'q':
			continue;
		default:
				puts("Invalid");
	   }
	}
	system("PAUSE");
	return 0;
}
