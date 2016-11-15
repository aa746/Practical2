#include <stdio.h>

int main(void)
{
	int hour, minute;
	
	printf("Enter time in 24h format:");
	scanf("%d:%d", &hour, &minute);

	if (hour>12)
	{
		hour= hour-12;
	    minute= minute;	
		printf("Time in 12h format= %2.2d:%2.2d pm", hour, minute);
	}
	else 
	{	
        hour= hour;
	    minute= minute;
	    printf("Time in 12h format= %2.2d:%2.2d am", hour, minute);
	}	
}