#include <stdio.h>

int main(){
    int input[101];
    
    int N = 0;
    while(scanf("%d", &input[N])!= EOF){
        N++;
    }
    
    for(int i = (N-1); i>=0; i--){
        printf("%d\n", input[i]);
    }
    return 0;
}