//PEDRO PAULO COSTA CASTRO ALVES
//11721ECP017

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    struct ponto{;
double x;
double y;

};

typedef struct ponto PT;

    int op = 0, N = 0, i;
    FILE *arq;
    PT *p;

    printf("1. Gerar arquivo com pontos\n");
    printf("2. Recuperar pontos de arquivo\n\n");

    scanf("%d", &op);
    getchar();

    switch(op){

case 1:
    arq = fopen("pontos.dat", "wb");
    if(arq == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    scanf("%d", &N);
        getchar();

    p = malloc(N * sizeof(PT));

fwrite(&N, sizeof(int), 1 , arq);

    for(i = 0; i < N; i++){
p[i].x = cos(i*2.0*M_PI/(N-1));
p[i].y = sin(i*2.0*M_PI/(N-1));
fwrite(&p[i], sizeof(PT), 1 , arq);
}

printf("Arquivo Gerado");

free(p);
 fclose(arq);

    break;



case 2:

arq = fopen("pontos.dat", "rb");
if(arq == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
}
fread(&N, sizeof(int), 1, arq);
for(i = 0; i<N;i++){
fread(&p[i],sizeof(PT),1,arq);
}

for(i = 0; i < N; i++){
printf("(%.3lf, %.3lf) ", p[i].x, p[i].y);
}
fclose(arq);


}


}



