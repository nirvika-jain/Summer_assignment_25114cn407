#include<stdio.h>
int main(){
    int start, end;
    printf("enter range (start end): ");
    scanf("%d %d", &start, &end);
    
    for(int n=start; n<=end; n++){
        if(n<2) 
        continue;
        int p=1;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                p=0;
                break;
            }
        }
        if(p==1) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
