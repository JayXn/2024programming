#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdbool.h>

int main(){
  char a[1001];
  
  while(true){
    scanf("%s", a);
    if((a[0]-'0') == 0){
      break;
    }

    int od = 0;
    int even = 0;
    for(int i = 0 ; i < strlen(a) ; i++){
      if(i % 2 == 0){
        even = even + (a[i]-'0');
      }
      else{
        od = od + (a[i]-'0');
      }
    }


    int substraction = sqrt((od - even) * (od - even));


    if(substraction == 0 || substraction%11 == 0){
      for(int i = 0 ; i < strlen(a) ; i++){
        printf("%d", a[i]-'0');
      }
      printf(" is a multiple of 11.\n");
    }
    else{
      for(int i = 0 ; i < strlen(a) ; i++){
        printf("%d", a[i]-'0');
      }
      printf(" is not a multiple of 11.\n");
    }
  }
}


