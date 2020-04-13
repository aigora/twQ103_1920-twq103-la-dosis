#include <stdio.h>


int main(){
	
	int opcion, salir, opcion2;
	
	printf("                ________     ___        _____     ______   _______   _______              _____               \n");
	printf("    |          |        |   |    .     |     |   .            |     .                    |     |              \n");
	printf("    |          |        |   |      .   |     |   .            |     .                 ___|     |___           \n");
	printf("    |          |        |   |      .   |     |   ._____       |     ._______         |             |          \n");
	printf("    |          |________|   |      .   |     |         .      |             .        |___       ___|          \n");
	printf("    |          |        |   |      .   |     |         .      |             .            |     |              \n");
	printf("    |          |        |   |     .    |     |         .      |             .            |_____|              \n");
	printf("    |_______   |        |   |____.     |_____|   ______.   ___|____  _______.                                 \n\n\n\n");
	
	
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
	
	case 1: 
		system("cls");
		printf("aqui poner lo de para registrarse FICHEROS \n");
		break;
	
	case 2: 
		system("cls");
		printf("aqui poner lo de para iniciar sesion FICHEROS \n");
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
							}
							break;
		
		default: printf("Opcion no valida\n");
		//system("pause");
		//system("cls");
		
	}
	system("cls");
	printf("						 MENU DE USUARIO:								    \t													\n");

printf("Pulse 1 para comprar\nPulse 2 para mirar el catalogo\nPulse 3 si desea una atencion mas personalizada\nPulse 4 Preguntas frecuentes\nPulse 5 para salir del programa\n");
scanf("%d",&opcion2);
    switch (opcion2){
     case 1: printf("Usted ha seleccionado comprar");
     break;
     case 2: printf("Aqui tienes el catalogo\n");
     break;
     case 3: printf("Adjuntamos nuestros datos de contacto\n");
     break;
     case 4: printf("A continuacion, os mostramos las preguntas mas frecuentes\n");
     break;
     case 5: printf("Que tenga un buen dia :)\n");
     break;
	}
}
