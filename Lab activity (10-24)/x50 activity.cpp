#include <stdio.h>

int main() {

int num, i;





printf("Enter a number :");
scanf("%d" , &num);
printf("Multiplecation table of %d:\n", num);




for (i = 1; i<=50; i++){
		printf("%d  x %d = %d:\n", num, i, num * i);
	
		
		
		
}
	return 0;
}