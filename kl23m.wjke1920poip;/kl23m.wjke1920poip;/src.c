#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
	char number[10];
	char sumNumber[3];
	char sum = 0;
	int nuummmm = 0;
	//atoi omere zumzum
	printf("%s", "please enter a number \n");
	scanf_s("%s", number, 10);
	
	nuummmm += number[0] - '0';
	nuummmm += number[1] - '0';
	nuummmm += number[2] - '0';
	nuummmm += number[3] - '0';



	
	

	printf("%d", nuummmm);



}