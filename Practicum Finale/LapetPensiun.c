//made by Muhammad Rafly Abdillah @Practicum Finale

#include <stdio.h>

int main(){
	int T; scanf("%d", &T);
	
	for(int x = 0; x < T; x++){
		int N, M; scanf("%d%d", &N, &M);
    	int arr[N][N];
	
    	for (int i = 0; i < N; i++) {
      	  for (int j = 0; j < N; j++) {
        	    scanf("%d", &arr[i][j]);
        	}
   		}
   		
		for(int a = 0; a < abs(M-4); a++){
			for (int i = 0; i < N / 2; i++) {
        		for (int j = i; j < N - 1 - i; j++) {
            		int temp = arr[i][j];
            		arr[i][j] = arr[N - 1 - j][i];
            		arr[N - 1 - j][i] = arr[N - 1 - i][N - 1 - j];
            		arr[N - 1 - i][N - 1 - j] = arr[j][N - 1 - i];
            		arr[j][N - 1 - i] = temp;
        		}
    		}
		}	

    	for (int i = 0; i < N; i++) {
       		for (int j = 0; j < N; j++) {
            	printf("%d ", arr[i][j]);
        	}
        	printf("\n");
    	}	
	}
}

