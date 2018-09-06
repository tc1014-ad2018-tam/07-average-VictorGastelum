/*
   This program will give you the average depending on how many numbers you give

   Author: Victor Manuel Gastelum Huitzil
   Date: 05/09/18
   e-mail: A01411985@itesm.mx 
*/
#include<stdio.h>

int main(){
	
	// Declare the variables
	int n;
	int average;
	int i;
	int k;
	
	// I start the loop with a "do"
	do{
		printf("Give me a number: ");
		scanf("%i", &n);
		k+=n; // I store in "k" the numbers that the user inputs
		i++; // I store the amounts of times that the user inputs a number
	}while(n!=0); // The loop will stops when the user enters zero in the program
	
	i-=1; // I remove -1 to "i", so that the last given value (zero) does not affect the average
	average=k/i; // I do the operations
	printf("\n%i", average);
return 0;
}
