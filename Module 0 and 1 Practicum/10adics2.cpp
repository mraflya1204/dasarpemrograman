#include <stdio.h>
#include <math.h>

int main(){
	long N; scanf("%ld", &N);
	int M; scanf("%d", &M);
	
	if(M>0 && M<10){
		if(N*M%10==1){
			printf("yes, ...%ld in 10-adics is equal to 1/%d, very nice indeed", N, M);
		}
		else ("well, turns out that ...%ld in 10-adics is unfortunately not equal to 1/%d", N, M);
	}
	else if(M<0 && M>=-9){
		if((N+abs(M))%10==0){
			printf("Look!, ...%ld in 10-adics is equal to %d!", N, M);
		}
		else ("Hmm, it seems that ...%ld in 10-adics is sadly not equal to %d", N, M);
	}
	else return 0;
}




//6667, + -> 6667x3%10 -> 20001,
//9991, + abs(reg num) %10 -> 0 
