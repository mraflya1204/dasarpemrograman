//made by Muhammad Rafly Abdillah @Practicum Finale
#include <stdio.h>

int gcdSearch(int X, int Y){
	if(X == 0){
		return Y;
	}
	if(Y == 0){
		return X;
	}
	if(X == Y){
		return X;
	}
	if(X > Y){
		return gcdSearch(X-Y, Y);
	}
	return gcdSearch(X, Y-X);
}

int countDigits(int gcd){
  if (gcd == 0){
    return 1;
  }
  
  int count = 0;
  while (gcd){
    count++;
    gcd /= 10;
  }
  return count;
}

int main(){
	int X, Y; scanf("%d %d", &X, &Y);
	int gcd = gcdSearch(X, Y);
	int numOfDigits = countDigits(gcd);
	
	if(numOfDigits % 2 == 0){
		printf("Yey brankas berhasil dibuka :D\n");
	}
	else printf("Yah gagal :(");
}
