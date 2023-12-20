#include <stdio.h>
#include <math.h>

/*
	Kevin Kinney's project for CS-261:
	program calculates and prints the nth number in the 
	fibonacci sequence, with n being an integer given by
	the user. The program will continuously prompt the
	user for input until it recieves a 0, in which case
	the program stops. The exception to this are 
	negative inputs (in which case the program will ask
	for another input) and non-integer values (which
	causes the program to break).
*/
int main() {

	// calc golden ratio constant
	double goldRatio = (1+sqrt(5))/2;
	// initialize variables
	int input;
	int fib;

	// main loop
	do {
		input = -1;
		// get input
		while (input < 0) {
			printf("Value: ");
			scanf("%d", &input);
		}

		// calc and print fibonacci number
		fib = (pow(goldRatio, input)-(-pow(goldRatio,-input)))/sqrt(5);
		printf("Fibonacci number %d is %d\n\n", input, fib);

	} while(input != 0);
	
	return 0;
}