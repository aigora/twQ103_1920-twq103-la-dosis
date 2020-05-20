//LA DOSIS: Andrea Blas MUrillo, Andrea Fernández Ortiz y Marina Rodríguez Martínez (Q103)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define USUARIOS 200

#define ADMINISTRADOR "admin"
#define PASSWORD "7891"

typedef struct{
	char identidad[50];
	char contrasena[50];
	char nombre[50];
	char apellidos[50];
	int dni;
	int telefono;
	}
	datossolicitar;

int main(){
	int opcion, salir, opcion2,c=0, k, contador = 0, result, result2,numero;
	float sumaTotal,sumaTotalDescuento;
	char cadena[100], user1[50], pass[50],ciudad[50],calle[50];
	char cupon[12]="dosis";
	char cuponUsuario[15];
	char administrador[50], password[50];
	int comparacionAdministrador, comparacionPassword;
	FILE * pfichero2;
	FILE * pfichero;
	FILE * pfichero3;
	datossolicitar registrar;
	FILE * pfichero4;
	system("color 02");
	
	
	pfichero2 = fopen("usuarios.txt", "r");
	
			if (pfichero2 == NULL) {
			printf("No se encuentra el fichero\n");
			return -1;
			}

	while(fscanf(pfichero2,"%s %s\n", &registrar.identidad, &registrar.contrasena)!=EOF){
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
	printf("        |_____|                            3.Salir de la aplicacion.                                   |_____|                     \n\n\n");
	printf("                                           4.Si pertenece a la administracion.                                                                                            \n");
	       
scanf("%d", &opcion);	       
switch(opcion){
	
	case 1:{
		
		system("cls");
		
		pfichero4 = fopen("informacion.txt", "a");
		pfichero2 = fopen("usuarios.txt", "w");		
		if (pfichero4 == NULL){
		printf("Error en apertura\n");
		return -1;
		}
				
		printf("SE VA A LLEVAR A CABO SU REGISTRO\n");
		printf("\nNombre: ");
		fflush(stdin);
		scanf("%s",registrar.nombre);
		printf("Apellidos: ");
		fflush(stdin);
		gets(registrar.apellidos);
		printf("DNI: ");
		fflush(stdin);
		scanf("%d", &registrar.dni);
		printf("Telefono: ");
		fflush(stdin);
		scanf("%d", &registrar.telefono);
		
		printf("Introduce usuario:\n");
		fflush(stdin);
		scanf("%s", &registrar.identidad);
	
		printf("Introduce contrasena:\n");
		fflush(stdin);
		scanf("%s", &registrar.contrasena);
		
		fwrite(&registrar, sizeof(datossolicitar),1, pfichero4);
		c++;
	
		
		
		pfichero2 = fopen("usuarios.txt", "r"); 
	
			if (pfichero2 == NULL) {
			printf("No se encuentra el fichero\n");
			return -1;
			}
			for (k=0; k<c; k++){
				fprintf(pfichero2,"%s %s\n", registrar.identidad , registrar.contrasena);
			}
			fclose(pfichero2);
		break;
		system("cls");
	} 
	case 2: 
		system("cls");

		do{
		printf("Introduzca un usuario:");
		scanf("%s", user1);
		for(k=0;k<c;k++){
		
		result = strcmp(user1,registrar.identidad);
		if(result==0){
			printf("Usuario correcto, introduzca contrasena!\n");
			break;
		}
		}
		
	}while(result!=0);

	do{
		printf("Introduzca la contrasena:");
		scanf("%s", pass);
		for(k=0;k<c;k++){
		
		result = strcmp(pass,registrar.contrasena);
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
	case 4: system("cls");
			do{
				printf("Introduzca su usuario\n");
				scanf("%s", &administrador);
				printf("Introduzca su contrasena\n");
				scanf("%s", &password);
				system("cls");
				
				comparacionAdministrador = strcmp(ADMINISTRADOR,administrador);
				comparacionPassword = strcmp(PASSWORD, password);
				
				if(comparacionPassword != 0 || comparacionAdministrador != 0){
					printf("Usuario o contrasena incorrecta, vuelve a intentarlo\n");
					}
			} while(comparacionPassword != 0 || comparacionAdministrador != 0);
			
			
			pfichero4 = fopen("informacion.txt", "r");
			if(pfichero4 == NULL){
				printf("Error abriendo fichero\n");
				return -1;
			}
			
			printf("DATOS SOLICITADOS:\n");
			while(fread(&registrar, sizeof(datossolicitar),1,pfichero4) == 1)
			{
				printf("\nNombre: %s\n", registrar.nombre);
				printf("Apellidos: %s\n", registrar.apellidos);
				printf("DNI: %d\n", registrar.dni);
				printf("Telefono:%d\n", registrar.telefono);
						
			}			
			fclose(pfichero4);
			getch();
			system("cls");
			break;
			
		
	default: 
	printf("Opcion no valida\n");
	system("cls"); 
	}
	system("cls");
	printf("						 MENU DE USUARIO:								    \t													\n");
	
do { 
printf("Pulse 1 para comprar\nPulse 2 para mirar el catalogo\nPulse 3 si desea una atencion mas personalizada\nPulse 4 Preguntas frecuentes\nPulse 5 para salir del programa\n");
scanf("%d",&opcion2);
    
	switch (opcion2){
	 	case 1: 
	 	system("cls");
		printf("Usted ha seleccionado comprar\n");
	 	printf("Es usted familia numerosa?");
	 	printf("1.SI 2.NO\n");
					do{
						scanf("%i",&salir);	
						if(salir<1 || salir>2){
							printf("Opcion no valida\n");
						}
						}while(salir<1 || salir>2);
							if(salir==1){
								printf("Obtienes un descuento del 30 por ciento en el precio final. El codigo de descuento es dosis.\n");
								getch();
								
							}else{  
							printf("No obtienes ninguno descuento\n");
							getch();
							
							}
		printf("Es usted mayor de 65?");
	 	printf("1.SI 2.NO\n");
					do{
						scanf("%i",&salir);	
						if(salir<1 || salir>2){
							printf("Opcion no valida\n");
						}
						}while(salir<1 || salir>2);
							if(salir==1){
								printf("Obtienes un descuento del 30 por ciento en el precio final, el codigo de descuento es dosis.\n");
								getch();
								system("cls");
							}else{  
							printf("No obtienes ninguno descuento");
							getch();
							system("cls");
							}
						
		compra();
	 	cupones(); 
	 	system("cls");
	 	break;
	 	

	 	case 2: 
	 		system("cls");
	 		pfichero = fopen("catalogo.txt", "r");
	
			if (pfichero == NULL) {
			printf("No se encuentra el fichero\n");
			return 0;
			}
	
			while(fgets(cadena,100,pfichero) != NULL){
			printf("%s",cadena);
			}
			fclose(pfichero);
		
	
     		break;
     		system("cls");
     
	 	case 3: 
		 system("cls"); 
		 printf("Adjuntamos nuestros datos de contacto\n");
	 	
	 	 printf("Puedes encontrarnos en: \nC/Lagartera 32 \nC/Plaza Elipa 12 \nAvenida de America\n"); 
		 printf("Nuestro numero de tlf es: 916547890\n");
		 printf("Y dejamos tambien nuestro correo para mas ayuda ladosistufarmaciaonline@hotmail.com\n ");        
					getch();					
		system("cls");      
				                        
     	break;
     	system("cls");
	 	case 4:system("cls"); 
		 printf("A continuacion, os mostramos las preguntas mas frecuentes\n");
    		pfichero3 = fopen("preguntas.txt", "r");
	
		if (pfichero3 == NULL) {
			printf("No se encuentra el fichero\n");
			return 0;
			}
	
			while(fgets(cadena,100,pfichero3) != NULL){
			printf("%s",cadena);
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
								printf("Sesion cerrada con exito, hasta pronto.");
								return 0;
							}else{
								system("cls");
							}
     	break;
     	default:
     		printf("Opcion no valida");
			 system("cls"); 
		}
		
	}
	while(opcion2>0 && opcion2<6);
	
	
}while (opcion>0 && opcion<3); 
    
return 0;	
	
}
int compra(){
	int opcion3;
	float sumaTotal;
	float listaPrecios[]={12.00, 1.97, 5.75, 1.38, 4.65, 2.50, 11.00, 8.00, 7.00, 2.50, 1.50, 7.50, 3.00 };
	
	printf("0.Mascarillas \t\t 12.00 euros");
	printf("\n1.Ibuprofeno 6000mg \t 1.97 euros");
	printf("\n2.Guantes \t\t 5.97 euros");
	printf("\n3.Gelocatil \t\t 1.38 euros");
	printf("\n4.Neurofen \t\t 4.65 euros");
	printf("\n5.Antigripales \t\t 2.50. euros");
	printf("\n6.Gel ISDIN \t\t 11.00 euros");
	printf("\n7.Aspirina \t\t 8.00 euros");
	printf("\n8.Gel hidroalcoholico  7.00 euros");
	printf("\n9.Amoxicilina \t\t 2.50 euros");
	printf("\n10.Paracetamol 600mg \t\t 1.50 euros");
	printf("\n11.Bisolvon \t\t 7.50 euros");
	printf("\n12.Enantyum \t\t 3.00 euros");
	printf("\n13 Finalizar compra");
	
	do{
	printf("\nIntroduzca el numero del articulo: ");
	scanf("%d",&opcion3);
	
	sumaTotal+=listaPrecios[opcion3];
	
	}while(opcion3!=13);
	if(opcion3!=13);
	
}
int cupones(){
	int tieneCupon,salir,numero;
	float sumaTotal;
	float sumaTotalDescuento;
	char ciudad[50],calle[50];
	char cupon[12]="dosis";
	char cuponUsuario[15];
	
	printf("Tienes un cupon de descuento? SI=1 | NO=0\n");
	scanf("%d",&tieneCupon);
	
	if(tieneCupon==0){ 
	printf("\nNo tienes un cupon, debes pagar el total de %.2f\n",sumaTotal);
	printf("Quieres que se lo enviemos a domicilio?");
	 		printf("1.SI 2.NO\n");
						do{
							scanf("%i",&salir);	
							if(salir<1 || salir>2){
								printf("Opcion no valida\n");
							}
						}while(salir<1 || salir>2);
							if(salir==1){
								printf("Introduzca la ciudad donde desea que se lo enviemos:");
								scanf("%s",&ciudad);
								printf("Introduzca la calle:");
								scanf("%s",&calle);
								printf("Introduzca el numero:");
								scanf("%d",&numero);
								return 0;
							}else{  
								printf("Tienes que recogerlo en tienda C/Lagartera 32 C/Plaza Elipa 12 Avenida de America\n");
								system ("pause");
								system ("cls");
	
							}
	}
	if(tieneCupon==1){
	printf("\nDigite el cupon de descuento:");
	scanf("%s", &cuponUsuario);
		if(strcmp(cupon,cuponUsuario)==0){
			sumaTotalDescuento= sumaTotal*0.70;
			printf("Tu descuento ha sido aplicado. Pagaras %.2f\n",sumaTotalDescuento);
			printf("Quieres que se lo enviemos a domicilio?");
	 		printf("1.SI 2.NO\n");
						do{
							scanf("%i",&salir);	
							if(salir<1 || salir>2){
								printf("Opcion no valida\n");
							}
						}while(salir<1 || salir>2);
							if(salir==1){
								printf("Introduzca la ciudad donde desea que se lo enviemos:");
								scanf("%s",&ciudad);
								printf("Introduzca la calle:");
								scanf("%s",&calle);
								printf("Introduzca el numero:");
								scanf("%d",&numero);
								return 0;
							}else{  
								printf("Tienes que recogerlo en tienda C/Lagartera 32 C/Plaza Elipa 12 Avenida de America\n");
								system ("pause");
								system ("cls");
								
							}
	 		
		}
		else{
			printf("\n El cupon no es valido, pagas %.2f\n",sumaTotal);
		}
	}
	return sumaTotal;
}
