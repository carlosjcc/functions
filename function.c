/**
 * function-1.c
 *
 * Carlos Corrales
 * carloscorralesch@gmail.com
 *
 * First implementation of fuction.
 * It prints 3 words the simplest way.
 */

 #include <stdio.h>

void cough (int n);

 int main(void)
 {
 	// cough three times
	
 	cough(5);
 
 	return 0;
 }

/**
* Coughs n times.
*/
void cough(int n)
{
	for (int i = 0; i < n; ++i)
	{		
		printf("cough\n");		
	}
	
}
