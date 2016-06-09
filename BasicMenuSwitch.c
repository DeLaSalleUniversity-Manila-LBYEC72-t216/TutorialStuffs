#include <stdio.h>
#include <stdlib.h>

void formulaOne(){
	puts("Compute Formula 1");
	puts("Formula 1: V = lwh");
}


void formulaTwo(){
	puts("Compute Formula 2");
}



int main(){

	char choice;
	
	while( choice != 'q' ){
	puts("Enter selection:");
	puts("a: Formula 1");
	puts("b: Formula 2");
	puts("q: Quit");
	scanf(" %c", &choice);

	switch(choice){
		case 'a':
			formulaOne();
			break;
		case 'b':
			formulaTwo();
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
