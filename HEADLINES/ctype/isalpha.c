//==========https://tw.gitbook.net/c_standard_library/c_function_isalpha.html==========//
//example：int isalpha(int c);      檢查是否為字母


#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '	';
   int var4 = ' ';
    
   if( isalpha(var1) )
   {
      printf("var1 = |%c| is an alphabet", var1 );
   }
   else
   {
      printf("var1 = |%c| is not an alphabet", var1 );
   }
   if( isalpha(var2) )
   {
      printf("var2 = |%c| is an alphabet", var2 );
   }
   else
   {
      printf("var2 = |%c| is not an alphabet", var2 );
   }
   if( isalpha(var3) )
   {
      printf("var3 = |%c| is an alphabet", var3 );
   }
   else
   {
      printf("var3 = |%c| is not an alphabet", var3 );
   }
   if( isalpha(var4) )
   {
      printf("var4 = |%c| is an alphabet", var4 );
   }
   else
   {
      printf("var4 = |%c| is not an alphabet", var4 );
   }
   
   return(0);
}