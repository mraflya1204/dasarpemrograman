#include <stdio.h>

int main (){
    int N; scanf("%d", &N);
    
    if (N>0 && N<10){
        printf("satuan");
    }
    else if (N>=10 && N<100){
        printf("puluhan");
    }
    else if (N>=100 && N<1000){
        printf("ratusan");
    }
    else if (N>=1000 && N<10000){
        printf("ribuan");
    }
    else if (N>=10000 && N<100000){
        printf("puluhribuan");
    
}
}