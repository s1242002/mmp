#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	char s[20];
	printf("What is your name?\n");
	scanf("%s", s);
	printf("Hello, %s!\n", s);
	
	int a, b;
	printf("Rolling the dice...\n");
	
	srand((unsigned)time(NULL));
	a = rand()%6 + 1;
	printf("Die 1: %d\n", a);
	
	b = rand()%6 + 1;
	printf("Die 2: %d\n", b);
	
	int sum = a+b;
	printf("Total value: %d\n", sum);
	
	if(sum > 7){
		printf("You win\n");
	}
	else printf("You lost\n");
	
	return 0;
}