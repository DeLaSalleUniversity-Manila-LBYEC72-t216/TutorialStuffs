#include <stdio.h>
#include <stdlib.h>

#include "formula1.h"
#include "formula2.h"



int main() {
	
	char choice;	
	while( choice != 'q' ){
	puts("Enter selection:");
	puts("a: Formula 1");
	puts("b: Formula 2");
	puts("q: Quit");
	scanf(" %c", &choice);

	if (choice == 'a'){
			formulaOne();
	}
	else if(choice == 'b'){
			formulaTwo();
	}
	else if(choice == 'q'){
		break;
	}
	else {
		puts("Invalid");
	}
					
	} // ENDWHILE
	system("PAUSE");
	return 0;
}
