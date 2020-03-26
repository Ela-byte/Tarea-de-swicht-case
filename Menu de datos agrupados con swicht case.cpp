/*/
John Olvera
18/03/2020
5:28pm 
/*/
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include<cstdlib>

int main(void){
	system("color 02");
	const int up =2;
	int opcion;
	float valor_1, valor_2, valor_3,valor_4,valor_5,valor_6,valor_7,valor_8,valor_9,valor_10,valor_11,valor_12,valor_13,valor_14,valor_15,valor_16,valor_17,valor_18,valor_19,valor_20,valor_21,valor_22,valor_23,valor_24,valor_25,valor_26,valor_27,valor_28,valor_29,valor_30,valor_31,valor_32,valor_33,valor_34,valor_35,valor_36,valor_37,valor_38,valor_39,valor_40,promedio_0,miu,sumatoria_1,sumatoria_2,sumatoria_3,sumatoria_4,sumatoria_5,sumatoria_6,sumatoria_7,sumatoria_8,sumatoria_9,sumatoria_10,sumatoria_11,sumatoria_12,sumatoria_13,sumatoria_14,sumatoria_15,sumatoria_16,sumatoria_17,sumatoria_18,sumatoria_19,sumatoria_20,sumatoria_21,sumatoria_22,sumatoria_23,sumatoria_24,sumatoria_25,sumatoria_26,sumatoria_27,sumatoria_28,sumatoria_29,sumatoria_30,sumatoria_31,sumatoria_32,sumatoria_33,sumatoria_34,sumatoria_35,sumatoria_36,sumatoria_37,sumatoria_38,sumatoria_39,sumatoria_40,sumatoria_t,r,rango,valor_maximo,valor_minimo;

	do{
	system("cls");
	
	printf("Elige una opcion\n");
	printf("\t1.- Promedio:\n");
	printf("\t2.- Varianza Poblacional:\n");
	printf("\t3.- Desviacion Estandar:\n");
	printf("\t4.- Rango:\n");
	printf("\t7.- Salir:\n");
	scanf("%d", &opcion);
	system("cls");
	
	switch(opcion){
case 1://promedio
printf("_______________________________________________________________________________________________________________________\n\n");

	printf("Dame el valor\n");
		scanf("%f", &valor_1);
	printf("Dame el valor\n");
		scanf("%f", &valor_2);
	printf("Dame el valor\n");
		scanf("%f", &valor_3);
	
	promedio_0=valor_1+valor_2+valor_3;
	
	printf("Tu promedio es de %f\n", promedio_0/3);
	system("pause");
	break;
case 2://varianza poblacional
printf("_______________________________________________________________________________________________________________________\n\n");
	printf("Dame el valor de miu\n");
		scanf("%f", &miu);
	printf("Dame el valor\n");
		scanf("%f", &valor_1);
	printf("Dame el valor\n");
		scanf("%f", &valor_2);
	printf("Dame el valor\n");
		scanf("%f", &valor_3); 
	printf("Dame el valor\n");
		scanf("%f", &valor_4);
	printf("Dame el valor\n");
		scanf("%f", &valor_5);
	printf("Dame el valor\n");
		scanf("%f", &valor_6);
	printf("Dame el valor\n");
		scanf("%f", &valor_7);
	printf("Dame el valor\n");
		scanf("%f", &valor_8);
	printf("Dame el valor\n");
		scanf("%f", &valor_9);  
	printf("Dame el valor\n");
		scanf("%f", &valor_10);
	printf("Dame el valor\n");
		scanf("%f", &valor_11);
	printf("Dame el valor\n");
		scanf("%f", &valor_12);
	printf("Dame el valor\n");
		scanf("%f", &valor_13); 
	printf("Dame el valor\n");
		scanf("%f", &valor_14);
	printf("Dame el valor\n");
		scanf("%f", &valor_15);
	printf("Dame el valor\n");
		scanf("%f", &valor_16);
	printf("Dame el valor\n");
		scanf("%f", &valor_17);
	printf("Dame el valor\n");
		scanf("%f", &valor_18);
	printf("Dame el valor\n");
		scanf("%f", &valor_19);  
	printf("Dame el valor\n");
		scanf("%f", &valor_20);
	printf("Dame el valor\n");
		scanf("%f", &valor_21);
	printf("Dame el valor\n");
		scanf("%f", &valor_22);
	printf("Dame el valor\n");
		scanf("%f", &valor_23); 
	printf("Dame el valor\n");
		scanf("%f", &valor_24);
	printf("Dame el valor\n");
		scanf("%f", &valor_25);
	printf("Dame el valor\n");
		scanf("%f", &valor_26);
	printf("Dame el valor\n");
		scanf("%f", &valor_27);
	printf("Dame el valor\n");
		scanf("%f", &valor_28);
	printf("Dame el valor\n");
		scanf("%f", &valor_29);  
	printf("Dame el valor\n");
		scanf("%f", &valor_30);
	printf("Dame el valor\n");
		scanf("%f", &valor_31);
	printf("Dame el valor\n");
		scanf("%f", &valor_32);
	printf("Dame el valor\n");
		scanf("%f", &valor_33); 
	printf("Dame el valor\n");
		scanf("%f", &valor_34);
	printf("Dame el valor\n");
		scanf("%f", &valor_35);
	printf("Dame el valor\n");
		scanf("%f", &valor_36);
	printf("Dame el valor\n");
		scanf("%f", &valor_37);
	printf("Dame el valor\n");
		scanf("%f", &valor_38);
	printf("Dame el valor\n");
		scanf("%f", &valor_39);  
	printf("Dame el valor: 40\n");
		scanf("%f", &valor_40);
	
	sumatoria_1 = pow ((valor_1-miu),up);
	sumatoria_2 = pow ((valor_2-miu),up);
	sumatoria_3 = pow ((valor_3-miu),up);
	sumatoria_4 = pow ((valor_4-miu),up);
	sumatoria_5 = pow ((valor_5-miu),up);
	sumatoria_6 = pow ((valor_6-miu),up);
	sumatoria_7 = pow ((valor_7-miu),up);
	sumatoria_8 = pow ((valor_8-miu),up);
	sumatoria_9 = pow ((valor_9-miu),up);
	sumatoria_10 = pow((valor_10-miu),up);
	sumatoria_11 = pow ((valor_11-miu),up);
	sumatoria_12 = pow ((valor_12-miu),up);
	sumatoria_13 = pow ((valor_13-miu),up);
	sumatoria_14 = pow ((valor_14-miu),up);
	sumatoria_15 = pow ((valor_15-miu),up);
	sumatoria_16 = pow ((valor_16-miu),up);
	sumatoria_17 = pow ((valor_17-miu),up);
	sumatoria_18 = pow ((valor_18-miu),up);
	sumatoria_19 = pow ((valor_19-miu),up);
	sumatoria_20 = pow ((valor_20-miu),up);
	sumatoria_21 = pow ((valor_21-miu),up);
	sumatoria_22 = pow ((valor_22-miu),up);
	sumatoria_23 = pow ((valor_23-miu),up);
	sumatoria_24 = pow ((valor_24-miu),up);
	sumatoria_25 = pow ((valor_25-miu),up);
	sumatoria_26 = pow ((valor_26-miu),up);
	sumatoria_27 = pow ((valor_27-miu),up);
	sumatoria_28 = pow ((valor_28-miu),up);
	sumatoria_29 = pow ((valor_29-miu),up);
	sumatoria_30 = pow ((valor_30-miu),up);
	sumatoria_31 = pow ((valor_31-miu),up);
	sumatoria_32 = pow ((valor_32-miu),up);
	sumatoria_33 = pow ((valor_33-miu),up);
	sumatoria_34 = pow ((valor_34-miu),up);
	sumatoria_35 = pow ((valor_35-miu),up);
	sumatoria_36 = pow ((valor_36-miu),up);
	sumatoria_37 = pow ((valor_37-miu),up);
	sumatoria_38 = pow ((valor_38-miu),up);
	sumatoria_39 = pow ((valor_39-miu),up);
	sumatoria_40 = pow ((valor_40-miu),up);
	
	sumatoria_t=sumatoria_1+sumatoria_2+sumatoria_3+sumatoria_4+sumatoria_5+sumatoria_6+sumatoria_7+sumatoria_8+sumatoria_9+sumatoria_10+sumatoria_11+sumatoria_12+sumatoria_13+sumatoria_14+sumatoria_15+sumatoria_16+sumatoria_17+sumatoria_18+sumatoria_19+sumatoria_20+sumatoria_21+sumatoria_22+sumatoria_23+sumatoria_24+sumatoria_25+sumatoria_26+sumatoria_27+sumatoria_28+sumatoria_29+sumatoria_30+sumatoria_31+sumatoria_32+sumatoria_33+sumatoria_34+sumatoria_35+sumatoria_36+sumatoria_37+sumatoria_38+sumatoria_39+sumatoria_40;
		
printf("La varianza poblacional es %f\n",sumatoria_t/(40-1));
	system ("pause");
	break;
case 3://Desviacion estandar

	printf("Dame el valor de varianza poblacional\n");
		scanf("%f", &r);
	
	printf("La desviacion estandar es %0.2f",sqrt(r));
	system ("pause");
	break;
case 4://Rango

	printf("Dame el Valor Maximo\n");
		scanf("%f", &valor_maximo);
	printf("Dame el Valor Minimo\n");
		scanf("%f", &valor_minimo);
	
	rango=valor_maximo-valor_minimo;
	
	printf("El rango es %0.2f\n",rango);
	system ("pause");
	break;
	
	default:
		printf("salir");	
	}
	} while(opcion<4);
}
