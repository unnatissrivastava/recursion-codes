void num(int n){
    if(n == 0) return;
    printf("%d", n);
    num(n-1);
}
int main(){
    num(40);
    return 0;
}
