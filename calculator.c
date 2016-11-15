#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, y;
	char  p;
	
	printf("Input calculation:");
	scanf("%f %c %f", &x, &p, &y);
	
	switch(p)
	{ 
	   case '+':
	   printf("%f", x+y);
	   break;
	   case '-':
	   printf("%f", x-y);
	   break;
	   case '*':
	   printf("%f", x*y);
	   break;
	   case '/':
	   printf("%f", x/y);
	}
}