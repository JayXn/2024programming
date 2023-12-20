//https://tw.gitbook.net/c_standard_library/c_function_iscntrl.html//
//example：int iscntrl(int c);      該函數是否傳遞的字符是控製字符。     


#include <stdio.h>
#include <ctype.h>

int main ()
{
   int i = 0, j = 0;
   char str1[] = "all a about 	 programming";
   char str2[] = "tutorials yiibai";
  
   /* Prints string till control character a */
   while( !iscntrl(str1[i]) ) 
   {
      putchar(str1[i]);
      i++;
   }
  
   /* Prints string till control character 
 */
   while( !iscntrl(str2[j]) ) 
   {
      putchar(str2[j]);
      j++;
   }
   
   return(0);
}