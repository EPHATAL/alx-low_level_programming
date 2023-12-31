#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int square(int n, int val);
int _sqrt_recursion(int n);
int check_prime(int n, int othrn);
int is_prime_number(int n);
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s);
char *move_past_star(char *s2);
int inception(char *s1, char *s2);
int wildcmp(char *s1, char *s2);

#endif/*MAIN_H*/
