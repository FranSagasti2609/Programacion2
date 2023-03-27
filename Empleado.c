#include <stdio.h>
#include "Empleado.h"

void DefinirEmpleado (Empleado *emp){
  printf ("Ingrese nombre del empleado\n");
	scanf ("%s",emp->nombre);
  printf ("Ingrese CI del empleado\n");
  scanf("%s",emp->CI);
  printf("Ingrese salario del empleado\n");
  scanf("%f",&emp->salario);
}

void MostrarEmpleado(Empleado emp){
	printf("Nombre: %s, CI: %s, Salario: %.2f \n",emp.nombre, emp.CI, emp.salario);
} 