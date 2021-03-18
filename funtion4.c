#include <stdio.h> 
#include <string.h> 
int isPalindrome(char str[]);

int main(){ 
char string1[100];
printf("Input the string: ");
scanf("%s",&string1);
isPalindrome(string1); 
}

int isPalindrome(char str[]){ 
	int l = 0; 
	int h = strlen(str) - 1; 
	
	while (h > l) 
	{ 
		if (str[l++] != str[h--]) 
		{ 
			printf("%s is not Palindrome", str); 
			return 0; 
		}else{
			printf("%s is palindrome", str);
			return 1; 
		}
	} 
 
} 

