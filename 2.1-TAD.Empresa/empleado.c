#include "empleado.h"
#include <string.h> 

void leerEmpleado(Empleado *empleado){
// usar printf scanf o lectura 
  char nom[50];
  char apellido[50];
  int cedula;
  Fecha fechanacimiento;
  
  printf("Ingrese el nombre del empleado:\n");
    //gets((*empleado).nombre);
  fgets(empleado->nombre, 50, stdin); //ingreso nombre.
  //donde guardo un enter, pongo un NULL (por eso igualo a cero, por ASCII)
  empleado->nombre[strcspn(empleado->nombre, "\n")] = 0; 
  
  printf("Ingrese el apellido del empleado:\n");
    //gets((*empleado).apellido);
  fgets(empleado->apellido, 50, stdin);
  empleado->apellido[strcspn(empleado->apellido, "\n")] = 0;
  
  printf("Ingrese el numero de CI:\n");
    scanf("%d",&(empleado->cedula));
  do{
     printf("Ingrese el dia de nacimiento del empleado:\n");
      scanf("%d",&(empleado->fechaNacimiento.dia));
  }while(empleado->fechaNacimiento.dia>31 || empleado->fechaNacimiento.dia<1);
  do{
     printf("Ingrese el mes de nacimiento del empleado:\n");
      scanf("%d",&(empleado->fechaNacimiento.mes));
  }while(empleado->fechaNacimiento.mes>12 || empleado->fechaNacimiento.mes<1);
  printf("Ingrese el anio de nacimiento del empleado:\n");
      scanf("%d",&(empleado->fechaNacimiento.anio));

}

void imprimirEmpleado(Empleado *empleado){
	printf("El empleado se llama %s %s, su cédula es %d, nacido el %d/%d/%d\n",
		empleado->nombre, empleado->apellido,empleado->cedula,
		empleado->fechaNacimiento.dia,
    empleado->fechaNacimiento.mes,
    empleado->fechaNacimiento.anio);
}

int obtenerCedula(Empleado *empleado){
  return empleado->cedula;
}

Fecha obtenerFechaNacimiento(Empleado *empleado){
  return empleado ->fechaNacimiento;
}

