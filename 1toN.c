#include<stdio.h>
int num(int n){
    if(n == 0){
        return;
    }
    num(n-1);
    printf("%d", n);
}
int main(){
    num(100);
    return 0;
}
