#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int pontuacao(int x, int y, int z){
    int pont=0;
    if(x+2==y+1&&y+1==z){
        pont = pont + x;
    }
    if(x==y&&x==z){
        pont = pont + x;
    }
    if(x==y&&y<z){
        pont = pont + x/2;
    }
    if(y==z&&y>x){
        pont = pont + z/2;
    }
    if(x+y+z==8){
        pont = pont + 8;
    }
    return pont;
}
int main() {
    int x, y, z;
    int a, b, c;
    int p, w, aux, i;
    scanf("%d%d%d%d%d%d", &x, &y, &z, &a, &b, &c);
    for(i=0;i<=10;i++){
        if(a>b){
            aux=a;
            a=b;
            b=aux;
        }
        if(b>c){
            aux=b;
            b=c;
            c=aux;
        }
        if(a>c){
            aux=a;
            a=c;
            c=aux;
        }
        if(x>y){
            aux=x;
            x=y;
            y=aux;
        }
        if(y>z){
            aux=y;
            y=z;
            z=aux;
        }
        if(x>z){
            aux=x;
            x=z;
            z=aux;
        }
    }
    p=pontuacao(x, y, z);
    w=pontuacao(a, b, c);
    if(p==w){
        printf("0");
    }
    if(p>w){
        printf("1");
    }
    if(w>p){
        printf("2");
    }
	return 0;
}
