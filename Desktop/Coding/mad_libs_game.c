#include <stdio.h>
#include <string.h>

int main (){
	char noun[50] = " ";
	char verb[50] = " ";
	char adjective1[50] = " ";
	char adjective2[50] = " ";
	char adjective3[50] = " ";

	/* 
	fgets is the best tool to read string input since scanf can't read spaces
	!! Attention !! fgets reads the whole line of input, including the enter.
	to get rid of that last input, use the strlen function setting the sequel
	to a null terminator character '\0';
	*/

	printf("Enter a noun (animal or person): ");
	fgets(noun, sizeof(noun), stdin);
	noun[strlen(noun) - 1] = '\0';

	printf("Enter an action (gerund verb): ");
	fgets(verb, sizeof(verb), stdin);
	verb[strlen(verb) - 1] = '\0';

	printf("Enter a negative adjective: ");
	fgets(adjective1, sizeof(adjective1), stdin);	
	adjective1[strlen(adjective1) - 1] = '\0';

	printf("Enter a positive adjective: ");
	fgets(adjective2, sizeof(adjective2), stdin);
	adjective2[strlen(adjective2) - 1] = '\0';

	printf("Enter another positive adjective: ");
	fgets(adjective3, sizeof(adjective3), stdin);
	adjective3[strlen(adjective3) - 1] = '\0';

	// Story time !!

	printf("\nWhen I got home, I was feeling %s, but I was met with a %s %s\n", adjective1, verb, noun);
	printf("That sight lit up a %s flame in my heart. I went to bed feeling %s", adjective2, adjective3);

	return 0;
}