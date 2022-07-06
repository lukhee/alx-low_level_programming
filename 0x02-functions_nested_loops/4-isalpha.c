#include "main.h"

/**
 * _isalpha -> check if the character is alphabet
 * @c: a charaacter argument
 * Return: return  if  lower and 0 is nnot
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'));
}
