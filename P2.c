//PEDRO PAULO COSTA CASTRO ALVES
//11721ECP017

#include <stdio.h>
#define HEX 16
#define OCT 8
#define BIN 2


void bin(int base)
{	int  resto1[100], resto2[100], num, i, aux, j=0, n=1, sum=0, k=0;
	char resto[100];

	scanf("%s", resto);
	for(i=0; resto[i] != '\0'; i++);
	i--;
	k=i;
	do
	{	if(resto[i] == '0') {resto1[i] = 0; }
		else if(resto[i] == '1') {resto1[i] = 1;}
		i--;
	}while(i>=0);
	i = k;
	do
	{	for(k=0; k<j; k++)
		{	n*=BIN;	}
		sum += resto1[i]*n;
		n=1;
		i--;
		j++;
	}while(i>=0);
	if(base != HEX)
	{	printf("\%d", sum);	}

	if(base == HEX)
	{	if(sum >= base)
		{for(i=0; sum >= base; i++)
		{	resto2[i] = sum%base;
			sum = sum/base;
			if(sum < base)
			{	i++;
				resto2[i] = sum;		}
		} i--;
		if(base == HEX)
		{
			do{	printf("%X", resto2[i]);
				i--;	}while(i>=0); 	}	}
		else
		{	resto2[i] = sum;
			if(base == HEX)
			{
				do{	printf("%X", resto2[i]);
					i--;	}while(i>=0); 	}	}
	}
	printf("\n\n");
}

void dec(int base)
{	int resto[100], num, i, j=0, aux;
	scanf("%d", &num);
	aux = num;
	for(i=0; num >= base; i++)
	{	resto[i] = num%base;
		num = num/base;
		if(num < base)
		{	i++;
			resto[i] = num;		}
	} i--;
	if(base==HEX)
	{
		if(aux >= base)
		{	do{	printf("%X", resto[i]);
			i--;	}while(i>=0); 	}
		else if(aux < base)
		{	printf("%X", num);	}
	}
	else
	{
		do{	printf("%d", resto[i]);
			i--;	}while(i>=0); 	}
	printf("\n\n");
}

void oct_dec(int base)
{	char resto[100];
	int resto1[100], num, i, aux, j=0, n=1, sum=0, k=0;
	scanf("%s", resto);
	for(i=0; resto[i] != '\0'; i++);
	i--;
	aux = i;
	k=i;
	do
	{	resto[i] -= 48;
		i--;			}while(i>=0);
	i = aux;
	do
	{	for(k=0; k<j; k++)
		{	n*=OCT;	}
		sum += resto[i]*n;
		n=1;	i--;	j++;
	}while(i>=0);
	printf("%d", sum);	printf("\n\n");	}


void hex(int base)
{	char resto[100];
	int resto1[100], num, i, aux, j=0, n=1, sum=0, k=0;
	scanf("%s", resto);
	for(i=0; resto[i] != '\0'; i++);
	i--;
	aux = i;
	k=i;
	do
	{	if(resto[i] == 'A' || resto[i] == 'a') {resto[i] = 10; }
		else if(resto[i] == 'B' || resto[i] == 'b') {resto[i] = 11; }
		else if(resto[i] == 'C' || resto[i] == 'c') {resto[i] = 12; }
		else if(resto[i] == 'D' || resto[i] == 'd') {resto[i] = 13; }
		else if(resto[i] == 'E' || resto[i] == 'e') {resto[i] = 14; }
		else if(resto[i] == 'F' || resto[i] == 'f') {resto[i] = 15; }
		else {	resto[i] -= 48;		}	i--;							}while(i>=0);
	i = aux;
	do
	{	for(k=0; k<j; k++)
		{	n*=HEX;	}
		sum += resto[i]*n;
		n=1;	i--;	j++;
	}while(i>=0);
	if(base != BIN)
	{	printf("%d", sum);	}
	if(base == BIN)
	{	for(i=0; sum >= base; i++)
		{	resto[i] = sum%base;
			sum = sum/base;
			if(sum < base)
			{	i++;
				resto[i] = sum;		}
		} i--;

		do{	printf("%d", resto[i]);
			i--;	}while(i>=0); 	}
	printf("\n\n");
}


int main ()
{
	int op;

	printf("1. Binario para Decimal\n\
2. Binario para Hexadecimal\n\
3. Hexadecimal para Decimal\n\
4. Hexadecimal para Binario\n\
5. Decimal para Binario\n\
6. Decimal para Hexadecimal\n\
7. Octal para Decimal\n\
8. Decimal para Octal\n\n");
          scanf("%d", &op);
          getchar();

		switch(op)
		{	case 1:
				bin(BIN);
				break;
			case 2:
				bin(HEX);
				break;
			case 3:
				hex(HEX);
				break;
			case 4:
				hex(BIN);
				break;
			case 5:
				dec(BIN);
				break;
			case 6:
				dec(HEX);
				break;
			case 7:
				oct_dec(OCT);
				break;
			case 8:
				dec(OCT);
		}


	return 0;
}
