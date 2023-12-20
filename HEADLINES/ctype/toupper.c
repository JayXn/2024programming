//https://tw.gitbook.net/c_standard_library/c_function_toupper.html//
//example：int toupper(int c)       這個函數小寫字母轉換為大寫。

#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 0;
   char c;
   char str[] = "Yiibai Point ";
   
   while(str[i])
   {
      putchar (toupper(str[i]));
      i++;
   }
   
  return(0);
}