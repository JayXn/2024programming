//https://tw.gitbook.net/c_standard_library/c_function_tolower.html//
//example：int tolower(int c)       這個函數轉換大寫字母為小寫。


#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 0;
   char c;
   char str[] = "YIIBAIS POINT";

   while( str[i] ) 
   {
      putchar(tolower(str[i]));
      i++;
   }
 
   return(0);
}