#include<stdio.h>



int maximo(int number1, int number2, int number3);




int main (void){
int num1,num2,num3;
printf("give me the first number\n");
scanf("%d",&num1);

printf("give me the second\n");
scanf("%d",&num2);

printf("give me the third number\n");
scanf("%d",&num3);
maximo(num1,num2,num3);
}


int maximo(int number1, int number2, int number3){
	if (number1 > number2 && number1 > number3){
		return number1;
	}else if(number2 > number1 && number2 > number3){
		return number2;
	}else{
		return number3;}}
 
