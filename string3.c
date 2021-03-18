#include<stdio.h>

int checkLenght(char string0[100]);
int sameCharacter(char string1[100], char string2[100]);

int main(void){
	
char string1[100],string2[100];
int n1;

printf("Enter the string: ");
scanf("%s",&string1);
printf("Enter the second string: ");
scanf("%s",&string2);
sameCharacter(string1,string2);
	
	
	
}

int sameCharacter(char string1[100], char string2[100]){
	
	int n1=0, i;
	char letter;
	
	n1 = checkLenght(string1);
	
	while(i<n1){
		
		if(string1[i] != string2[i]){
			return 0;
		}else{
			return 1;
		}
	}
	
	
	
}

int checkLenght(char string0[100]){
	
	int i, count0=0;
	
	
	while(string0[count0] != '\0'){
		
		count0++;
	}
	i = count0;
	return i;

}
