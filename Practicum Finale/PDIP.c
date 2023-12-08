//made by Muhammad Rafly Abdillah
#include <stdio.h>
#include <math.h>

int main(){
	int N, H; scanf("%d%d", &N, &H);
	int weights[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &weights[i]);
	}
	
	int totalWeight = 0;
	for(int i = 0; i < N; i++){
		totalWeight += weights[i];
	}
	
	double tempWeight = totalWeight;
	double tempTime = H;
	
	double energyNeeded = ceil(tempWeight/tempTime);
	
	for(int i = 0; i < N; i++){
		if((int)energyNeeded < weights[i]){
			energyNeeded = weights[i];
		}
	}
	printf("%d", (int)energyNeeded);
}


