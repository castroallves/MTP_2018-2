//PEDRO PAULO COSTA CASTRO ALVES
//11721ECP017

#include <stdio.h>

typedef unsigned long long int Bytes8;
typedef struct LCG {Bytes8 a, c, m, rand_max, atual;}
LCG;

void semente(LCG * r, Bytes8 seed){
// constantes do POSIX [de]rand48, glibc [de]rand48[_r]
// ULL transforma a constante 'int' em 'unsigned long long int'
r->a = 0x5DEECE66DULL;
r->c = 11UL;
r->m = (1ULL << 48);
r->rand_max = r->m - 1;
r->atual = seed;
}
Bytes8 lcg_rand(LCG * r){
r->atual = (r->a * r->atual + r->c) % r->m;
return r->atual;
}
double lcg_rand_01(LCG * r){
return ((double) lcg_rand(r))/(r->rand_max);
}

void gera_numeros(float * vetor, int tam, float min, float max, LCG * r){
    int i;
for(i = 0; i < tam; i++)
    vetor[i] = (max-min)*lcg_rand_01(r) + min;
}

float soma(float *inicio, int n){

    if(n == 0 )return 0;

   else return inicio[n-1] +  soma(inicio, n-1);

}

float produto(float *inicio, int n){

    if(n == 0 )return 1;

   else return inicio[n-1] * produto(inicio, n-1);

}

int main(){

    LCG random ;
semente(&random, 123456);
int op;

printf("Serao gerados 50 numeros aleatorios\n\n");

float v[50];

gera_numeros(v, 50, 0.5, 1.5, &random);

printf("1 - Somatorio\n2 - Produtorio\n\n");

scanf("%d", &op);
printf("\n");
getchar();
if(op == 1){
    printf("%f\n", soma(v,50));
}

else if(op == 2){
    printf("%f", produto(v,50));
}


}


