#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int X1, Y1, X2, Y2;
    
    scanf("%d %d", &X1, &Y1);
    scanf("%d %d", &X2, &Y2);

    int distancex = abs(X2 - X1);
    int distancey = abs(Y2 - Y1);

    double PreED = pow(X2 - X1, 2) + pow(Y2 - Y1, 2);
    double EuclideanDistance = sqrt(PreED);
    int isEuclideanInteger = (EuclideanDistance == (int)EuclideanDistance);
    int ManhattanDistance = distancex + distancey;

    if (EuclideanDistance == 0) {
        printf("You are living in Mystico!\n");
    } 
    else if (isEuclideanInteger) {
        printf("You are %d km away from Mystico!\n", (int)EuclideanDistance);
        printf("Go Straight for %d km!\n", (int)EuclideanDistance);
    }
    else {
        printf("You are %d km away from Mystico!\n", ManhattanDistance);
        
        if (X2 > X1) {
            printf("Go East for %d km, ", distancex);
        } 
        else if (X2 < X1) {
            printf("Go West for %d km, ", distancex);
        }

        if (Y2 > Y1) {
            printf("Then Go North for %d km!\n", distancey);
        } 
        else if (Y2 < Y1) {
            printf("Then Go South for %d km!\n", distancey);
        }
    }
    return 0;
}
