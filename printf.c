#include "main.h"

int _printf(const char *format, ...){
  unsigned size=0;
  va_list list;
  int i;
  int conCounter = 0;

  va_start(list, format);
  if(format == NULL)
    return(-1);
  for(i = 0; format && format[i] != '\0'; i++){
    if (format[i] == '%'){
      if(format[i+1] == '\0'){
        size = -1;
        return (size);
      }
      if(format[i+1] != '%'){
	int conv_size;
	conCounter += 1;
	conv_size = conv_handler(format[i+1], conCounter-1, list);
	if(conv_size < 0){
	  _putchar('%');
	  size += 1;
	}else{
	  size += conv_size;
        i += 1;
	}
      }
      else{
	_putchar('%');
	i += 1;
	size++;
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
