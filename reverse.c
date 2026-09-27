#include <stdio.h>
int reverse(){
    int n, digit;
    int rev = 0;
    int temp  = n;
    while(n>0){
        digit = temp%10;
        rev = rev*10+digit;
        temp /= 10;
    }
}
int main(){
    printf("%d", reverse((15678)));
    return 0;
}
  
