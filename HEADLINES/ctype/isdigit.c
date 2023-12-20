///https://tw.gitbook.net/c_standard_library/c_function_isdigit.html//
//example：int isdigit(int c)       該函數是否傳遞的字符是十進製數字。


#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'h';
   int var2 = '2';
    
   if( isdigit(var1) )
   {
      printf("var1 = |%c| is a digit", var1 );
   }
   else
   {
      printf("var1 = |%c| is not a digit", var1 );
   }
   if( isdigit(var2) )
   {
      printf("var2 = |%c| is a digit", var2 );
   }
   else
   {
      printf("var2 = |%c| is not a digit", var2 );
   }
  
   return(0);
}