#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number = 0;
	float num_float = 0.0;
	int number1;
	int num_int1;
	int num_int;
	int prev;
	while(1)
	{
		num_float =(float)number;
		num_int = (int)num_float;
	
		if(prev < number)
		{
			printf("smallest number = %d \n", number1);
			break;
		}
		if(num_int != number)
		{
			number1 = number;
			num_int1 = num_int;
		}
		
		prev= number;
		number--;
	}
	return 0;
}