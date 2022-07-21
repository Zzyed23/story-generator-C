
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	char name [30];
	char color [30];
	int age [20];
	
	srand(time(0));
	int random = rand() %5;
	
	printf("what is your name?\n");
	scanf("%s", &name);
	
	printf("How old are you?\n");
	scanf("%s", &age);
	
	printf("What is your favorite color?\n");
	scanf("%s", &color);
	
	printf("%s is an amazing person\n", name);
	printf("They drive a %s car and it is brand new off the lot\n", color);
	printf("The %s car cost about %d. The Time he purchased it at gave him a special deal. \n", color, time);
	printf("%s is only %s years old and they are taking their first computer science course\n", name, age);
	printf("%s is tired and wants to go to bed", name);
	
	
	
	
	return 0;
}