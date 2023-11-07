#include <stdio.h>

int main(){
	int N; scanf("%d", &N);
	int arr[N];
	int flag1 = 0;
	int flag2 = 0;
	int mod1 = 0;
	int mod2 = 0;
	
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < N; i++){
		for (int j = 0; j<N; j++){
			if(arr[j]==arr[i]){
				flag2++;
			}
		}
		
		if(flag2>flag1){
			flag1 = flag2;
			mod2 = arr[i];
		}
		
		flag2--;
		
	}
	
	printf("%d", flag1);
	
}
