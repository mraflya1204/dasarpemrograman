#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int X1, Y1, X2, Y2; scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
    
    double manhattan = abs(X2-X1) + abs(Y2-Y1);
    double euclid = sqrt(pow(X2-X1, 2) + pow(Y2-Y1, 2));
    int manhattanCheck  = ceil(manhattan);
    int euclidCheck = ceil(euclid);
    
    if((Y2+Y1)==(X1+X2)){
        printf("You are living in Mystico!\n");
    }
    
    
    else if(euclid==euclidCheck){
        printf("You are %.0lf km away from Mystico!\n", euclid);
        printf("Go Straight for %.0lf km!\n", euclid);
    }
    
    else if(manhattan==manhattanCheck){
        printf("You are %.0lf km away from Mystico!\n", manhattan);
        
        if(X1>X2 && Y1>Y2){
        printf("Go West for %d km, Then Go South for %d km\n", abs(X2-X1), abs(Y2-Y1));
        }
        else if(X1<X2 && Y1>Y2){
        printf("Go East for %d km, Then Go South for %d km\n", abs(X2-X1), abs(Y2-Y1));
        }
        else if(X1>X2 && Y1<Y2){
        printf("Go West for %d km, Then Go North for %d km\n", abs(X2-X1), abs(Y2-Y1));
        }
        else if(X1<X2 && Y1<Y2){
        printf("Go East for %d km, Then Go North for %d km\n", abs(X2-X1), abs(Y2-Y1));
        }
    }
}
