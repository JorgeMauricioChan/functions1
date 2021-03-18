#include<stdio.h>


/* create a function that returns 0 if both have the same length and 1 if is different. */
int checkLenght(char string0[100],char string1[100]);
int main(void){

char string0[100], string1[100];
printf("Input the string: ");
scanf("%s",&string0);
printf("\nInput the second string: ");
scanf("%s",&string1);

checkLenght(string0,string1);	
	

}

int checkLenght(char string0[100],char string1[100]){
	
	int i, j, count0=0, count1=0;
	
	
	while(string0[count0] != '\0'){
		
		count0++;
	}
	i = count0 - 1;
	
	while(string1[count1] != '\0'){
		
		count1++;
	}
	j = count1 - 1;
	
	if (i = j){
		return 0;
	}else{
		return 1;
	}
	
	
	
}
