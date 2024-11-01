#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	char userInput;
	char ifUserEnteredAnworngValue;
	bool index1 = 1;
	
	printf("welcome to the rock, paper scissor. \n \n");
	printf("0 is starts the game \n");
	printf("1 is explains the game \n");
	printf("2 is closes the program \n \n");
	scanf_s("%s", &userInput, 19);
	 
		
	while (index1 == 1)
	{

		if (userInput == '0')
		{
			index1 = 0;

		}
		else if (userInput == '1')
		{
			index1 = 0;
		}
		else if (userInput == '2')
		{
			
			index1 = 0;
		}
		else
		{
			printf("%s", "please enter a correct value \n");
			printf("%c", userInput);
			printf("%s", " is not a true value \n");
			scanf_s("%c", &userInput, 1); //burada girdigin karakter sayisi kadar ust kismindaki metin ifadesini tekrar ediyor.
										  //mesela at yazarsaniz 2 kere tekrar ediyor ve ilk tekrar edisinde a sonrakinde ise t harfini gosteriyor
			
		};

	};
		

	
	
	if (userInput == '0')
	{
		printf("oyun basladi");
	};
	
	if (userInput == '1')
	{

		printf("oyun aciklamasi");
	};

	if (userInput == '2')
	{
		printf("oyun kapandi");
		return  0;
	};

}