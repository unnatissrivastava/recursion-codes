#include<stdio.h>
int a;
int power(int n){
    if(n == 0) return 1;
    return a*power(a, n-1);
}
