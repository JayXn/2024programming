//https://tw.gitbook.net/c_standard_library/c_function_isupper.html//
//example：int isupper(int c)       該函數檢查傳遞的字符是否是大寫字母。


#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'M';
   int var2 = 'm';
   int var3 = '3';
    
   if( isupper(var1) )
   {
      printf("var1 = |%c| is uppercase character", var1 );
   }
   else
   {
      printf("var1 = |%c| is not uppercase character", var1 );
   }
   if( isupper(var2) )
   {
      printf("var2 = |%c| is uppercase character", var2 );
   }
   else
   {
      printf("var2 = |%c| is not uppercase character", var2 );
   }   
   if( isupper(var3) )
   {
      printf("var3 = |%c| is uppercase character", var3 );
   }
   else
   {
      printf("var3 = |%c| is not uppercase character", var3 );
   }
   
   return(0);
}