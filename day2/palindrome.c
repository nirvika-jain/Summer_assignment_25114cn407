#include<stdio.h>
int main(){
    int ori,rev=0,rem,n;
    printf("enter a number:");
    scanf("%d",&n);
    ori=n;
    while(ori!=0){
        rem=ori%10;
        rev=rev*10+rem;
        ori=ori/10;
    }
    if(n==rev){
        printf("A PALINDROME NO.");
    }
    else{
        printf("NOT A PALINDROME NO.");
    }
    return 0;
}