#include<stdio.h>
int main(){
    int n, p=1;
    printf("enter a no: ");
    scanf("%d",&n);
    if(n<2){
        printf("neither prime nor composite\n");
        return 0;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            p=0;
            break;
        }
    }
    if(p==1) printf("its a prime no.\n");
    else printf("its not a prime no.\n");
    return 0;
}
