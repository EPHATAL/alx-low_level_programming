#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*check_num - check - digit
*@str: str array
*
*Return: Always 0 (Success)
*/

int check_num(char *str)
{
/*Declaring variable*/
unsigned int count;

count = 0;
while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}
count++;
}
return (1);
}

/**
*main - print program name
*@argc: arguments number
*@argv: arguments array
*
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
/*Declaring variable*/
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc) /*Goes through the whole array*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
sum += str_to_int;
}
/*condition if one of the number contains symbols thatare not digit*/
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}
