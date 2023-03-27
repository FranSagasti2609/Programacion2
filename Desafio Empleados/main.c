#include <stdio.h>
#include "Empleados.h"
#include <stdlib.h>

int main(){
   char CIaux[9];
  //creo la lista vacia de empleados
  listaEmp miLista;
  miLista = crearLista(miLista);
  char CIaux2[9];
  char CIaux3[9];
  
  //Creo el fichero. 
  FILE * archivo;
  //Abro fichero, para LEER datos. Por eso la "r", y como es texto "t"
  archivo = fopen("ListaEmpleados.txt","rt");
  char empTodos[50]; //aca se almacenaran datos de empleados

  while(!feof(archivo)){
    int i=0;
    Empleado emp;
    char * token = "";
    fscanf(archivo,"%s",empTodos);

    //separo la cadena de texto y asigno.
    for (token= strtok(empTodos, ":"); token; token = strtok(NULL, ":")){
      switch(i){
        case 0: strcpy(emp.nombre,token);
        break;
        case 1: strcpy(emp.CI, token);
        break;
        case 2: emp.salario= atoi(token);
        break;
        default:break;
        
      } i++;
    }
    miLista = insertarEmpleado(emp, miLista);

  }

int menu;
	Empleado *miEmp = malloc(sizeof (Empleado));

  //al finalizar la lectura del archivo, lo cierro y lo abro para escribir
  fclose(archivo);

  archivo = fopen("ListaEmpleados.txt","wt");
  //abro el fichero y lo vacio. Ya que mis empleados estan en mi lista, y si dejo datos viejos puede haber repeticiones en el mismo.
  printf("Bienvenido al sistema de gestión de empleados.\n\n");

  do{
    printf("\nSeleccione que operacion desea realizar:\n");
  	printf("1. Agregar un nuevo empleado.\n");
    printf("2. Modificar un empleado existente.\n");
    printf("3. Eliminar un empleado.\n");
    printf("4. Buscar un empleado.\n");
    printf("5. Mostrar lista de empleados completa.\n");
    printf("6. Salir del programa.\n");
    printf("Opcion:");
    scanf("%d",&menu);

    switch(menu){
      case 1: 
       	DefinirEmpleado(miEmp); //Ingreso datos empleado
				miLista = insertarEmpleado(*miEmp, miLista); //Agrego al empleado a la lista.
				break;
      case 2: 
        printf("Ingrese el CI del empleado a modificar: ");
        scanf("%s",CIaux2);
        modificarEmpleado(miLista,CIaux2);
				break;
      case 3: 
        printf("Ingrese el CI del empleado a eliminar: ");
        scanf("%s",CIaux3);
        borrarEmpleado(miLista,CIaux3);
        break;
      case 4: 
         printf("Ingrese el CI del empleado a buscar: ");
        scanf("%s",CIaux);
        Empleado buscarEmp = buscarEmpleado(miLista, CIaux);
                       
        break;
      case 5: 
        mostrarEmpleados(miLista);
				break;
      case 6: 
        printf("Cerró el programa.");

        //tengo que ingresar los datos de empleados al final al archivo. Este while deja fuera el ultimo nodo, por tanto hay que ingresarlo por fuera del mismo.
  while(miLista->sig!=NULL){
    fprintf(archivo,"%s:%s:%.2f\n",miLista->miEmp.nombre, miLista->miEmp.CI, miLista->miEmp.salario);
    miLista = miLista->sig;
  }  
   fprintf(archivo,"%s:%s:%.2f",miLista->miEmp.nombre, miLista->miEmp.CI, miLista->miEmp.salario);
   //al finalizar la ejecucion del codigo cierro fichero
  fclose(archivo);
        
        break;
			default:
      printf("Seleccione una opcion correcta.\n\n");
      
    }
  }while(menu!=6);

  
  
	free(miEmp);

  
    return 0;
}