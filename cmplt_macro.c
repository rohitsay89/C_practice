/* Complement of a character using Macro */
#include <stdio.h>

#define cmp(h)	~h                                         /* Macro for complement of a character */

int main(){    
    char c = 0;                                            /* Declare a character */
		printf("Program for complement of a number \n");
		printf("Enter a character: \n");
		scanf("%c", &c);
		printf("The character inserted is: %c \n", c);         /* Print the charater */
		//printf("The orginal digit is: %d \n", c);         
		printf("The ASCII value is: 0x%X \n", c);              /* Print the ASCII value */
		printf("complement Hex value is : 0x%02X \n", cmp(c)); /* Value in HEX is : */
		printf("complement decimal value is : %d \n", cmp(c)); /* Value in decimal is: */
		return 0;
}