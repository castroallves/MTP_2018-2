#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <time.h>

#include "func.h"
#include "menu.h"

int main(){
struct tecla p;
int z,i,j,n,op =1;
int xy[10][22];
int v_max = 27;
gr_menu(&ms);
for(i = 0; i<10; i++){
    for(j = 0; j<22; j++){
        xy[i][j] = 0;
    }
}
do{
if(p.x == ESC){gr_menu(&ms);};
p.x = 0;

n = sort();
z = 1;
i= 25;

space();
for(j = 6 ; j < v_max ; j++){
space();

if(kbhit()){
       input(&p.x, &p.y, &i, &j, &op, &z, &ms);}

if(z % 2 != 0){v_max = 27;}
else if(z % 2 == 0 && n != 2){v_max = 26;}
else if(z % 2 == 0 && n == 1){v_max = 27;}

        pcs(n,i,j,&z,ms,v_max);


if(p.x == ESC){clrscr();break;}
}
}while(1==1);
}
