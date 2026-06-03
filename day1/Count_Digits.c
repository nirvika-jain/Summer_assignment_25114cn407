#include<stdio.h>
int main(){
    int n, digit=0;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n==0){
        digit=1;
    }
    while(n!=0){
        n=n/10;
        digit=digit+1;
    }
    printf("Digits = %d\n", digit);
    return 0;
}
