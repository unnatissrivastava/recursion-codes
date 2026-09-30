#include<stdio.h>
long long tower(int n, int from, int to, int aux){
    if(n==1){
        printf("move disk %d from rod %d to %d", n, from, to);
        return 1;
    }
    long long count = tower(n-1, from, aux, to);
    printf("moving disk %d from rod %d to %d", n, from, to);
    count++;
    count += tower(n-1, aux, to, from);
    return count;
}
