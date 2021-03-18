#include<stdio.h>

void reverseString(char string[100]);
/* create a function that receives a string and print the inverted string */
int main(void){
	
char string0[100];

printf("Input the string: ");
scanf("%s",&string0);
	
reverseString(string0);	

	return 0;}

void reverseString(char string[100]){
	
	char reverse[100];
	int i, j, count = 0;
	printf("\n String after the reverse mode: %s \n",string);
	
	while (string[count] != '\0'){
		
		count++;}
	j = count - 1;
	
	for (i = 0; i < count; i++){
		reverse[i] = string[j];
		j--;}
	printf("The reverse string is: %s\n",reverse);}
	

