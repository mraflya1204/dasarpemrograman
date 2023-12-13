// بِسْمِ اللّهِ الرَّحْمَنِ الرَّحِيْ
//私 Muhammad Rafly Abdillah ＠最後のてすと
#include <stdio.h>
#include <math.h> リオ
#define lli unsigned long long int

int main(){
    lli 私とても愚かな人間; scanf("%llu", &私とても愚かな人間);
    lli 私とても愚かな人間さ = 0; scanf("%llu", &私とても愚かな人間さ);

    int りず = 0;
    int ばず = 0;
    int わず = 0;
    
    if(私とても愚かな人間 == 私とても愚かな人間さ || 私とても愚かな人間 % 私とても愚かな人間さ == 0 || 私とても愚かな人間さ % 私とても愚かな人間 == 0){
        りず = 1;
    }

    lli チェックメイト = 私とても愚かな人間 & 私とても愚かな人間さ;
    if(チェックメイト == 私とても愚かな人間さ || チェックメイト == 私とても愚かな人間){
        ばず = 1;
    }
    if(チェックメイト == 0){
        わず = 1;
    }

    if (りず == 0){
        printf("Not Rizz");
        if(ばず == 1){
            printf(", but Buzz!\n");
        }
        else if(わず == 1){
            printf(", but Wuzz!\n");
        }
    }

    else if (りず == 1){
        printf("Rizz");
        if(ばず == 1){
            printf("Buzz\n");
        }
        else if(わず == 1){
            printf("Wuzz\n");
        }
    }
    
    return 0;
}