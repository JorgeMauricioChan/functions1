#include <stdio.h>

//Write a C function to multiply all the numbers in a list

void multiplication(int array[],int n);

int main(void){
int array[] = {8,2,3,-1,7};
int n = 5;
multiplication(array,n);


	return 0;
}

void multiplication(int array[],int n){
	int i,multi=array[0];
	
	for(i=1;i<n;i++){
		multi = multi * array[i];
	}
	
	printf("%i",multi);
	
}
