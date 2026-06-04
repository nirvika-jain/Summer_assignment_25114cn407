#include<stdio.h>
int main(){
    int n, t1=0, t2=1, next;
    printf("enter term position: ");
    scanf("%d", &n);
    
    if(n == 1) { printf("0\n"); return 0; }
    
    for(int i=3; i<=n; i++){
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("term %d is %d\n", n, t2);
    return 0;
}
