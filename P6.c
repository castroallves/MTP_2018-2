//PEDRO PAULO COSTA CASTRO ALVES
//11721ECP017

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{;
double x;
double y;

};

typedef struct ponto PT;

int main(){

    int N, i;
    scanf("%d", &N);
    PT *p;
    p = malloc(N * sizeof(PT));


for(i = 0; i<N;i++){
p[i].x = cos(i*2.0*M_PI/(N-1));
p[i].y = sin(i*2.0*M_PI/(N-1));
printf("(%.3lf, %.3lf)", p[i].x, p[i].y);


}

}
