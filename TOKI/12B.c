#include <stdio.h>

int fact(int N){
	if(N>=1){
		if(N%2==0){
			return (N/2*fact(N-1));
		}
		else return(N*fact(N-1));
	}
	else return 1;
}

int main(){
	int N; scanf("%d", &N);
	printf("%d", fact(N));
}
