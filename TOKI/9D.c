#include <stdio.h>

int main(){
    int N, M; scanf("%d%d", &N, &M);
    int arr[N][M];
    
    for(int i=0; i < N; i++){
        for (int j=0; j < M; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int j=0; j < M; j++){
        for (int i = N-1; i >= 0; i--){
            printf("%d ", arr[i][j]);
        }
        
        printf("\n");
    }
    
}
