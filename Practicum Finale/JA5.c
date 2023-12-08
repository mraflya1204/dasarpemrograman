//made by Muhammad Rafly Abdillah @Practicum Finale
#include <stdio.h>

void fungsiPointer(long long int *a, long long int *b, long long int *c, long long int *d, long long int *e){
	*b = *a % *b;
	*d = *c * *d;
	*e = (*b + *d) % *e;
	printf("%lld\n", *e);
}

int main(){
	long long int a, b, c, d, e;
	int N; scanf(" %lld", &N);
	for(int i = 0; i < N; i++){
		scanf(" %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
		fungsiPointer(&a, &b, &c, &d, &e);
	}	
	return 0;
}
