#include <stdio.h>
#include <stdlib.h>

/* Declarations of functions */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_function();

int (*arr[5]) (int a, int b);

int main (void)
{
  int interger1 = 6;
	int interger2 = 3;
	int option;
  
  arr[0] = add;
  arr[1] = subtract;
  arr[2] = multiply;
  arr[3] = divide;
	arr[4] = exit_function;
  
  do {
		printf("\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit)");
    scanf("\n%d",&option);
  } while(option<0 || option>4);
  
  while (option <= 4 && option >= 0){
    printf("\nx = %d", (*arr[option]) (interger1,interger2));
    printf("\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit)");
    scanf("\n%d",&option);
  }
return 0;
}



/* Function definitions */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b){ printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b){ printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b){ printf ("Dividing 'a' and 'b'\n"); return a / b; }
int exit_function(){exit(0);return 0;}