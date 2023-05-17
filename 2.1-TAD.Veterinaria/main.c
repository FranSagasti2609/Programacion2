#include "mascota_array.h"

int main(void) {
  printf("Proyecto Veterinaria\n\n");

  Veterinaria veterinaria; //Arreglo de hasta 100 mascotas.
  veterinaria.cantidadMascotas = 0;
  Mascota masc1;
  int opcion;
  Fecha fecha;

  printf("Bienvenido al sistema de gestion de la veterinaria.\nSeleccione que operacion desea realizar\n");
  do{
        printf("\n1. Agregar mascota\n");
        printf("2. Quitar mascota\n");
        printf("3. Imprimir mascotas que cumplen años en una fecha dada\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                leerMascota(&masc1);
                agregarMascota(&veterinaria, &masc1);
                break;
            case 2:
                printf("Ingrese la id del mascota a quitar: ");
                scanf("%d", &masc1.id);
                quitarMascota(&veterinaria, masc1.id);
                break;
            case 3:
                printf("Ingrese fecha:\n");
                scanf("%d",&fecha.dia);
                printf("Ingrese mes:\n");
                scanf("%d",&fecha.mes);
              
                imprimirMascotasCumpleanios(&veterinaria, &fecha);
                break;
            case 4:
                // Salir del programa
                return 0;
            default:
                printf("Opción no válida.\n");
        }
    }while(opcion!=4);
  
  
	return 0;
}
