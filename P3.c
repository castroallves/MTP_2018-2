//PEDRO PAULO COSTA CASTRO ALVES
//11721ECP017

#include <stdio.h>

int main(){

int i, sum = 0;

char num[256];

scanf("%s", num);

for(i = 0; num[i] != '\0'; i++){
if(num[i] >= '0' && num[i] <= '9')
sum = sum *10 + (num[i] - '0');
}

printf("%d\n", sum);

}
