int sum(int n){
    if(n==0) return 0;
    return n%10+sum(n/10);
}
int main(){
    printf("sum of digits = %d", sum(223));
    return 0;
}
