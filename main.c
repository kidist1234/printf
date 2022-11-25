#include <limits.h>
#include <stdio.h>
#include "main.h"

/*
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  /*    int len;
         int len2; */
    int len3;
    /*
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    */
    len3=_printf("%!\n");
    /*printf("%i\n",len);
    printf("%i\n",len2); */
 printf("%i",len3);
    return (0);
}
