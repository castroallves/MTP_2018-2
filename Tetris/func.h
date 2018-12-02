#define cor_texto 9
#define ESC 27
#define SETA 224
#define BAIXO 80
#define CIMA 72
#define ESQUERDA 75
#define DIREITA 77
#define PAUSA 32
#define ENTER 13
#define B 254


int ms;

struct coord{

int x[2];
int y[2];

};

int sort(){
srand(time(NULL));
int n;
n = 1+ (rand() % 7);

return n;
}

void pcs(int z, int i, int j, int *rt, int ms, int v_max){

struct text_info cd;

    int m,n,p,q,r,s,f,g,cl,vf;
    int u = 0, v = 0;

if(*rt % 2 == 0){vf = 1;}
else {vf = 0;}

if(z == 1){
       cl = CYAN;
       if(*rt == 1 || *rt == 2 || *rt == 3 || *rt == 4){
       m = 1, n = 1, p = 1, u = 1, q = 0 , r = 0, s = 0;}}

if(z == 2){
       cl = YELLOW;
       m = 1, n = 1, p = 0, q = 0 , r = 1, s = 1;
       *rt = 2;}

if(z == 3){
        cl = RED;
        if(*rt == 1 || *rt == 3){
        m = 1, n = 1, p = 0, q = 1 , r = 0, s = 1;}
        else if(*rt == 2 || *rt == 4){m = 0, n = 1, p = 1, q = 0 , r = 1, s = 1;}
        }

if(z == 4){
        cl = GREEN;
        if(*rt == 1 || *rt == 3){
        m = 0, n = 1, p = 1, q = 0 , r = 1, s = 1;}
        else if(*rt == 2 || *rt == 4){
        m = 1, n = 1, p = 0, q = 1 , r = 0, s = 1;}}

if(z == 5){
    cl = BLUE;
        if(*rt == 1){
        m = 1, n = 1, p = 1, q = 1 , r = 0, s = 0;}
        else if(*rt == 2){m = 1, n = 1, p = 1, q = 0 , r = 1, s = 0;}
        else if(*rt == 3){m = 1, n = 0, p = 0, q = 1 , r = 1, s = 1;}
        else if(*rt == 4){m = 0, n = 0, p = 1, q = 1 , r = 1, s = 1;}
        }

if(z == 6){
    cl = BROWN;
        if(*rt == 1){m = 0, n = 0, p = 1, q = 1 , r = 1, s = 1;}
        else if(*rt == 2){m = 1, n = 0, p = 0, q = 1 , r = 1, s = 1;}
        else if(*rt == 3){m = 1, n = 1, p = 1, q = 0 , r = 1, s = 0;}
        else if(*rt == 4){m = 1, n = 1, p = 1, q = 1 , r = 0 , s = 0;}}

if(z == 7){
    cl = MAGENTA;
       if(*rt == 1 || *rt == 2){m = 0, n = 1, p = 0, q = 1 , r = 1, s = 1;}
       if(*rt == 3 || *rt == 4){m = 1, n = 1, p = 1, q = 0 , r = 0, s = 1;}}

int pcs_a[2][4]={{m,n,p,u},
                 {r,s,q,v}};

textcolor(cl);
   for(f=0;f<2;f++){

for(g=0;g<4;g++){

        if(pcs_a[f][g] == 1){
                   if(vf == 0){
        gotoxy(g+i,f+j);
            printf("%c", B);
}

        else if(vf == 1){
                gotoxy(f+i,g+j);
            printf("%c", B);
             }
}
}}

delay(ms);
if( j < v_max - 1){
for(f=0;f<2;f++){
    for(g=0;g<4;g++){

        if(pcs_a[f][g] == 1){
            if(vf == 0){
        gotoxy(g+i,f+j);
        printf(" ");}
        else if(vf == 1){
        gotoxy(f+i,g+j);
            printf(" ");}
    }

}
}
}
vf = 0;

}


void space(){
        textcolor(WHITE);
int i;
char c = 178;
for(i =20; i<31;i++){

gotoxy(i,5);
printf("%c",c);
gotoxy(i,28);
printf("%c",c);
}

for(i =5; i<29;i++){

gotoxy(20,i);
printf("%c",c);
gotoxy(31,i);
printf("%c",c);
}

}


struct tecla{
int x,y; };


int input(int *x, int *y, int *i, int *j, int *op, int *z, int *ms){

	*x = getch();

	if(*x == SETA){

            *y = getch();

	if(*y == DIREITA ){if(*z % 2 == 0){
       if(*i < 29){*i = *i + 1; }}
       else if(*i < 28){*i = *i + 1;};}
       else if
       (*y == ESQUERDA){if(*i > 21){*i = *i - 1;}}

    else if(*y == BAIXO){
            *ms = *ms - 30;}

    else if(*y == CIMA){if(*z < 4){*z = *z +1;}
    else(*z = 1);}

    *y = 0;


}

	if(*x == PAUSA){
gotoxy(10,8);
printf(" JOGO");
gotoxy(11,9);
printf("PAUSADO");getch();
gotoxy(10,8);
printf("     ");
gotoxy(11,9);
printf("       ");
}

if(*x == ESC){
*op = 0;
        clrscr();}

}

void linha(int i, int j, int *z,int v_max){

textcolor(CYAN);
    int g;
    for(g=1;g<5;g++){
           if(*z % 2 != 0){
            gotoxy(g+i,j);}
           else if(*z % 2 == 0){gotoxy(i,g+j);}
            printf("%c", B);
}
delay(ms);

if(j < v_max){
for(g=1;g<5;g++){
            if(*z % 2 != 0){
            gotoxy(g+i,j);}
            else if(*z % 2 == 0){gotoxy(i,g+j);}
            printf(" ");}
}

}
