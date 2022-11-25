#include "main.h"
/**
 * conv_handler - function that returns @size
 * @char_index: intiger
 * @list: va_list
 *
 * Return: return the size @size
 * otherwise -1
 */

int charPrint(int char_index, va_list list);
int StringrPrint(int char_index, va_list list);

/*<<<<<<< HEAD*/
int conv_handler(char c, int char_index, va_list list)
{
	int size = 0;

	if (c == 'c')
	{
		charPrint(char_index, list);
		size = 1;
	}
	else if (c == 's')
	{
		size = StringrPrint(char_index, list);
	}
	return (size);
/*=======*/

int conv_handler(char c, int char_index, va_list list)
{
int size = 0;

 /* int i; */
if (c == 'c')
{
size = charPrint(char_index, list);
/*>>>>>>> cb49af7ca641cec8217dbd00be28042acd5a2887*/
}
else if (c == 's')
{
size = StringrPrint(char_index, list);
}
else
{
/**
 * char *str  = va_arg(list, char *);
 * int sizeStr = 0;
 * printf("%s", str);
 * _putchar('%');
 * for(i = 0; str && str[i] != '\0'; i++){
 * _putchar(str[i]);
 * size = i;
 * }
 */
return (-1);
}
return (size);
}


/**
 * charPrint - prints only one character
 * Description: it prints the only character that is passed to the function
 * Return: returns 1 if it can print the char
 *         otherwise -1
 * @list: list of argument
 * @char_index: chracter index
 */




int charPrint(int char_index, va_list list)
{
int i;
if (char_index < 0)
	return (-1);

/*va_start(list, format); */
for (i = 0; i <= char_index + 1; i++)
{
	if (i == char_index)
	{
		_putchar(va_arg(list, int));
	}
}
/*va_end(list); */
return (1);
}

/**
 * StringrPrint - prints string
 * Return: returns size when it can print the strring
 *         otherwise -1
 * @list: the list of the arguments
 * @char_index: character index
 */




int StringrPrint(int char_index, va_list list)
{
int size = 0;
char *str;
int i;
int j;

if (char_index < 0)
return (-1);

/* va_start(list, format); */
for (i = 0; i <= char_index + 1; i++)
{
if (i == char_index)
{
/**
 * if(!va_arg(list, int)){
 * char *nullStr = "(null)";
 * printf("is on null statment");
 * for(k = 0; k < 6; k++){
 * _putchar(nullStr[k]);
 * }
 * return (6);
 * }
 */

str = va_arg(list, char *);
for (j = 0; str && str[j] != '\0'; j++)
{
size += 1;
_putchar(str[j]);
}
}
}
/* va_end(list); */
return (size);
}
