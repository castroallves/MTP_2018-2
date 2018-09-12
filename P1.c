//PEDRO PAULO COSTA CASTRO ALVES
//11721ECP017

#include <stdio.h>

int main(){
   int estado = 0, i = 0;
   char bits[256];

   scanf("%s", bits);

   do{

        switch(estado){

         case 0:
            if (bits[i] == '1')
                estado = 1;
            break;

        case 1:
            if (bits[i] == '0')
                estado = 2;
            else
                estado = 0;
            break;

        case 2:
            if (bits[i] == '0')
                estado = 1;
            break;
        }

        i++;


        }while((bits[i] != '\0'));


        if(estado == 0) printf("''%s'' e multipo de 3", bits); else printf("''%s'' nao e ", bits);




    return 0;
}
