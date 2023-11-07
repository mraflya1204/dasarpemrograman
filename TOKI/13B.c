#include <stdio.h>

void mountain(int N){
	if (N==1){
		printf("*\n");
	}
	
	else if (N!=1){
		mountain(N-1);
		
		for(int i = 0; i<N; i++){
			printf("*");
		}
		
		printf("\n");
		
		mountain(N-1);
	}
}

int main(){
	int N; scanf("%d", &N);
	mountain(N);
}
