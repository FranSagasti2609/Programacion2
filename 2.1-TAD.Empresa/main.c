#include "empleado_array.h"

int main(void) {
  printf("Proyecto Empleados\n\n");

  Empresa empresa; //Arreglo de hasta 100 empleados.
  empresa.cantidadEmpleados = 0;
  Empleado emp;
  int opcion;
  Fecha fecha;

  printf("Bienvenido al sistema de gestion de la empresa.\nSeleccione que operacion desea realizar\n");
  do{
        printf("\n1. Agregar empleado\n");
        printf("2. Quitar empleado\n");
        printf("3. Imprimir empleados que cumplen años en una fecha dada\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                leerEmpleado(&emp);
                agregarEmpleado(&empresa, &emp);
                break;
            case 2:
                printf("Ingrese la cedula del empleado a quitar: ");
                scanf("%d", &emp.cedula);
                quitarEmpleado(&empresa, emp.cedula);
                break;
            case 3:
                printf("Ingrese fecha:\n");
                scanf("%d",&fecha.dia);
                printf("Ingrese mes:\n");
                scanf("%d",&fecha.mes);
              
                imprimirEmpleadosCumpleanios(&empresa, &fecha);
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
