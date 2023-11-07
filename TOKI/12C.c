#include <stdio.h>
#include <math.h>

int compositeFunc(int A, int B, int K, int x){
	if(K!=0){
		return abs((A * compositeFunc(A, B, K-1, x) + B));
	}
	else return x;
}

int main(){
	int A, B, K, x; scanf("%d%d%d%d", &A, &B, &K, &x);
	printf("%d", compositeFunc(A, B, K, x));
}
