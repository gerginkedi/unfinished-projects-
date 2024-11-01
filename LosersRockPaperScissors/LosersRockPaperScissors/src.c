#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include <string.h>


void toUpperCase(const char input[], char output[]) {
	for (int i = 0; input[i] != '\0'; i++) {
		output[i] = toupper(input[i]);
	}
	output[strlen(input)] = '\0';
}

int main() {

	bool index1 = 1;
	bool indexRock = 0;
	bool indexPaper = 0;
	bool indexScissors = 0;
	char value[100];
	char upperValue[100];

	printf("%s", "welcome to the rock paper scissors game: \n \n");
	printf("just choose ROCK PAPER or SCISSORS \n \n");


	fgets(value, sizeof(value), stdin);
	toUpperCase(value, upperValue);
	
	indexRock = strcmp(upperValue, "ROCK");
	indexPaper = strcmp(upperValue, "PAPER");
	indexScissors = strcmp(upperValue, "SCIOSSORS");


	if (indexRock == 1 || indexPaper == 1 || indexScissors == 1)
	{
		index1 = 0;
	};

	while (index1 == 1)
	{
		printf("just write ");
	};

}