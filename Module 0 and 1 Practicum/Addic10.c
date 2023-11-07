//Made by Muhammad Rafly Abdillah @17:30 Practicum 1

#include <stdio.h>
#include <math.h>

int main(){
    long tenadic_num; scanf("%ld", &tenadic_num);
    int reg_num; scanf("%d", &reg_num);
    
    if(reg_num>0 && reg_num<=9){
        if(tenadic_num * reg_num%10==1){
            printf("yes, ...%ld in 10-adics is equal to 1/%d, very nice indeed", 
			tenadic_num, reg_num);
        }
        else printf("well, turns out that ...%ld in 10-adics is unfortunately not equal to 1/%d", 
		tenadic_num, reg_num);
    }
    
    else if (reg_num<0 && reg_num>-10){
        if((tenadic_num+abs(reg_num))%10==0){
            printf("Look!, ...%ld in 10-adics is equal to %d!", 
			tenadic_num, reg_num);
        }
        else printf("Hmm, it seems that ...%ld in 10-adics is sadly not equal to %d", 
		tenadic_num, reg_num);
    }
}
