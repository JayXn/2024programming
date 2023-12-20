/*https://tw.gitbook.net/c_standard_library/ctype_h.html*/

//example：int isalnum(int c);      檢查是否為數字或字母
int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '	';
    
   if( isalnum(var1) )
   {
      printf("var1 = |%c| is alphanumeric", var1 );
   }
   else
   {
      printf("var1 = |%c| is not alphanumeric", var1 );
   }
   if( isalnum(var2) )
   {
      printf("var2 = |%c| is alphanumeric", var2 );
   }
   else
   {
      printf("var2 = |%c| is not alphanumeric", var2 );
   }
   if( isalnum(var3) )
   {
      printf("var3 = |%c| is alphanumeric", var3 );
   }
   else
   {
      printf("var3 = |%c| is not alphanumeric", var3 );
   }
   return(0);
}














