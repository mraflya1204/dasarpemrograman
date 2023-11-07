#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    
    for(int i=1; i<=N; i++){
        if(i%10!=0 && i%42!=0){
        printf("%d\n", i);
        }
        if(i%42==0){
            printf("ERROR");
            exit(0);
        }
    }
}