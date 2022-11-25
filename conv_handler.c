#include "main.h"


int charPrint(int char_index, va_list list);
int StringrPrint(int char_index, va_list list);

int conv_handler(char c, int char_index, va_list list){
  int size = 0;
  if(c == 'c'){
    charPrint(char_index, list);
    size = 1;
  }
  else if(c == 's'){
    size = StringrPrint(char_index, list);
  }
  return (size);
}

int charPrint(int char_index, va_list list){
  int i;
  if(char_index < 0)
    return (-1);

  /**va_start(list, format); */
  for(i = 0; i <= char_index + 1; i++){
    if(i == char_index){
      _putchar(va_arg(list, int));
    }
  }
  /**va_end(list); */
  return (1);
}

int StringrPrint(int char_index, va_list list){
  int size = 0;
  char *str;
  int i;
  int j;
  if(char_index < 0)
    return (-1);

  /** va_start(list, format); */
   for( i = 0; i <= char_index + 1; i++){
    if(i == char_index){
      str = va_arg(list, char *);
      
      for(j = 0; str && str[j] != '\0';j++){
	size += 1;
	_putchar(str[j]);
      }
    }
  }
   /* va_end(list); */
  return (size);
}
