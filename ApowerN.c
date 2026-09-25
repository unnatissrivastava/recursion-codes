#include<stdio.h>
int a;
int power(int n){
    if(n == 0) return 1;
    return a*power(a, n-1);
}
int main(){
    int a = 2, n = 5;
    power(a,n);
    return 0;
}
