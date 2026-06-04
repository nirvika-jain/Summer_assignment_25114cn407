#include<stdio.h>
int main(){
    int a, b, x, y;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    x = a;
    y = b;
    while(y != 0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    
    int lcm = (a * b) / x;
    printf("LCM is %d\n", lcm);
    return 0;
}
