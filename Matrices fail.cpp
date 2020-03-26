/*/
John Olvera
16/03/2020
5:28am 
/*/
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <iostream>
#include<cstdlib>
using namespace std;

int main(void){
	system("color 02");
	int opcion;
	float a, b, c, m, a_1, b_1, c_1, m_1, a_2, b_2, c_2, m_2, a_3, b_3, c_3, m_3, T_1, T_2, T_3, T_T, a_T, a_T1, a_T2, a_T3, b_T, c_T, c_T1, c_T2, c_T3;
	
		do{
	system("cls");
	printf("\t\t\tMenu de operaciones\n");
	printf("Elige una opcion\n");
	printf("\t1.- Matrices 3 x 3:\n");
	printf("\t2.- :\n");
	printf("\t3.- :\n");
	printf("\t4.- :\n");
	printf("\t7.- Salir:\n");
	scanf("%d", &opcion);
	system("cls");
	
	switch(opcion){
case 1://matrices 3x3

	cout<<"Para sistema de ecuaciones de forma: \n"<<endl;
		cout<<"\ta_1 - b_1 + c_1 =m_1\n"<<endl;
		cout<<"\ta_2 + b_2 - c_2 =m_2\n"<<endl;
		cout<<"\ta_3 - b_3 + c_3 =m_3\n"<<endl;
printf("_______________________________________________________________________________________________________________________\n\n");
	cout<<"Dame el valor de a_1:  ";
		scanf("%f", &a_1);	
	cout<<"Dame el valor de b_1:  ";
		scanf("%f", &b_1);
	cout<<"Dame el valor de c_1:  ";
		scanf("%f", &c_1);
	cout<<"Dame el valor de m_1:  ";
		scanf("%f", &m_1);		
printf("_______________________________________________________________________________________________________________________\n\n");
	cout<<"Dame el valor de a_2:  ";
		scanf("%f", &a_2);		
	cout<<"Dame el valor de b_2:  ";
		scanf("%f", &b_2);
	cout<<"Dame el valor de c_2:  ";
		scanf("%f", &c_2);
	cout<<"Dame el valor de m_2:  ";
		scanf("%f", &m_2);
printf("_______________________________________________________________________________________________________________________\n\n");
	cout<<"Dame el valor de a_3:  ";//<<endl salto de linea 
		scanf("%f", &a_3);
	cout<<"Dame el valor de b_3:  ";
		scanf("%f", &b_3);									
	cout<<"Dame el valor de c_3:  ";
		scanf("%f", &c_3);
	cout<<"Dame el valor de m_3:  ";
		scanf("%f", &m_3);
printf("_______________________________________________________________________________________________________________________\n\n");

	T_1=(a_1)*((c_3*b_2)-(c_2*b_3));
	T_2=(b_1)*((c_3*a_2)-(a_3*c_2));
	T_3=(c_1)*((b_3*a_2)-(b_2*a_3));
T_T=T_1-T_2+T_3;

//x
	a_T1=(m_1)*((c_3*b_2)-(b_3*c_2));
	a_T2=(b_1)*((c_3*m_2)-(m_3*c_2));
	a_T3=(c_1)*((b_3*m_2)-(m_3*b_2));

a_T=a_T1-a_T2+a_T3;

//y
	b_1=(a_1)*((c_3*m_2)-(m_3*c_2));
	b_2=(m_1)*((c_3*a_2)-(a_3*c_2));
	b_3=(c_1)*((m_3*a_2)-(m_2*a_3));
	
b_T=b_1-b_2+b_3;

//z
	c_T1=(m_3*b_2)-(b_3*m_2);
	//c_1=(1)*((13*1)-(3*-1));
	c_T2=(m_3*a_2)-(a_3*m_2);
	//c_2=(-2)*((13*2)-(3*1));	
	c_T3=(b_3*a_2)-(a_3*b_2);
	//c_3=(12)*((-1*2)-(1*1));	
	
c_T=c_T1-c_T2+c_T3;	

//resultados 
printf("El valor de T maxima es %0.2f\n",T_T );
printf("El valor de a de matriz es %0.2f\n",a_T );
printf("El valor de b de matriz %0.2f\n",b_T );
printf("El valor de c de matriz %f\n",c_T);
printf("El valor de c_t1 de matriz %f   %f %f %f %f \n", c_T1, m_3, b_2, b_3, m_2);
printf("El valor de c_t2 de matriz %f   %f %f %f %f \n" ,c_T2, m_3, a_2, a_3, m_2);
printf("El valor de c_t3 de matriz %f   %f %f %f %f \n",c_T3, b_3, a_2, a_3, b_2);

system("pause");
break;




//	default:
		printf("salir");	
	}
	
	}while(opcion<4);
}
