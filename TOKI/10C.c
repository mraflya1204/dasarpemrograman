#include <stdio.h>

int reverse(int x){
	int y = x;
	int z = 0;
	
	while(y>0){
		z = (z*10)+(y%10);
		y = y/10;
	}
	
	return z;
}

int main(){
	int a, b; 
	int c = 0;
	scanf("%d%d", &a, &b);
	
	a = reverse(a);
	b = reverse(b);
	
	c = a+b;
	c = reverse(c);
	
	printf("%d\n", c);
}
