   int ps_menu(int *x, int *y,  int *lv, int *e){
   int s = 0;
   struct text_info info;
   gettextinfo(&info);
   int z = info.cury;
   *x = getch();

	if(*x == SETA){

               *y = getch();

    if(*y == BAIXO){

    if(z == 5){
    gotoxy(37, 5);
    textbackground(0);
    printf("INICIAR");
    gotoxy(37, 7);
    textbackground(cor_texto);
    printf("NIVEL %d", *lv);}

    if(z == 7){
    gotoxy(37, 7);
    textbackground(0);
    printf("NIVEL %d", *lv);
    gotoxy(37,9);
    textbackground(cor_texto);
    printf("INSTRUCOES");}
}

    if(*y == CIMA){

    if(z == 7){
    gotoxy(37, 7);
    textbackground(0);
    printf("NIVEL %d", *lv);
    gotoxy(37, 5);
    textbackground(cor_texto);
    printf("INICIAR");}
    if(z == 9){
    gotoxy(37,9);
    textbackground(0);
    printf("INSTRUCOES");
    gotoxy(37, 7);
    textbackground(cor_texto);
    printf("NIVEL %d", *lv);}

}

    if(*y == DIREITA && z == 7){

    if(*lv < 30){
    *lv = *lv +1;
    gotoxy(37,7);printf("NIVEL %d", *lv);}
}
    if(*y == ESQUERDA && z ==7){

    if(*lv >0){
    *lv = *lv - 1;
    gotoxy(37,7);
    printf("NIVEL %d ", *lv);}
}
        }

    if(*x == ENTER){

    if(z == 5){
    *e = *e +1;}
    if(z == 9){
    *e = *e + 2;}
}
    return *lv;
}

void inst(void){

printf("\n");printf("                      INSTRUCOES\n\n");
printf("O objetivo do jogo tetris e pontuar completando\nas linhas horizontais usando os blocos que vao\ncair.\n");
printf("Perde-se quando algum bloco empilhado encostar\nna parte superior do espaco.\n\n");
printf("Use as setas para interagir com o jogo:\n\n");
printf("CIMA: Rotaciona a peca no sentido anti-horario.\n\n");
printf("ESQUERDA e DIREITA: Desloca a peca na horizontal\nnos respectivos sentidos.\n\n");
printf("BAIXO: Hard Drop (Aumenta a velocidade da queda).\n\n");
printf("ESPACO: Pausar o jogo.\n\n");
printf("ESC: Cancelar a partida / Voltar a tela anterior.\n");
while(getch() != ESC){getch();}
}

    void gr_menu(int *ms){
     space();
    struct tecla{
    int x, y;};
    int lv = 0;
struct tecla p;
int e = 0;

p.x = 0, p.y = 0;

gotoxy(2,9);
printf("USE AS SETAS");
gotoxy(2,10);
printf("DO TECLADO");
gotoxy(2,11);
printf("PARA INTERAGIR");
gotoxy(2,12);
printf("COM O MENU");


gotoxy(37,9);
printf("INSTRUCOES");
gotoxy(37,7);
printf("NIVEL %d", lv);
gotoxy(37,5);
(textbackground(cor_texto));
printf("INICIAR");

(textbackground(0));
do{ps_menu(&p.x, &p.y, &lv, &e);}while(e == 0);
(textbackground(0));
if(e == 2){clrscr();
do{
inst();
setbuf(stdin,NULL);}while(kbhit() != 0);
clrscr();
gr_menu(ms);
}

if(lv == 0){*ms = 1000;}
else{*ms = 1000 - lv * 30;}
clrscr();}



