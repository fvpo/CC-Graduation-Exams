#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float b, h, a;
    float ratb, rath;
    scanf("%f%f%f", &b, &h, &a);
    ratb=b/a;
    rath=h/a;
    int x = (int)ratb;
    int y = (int)rath;
    if(ratb-x >0){
        x=x+1;
    }
    if(rath-y >0){
        y=y+1;
    }
    float tot=x*y;
    printf("%.f", tot);
	return 0;
}
