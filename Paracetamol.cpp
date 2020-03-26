/*/
John Olvera
20/03/2020
9:28am 
/*/
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <iostream>
#include<cstdlib>
using namespace std;

int main (){
	system("color 02");
	int interfaz;
	
	do{
	system("cls");
	cout<<"\t\t\t\t\tParacetamol para el bios\n"<<endl;	
cout<<"============================================================================================\n|                                                                                          |"<<endl;	
	cout<<"| \t1.- Apagado rapido del equipo:                                                     |\n|                                                                                          |"<<endl;
	cout<<"| \t2.- Apagado con el comando hybrid:                                                 |\n|                                                                                          |"<<endl;
	cout<<"| \t3.- Reiniciar el equipo y encendido rapido:                                        |\n|                                                                                          |"<<endl;	
	cout<<"| \t4.- Filtro de internet:                                                            |\n|                                                                                          |"<<endl;
	cout<<"| \t5.- Lectura de informacion de redes:                                               |\n|                                                                                          |"<<endl;
	cout<<"| \t6.- Lectura de estadísticas del protocolo y las conexiones de red TCP/IP actuales: |\n|                                                                                          |"<<endl;
	cout<<"| \t7.- Lectura de todo el sistema:                                                    |\n|                                                                                          |"<<endl;
	cout<<"| \t8.- Lectura de memoria, sistema o gpu encriptando errores:                         |\n|                                                                                          |"<<endl;
	cout<<"| \t9.- Salir:                                                                         |\n|                                                                                          |"<<endl;
cout<<"============================================================================================\n\n"<<endl;	
	scanf("%d", & interfaz);
cout<<"=======================================================================================================================\n"<<endl;	
	system("cls");
	
	switch(interfaz){
		case 1://Apagado rapido de 1 segundo 
			cout<<"\n\n\t\tApagando el equipo"<<endl;
				system("shutdown -s -t 1");			
					system ("pause");
						system ("exit");					
							break;
		case 2://Apagado con el comando hybrid
			cout<<"\n\n\t\tApagando el equipo\n\n"<<endl;
				system("shutdown -s -hybrid -t 5");			
					system ("pause");
						system ("exit");
							break;
		case 3://Reiniciar el equipo y encendido rapido
			cout<<"\n\n\t\tReinicio del equipo\n\n"<<endl;
				system("shutdown -r -hybrid");			
					system ("pause");
						system ("exit");
							break;
		case 4://Filtro de internet
			cout<<"\n\n\t\tReset internet\n\n"<<endl;
				system("ipconfig -flushdns");			
					system ("pause");
						system ("cls");
							cout<<"\n\n\t\tEscribe el comando dump y luego exit\n\n"<<endl;				
								system ("Netsh");			
									system ("pause");
										system ("exit");
											system ("exit");						
												break;			
		case 5://Lectura de informacion de redes
			cout<<"\n\n\t\tInformacion de la red conectada.\n\n"<<endl;
				system("netsh wlan show interfaces");									
						system ("pause");
							system("start");
							break;
		case 6://Lectura de informacion de redes
			cout<<"\n\n\t\tLectura de estadísticas del protocolo y las conexiones de red TCP/IP actuales.\n\n"<<endl;
				system("netstat -r");			
					system("netstat -t");									
						system("netstat -s");									
							system ("pause");
								break;
		case 7://Lectura de todo el sistema
			cout<<"\n\n\t\tLectura de todo el sistema.\n\n"<<endl;
				system("systeminfo");										
					system ("pause");
						break;
		case 8://Lectura de memoria, sistema o gpu encriptando errores
			cout<<"\n\n\t\tLectura de memoria, sistema o gpu encriptando errores.\n\n"<<endl;
				system("WINSAT FEATURES");										
							system ("pause");
								break;								
								
		case 9:// Salida
			cout<<"\n\n\t\tSalida que tenga un Buen dia"<<endl;
				system("exit");										
							system ("pause");
								break;								
	}
}while(interfaz<7);
	
}
