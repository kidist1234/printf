#include "main.h"

int _printf(const char *format, ...){
  int size=0;
  va_list list;
  int i;
  int conCounter = 0;

  va_start(list, format);
  if(format == NULL)
    return(-1);
  for(i = 0; format && format[i] != '\0'; i++){
    if (format[i] == '%'){
      if(format[i+1] != '%'){
	conCounter += 1;
	size += conv_handler(format[i+1], conCounter-1, list);
	i += 1;
      }else{
	_putchar('%');
	i += 1;
	continue;
      }
        
    }else{
      _putchar(format[i]);
      size++;     
   }
  }
  va_end(list);
  return (size);
}
