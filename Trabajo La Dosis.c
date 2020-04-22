#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define N 100
#define USUARIOS 200

struct usuario{
	char identidad[N];
	char contrasena[N];
};

int main(){
	
	struct usuario registrar[USUARIOS];
	int opcion, salir, opcion2, c=0, k, contador = 0, result, result2;
	char aux, user1[50], pass[50];
	FILE * pfichero2;
	FILE * pfichero;
	FILE * pfichero3;

	
	pfichero2 = fopen("hola.txt", "r");
	
			if (pfichero2 == NULL) {
			printf("No se encuentra el fichero\n");
			return -1;
			}

	while(fscanf(pfichero2,"%s %s\n", &registrar[c].identidad, &registrar[c].contrasena)!=EOF){
		c++;
	}
	fclose(pfichero2);	
	
	
	
	printf("                ________     ___        _____     ______   _______   _______              _____               \n");
	printf("    |          |        |   |    .     |     |   .            |     .                    |     |              \n");
	printf("    |          |        |   |      .   |     |   .            |     .                 ___|     |___           \n");
	printf("    |          |        |   |      .   |     |   ._____       |     ._______         |             |          \n");
	printf("    |          |________|   |      .   |     |         .      |             .        |___       ___|          \n");
	printf("    |          |        |   |      .   |     |         .      |             .            |     |              \n");
	printf("    |          |        |   |     .    |     |         .      |             .            |_____|              \n");
	printf("    |_______   |        |   |____.     |_____|   ______.   ___|____  _______.                                 \n\n\n\n");
	
	
do{   
	
	
	
	       printf("\t\t                              BIENVENIDO A SU FARMACIA ONLINE \n\n");
	       
    printf("         _____                             MENU PRINCIPAL:                                     \t        _____                         \n");
	printf("        |     |                            --------------                                      \t       |     |                        \n");
	printf("     ___|     |___                         1.Si es la primera vez: REGISTRARSE.                \t    ___|     |___                     \n");
	printf("    |             |                                                                            \t  |               |                   \n");
	printf("    |___       ___|                        2.Si ya has accedido anteriormente: INICIAR SESION. \t  |___        ____|                   \n");
	printf("        |     |                                                                                \t       |     |                       \n");
	printf("        |_____|                            3.Salir de la aplicacion.                                   |_____|                     \n\n" );
	       
	       
scanf("%d", &opcion);	       
switch(opcion){
	
	case 1:{
		system("cls");
	
		printf("Introduce usuario:\n");
		scanf("%s", &registrar[c].identidad);
	
		printf("Introduce contasena:\n");
		scanf("%s", &registrar[c].contrasena);
		
		c++;
		
		pfichero2 = fopen("hola.txt", "w");
	
			if (registrar == NULL) {
			printf("No se encuentra el fichero\n");
			return -1;
			}
			for (k=0; k<c; k++){
				fprintf(pfichero2,"%s %s\n", registrar[k].identidad , registrar[k].contrasena);
			}
			fclose(pfichero2);
		break;
	} 
	case 2: 
		system("cls");

		do{
		printf("Introduzca un usuario:");
		scanf("%s", user1);
		for(k=0;k<c;k++){
		
		result = strcmp(user1,registrar[k].identidad);
		if(result==0){
			printf("Usuario correcto, introduzca contrasena!\n");
			break;
		}
		}
		
	}while(result!=0);

	do{
		printf("Introduzca la contasena:");
		scanf("%s", pass);
		for(k=0;k<c;k++){
		
		result = strcmp(pass,registrar[k].contrasena);
		if(result==0){
			printf("Contrasena correcta, bienvenid@!\n");
			break;
		}
		}
	}while(result!=0);
		
		system("pause");
		break;

	case 3:
			system("cls");
			printf("Esta usted seguro que desea salir de la aplicacion?\n");
			
			printf("1.SI \n");
					printf("2.NO \n");
						do{
							scanf("%i",&salir);	
							if(salir<1 || salir>2){
								printf("Opcion no valida\n");
							}
						}while(salir<1 || salir>2);
							if(salir==1){
								printf("Sesion cerrada con exito, hasta pronto");
								return 0;
							}else{  
								system("cls");
								return main();
								system("cls");
								
							}
							break;
		
		default: printf("Opcion no valida\n");
		
	}
	system("cls");
	printf("						 MENU DE USUARIO:								    \t													\n");
	
do { 
printf("Pulse 1 para comprar\nPulse 2 para mirar el catalogo\nPulse 3 si desea una atencion mas personalizada\nPulse 4 Preguntas frecuentes\nPulse 5 para salir del programa\n");
scanf("%d",&opcion2);
    
	switch (opcion2){
     
	 	case 1: printf("Usted ha seleccionado comprar");
	 	getch();
		system("cls");
     	break;
     
	 	case 2: 
	 		system("cls");
	 		pfichero = fopen("catalogo.txt", "r");
	
			if (pfichero == NULL) {
			printf("No se encuentra el fichero\n");
			return 0;
			}
	
			while(aux != EOF){
			aux = fgetc(pfichero);
			printf("%c",aux);
			}
			fclose(pfichero);
		
	
     		break;
     
	 	case 3: 
		 system("cls"); 
		 printf("Adjuntamos nuestros datos de contacto\n");
	 	
	 	 printf("Puedes encontrarnos en: \nC/Lagartera 32 \nC/Plaza Elipa 12 \nAvenida de America\n"); 
		 printf("Nuestro numero de tlf es: 916547890\n");
		 printf("Y dejamos tambien nuestro correo para mas ayuda ladosistufarmaciaonline@hotmail.com\n ");        
					getch();					
		system("cls");      
				                        
     	break;
     
	 	case 4:system("cls"); 
		 printf("A continuacion, os mostramos las preguntas mas frecuentes\n");
    		pfichero3 = fopen("preguntasfrecuentes.txt", "r");
	
			if (pfichero3 == NULL) {
			printf("No se encuentra el fichero\n");
			return 0;
			}
	
			while(aux != EOF){
			aux = fgetc(pfichero3);
			printf("%c",aux);
			}
			fclose(pfichero3);
		
			
		 break;
	 	
	 	case 5: system("cls");
			printf("Esta usted seguro que desea salir de la aplicacion?\n");
			
			printf("1.SI \n");
					printf("2.NO \n");
						do{
							scanf("%i",&salir);	
							if(salir<1 || salir>2){
								printf("Opcion no valida\n");
							}
						}while(salir<1 || salir>2);
							if(salir==1){
								printf("Sesion cerrada con exito, hasta pronto");
								return 0;
							}else{
								system("cls");
							}
     	break;
		}
	}
	while(opcion2>0 && opcion2<6);
	
	
}while (opcion>0 && opcion<2); 
    
return 0;	
		
}
