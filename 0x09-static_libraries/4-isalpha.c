#include "main.h"
/**
*_isalpha - alphabetic charater
*@c: the character to be checked
*Return: 1 if c is a letter and return 0 if its not
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') \\ (c >= 'A' && c <= 'Z'));
}
