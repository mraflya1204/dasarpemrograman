//made by Muhammad Rafly Abdillah @Practicum Finale
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double wm, wh; scanf("%lf%lf", &wm, &wh);
	double xr, yr, wr, hr; scanf("%lf%lf%lf%lf", &xr, &yr, &wr, &hr);
	double xu, yu; scanf("%lf%lf", &xu, &yu);
	
	double distance = sqrt(pow(abs(xr - xu), 2) + pow(abs(yr - yu), 2));
	
	if(abs(xr-xu) <= hr && abs(yr-yu) <= wr){
		printf("KAMU SUDAH SAMPAI");
	}
	else printf("%.2lf METER LAGI", distance);
}

