#include<stdio.h>
void Suma(int array[],int n); //Prototype

int main(void){
	
int a[] = {8,2,3,0,7}; //The array
int n = 5;	// the lenght of the array
Suma(a,n); //Function giving the parameters

return 0; //A good programming practice xd
}
//Our function that adding all the elements into array
void Suma(int array[],int n){
	int i,suma=0; //Local variables
	
	for (i=0;i<n;i++){ // For crossing the array
		suma = suma + array[i]; // Adding the array values
		printf("%d\n",array[i]); //Printing the array values
	}
	printf("%i",suma); //Printing the total
	
}








