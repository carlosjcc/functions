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

void cough (void);

 int main(void)
 {
 	// cough three times
	for (int i = 0; i < 3; ++i)
	{
		cough();
		
	}
 	
 
 	return 0;
 }

/**
* Coughs once.
*/

void cough(void)
{
	printf("cough\n");
}
