#include "empleado_array.h"

//VER. Caso veterinarias.
void agregarEmpleado(Empresa *empresa, Empleado *empleado){
  
    //recorro hasta la ultima pos. ocupada. Asigno empleado.
    empresa->empleados[empresa->cantidadEmpleados] = *empleado; 
    empresa->cantidadEmpleados++;
  
}

 
void quitarEmpleado(Empresa *empresa, int cedula){
    int encontrado = 0; 
    int pos;
    //Busco mi empleado.
    for(int i=0; i< empresa->cantidadEmpleados; i++){
      if(cedula==empresa->empleados[i].cedula){
        encontrado=1;
        pos = i;
        break; //salimos del ciclo para asi no iterar sin necesidad
      } 
    } 
  //Muevo mis empleados un lugar antes, borrando el que quiero. 
  if(encontrado==1){
    for(int j=pos;j< empresa->cantidadEmpleados; j++){
      empresa->empleados[j] = empresa->empleados[j+1];
      strcpy(empresa->empleados[j].nombre, empresa->empleados[j+1].nombre);
    }
  } else printf("Usuario no encontrado en la empresa.\n");

}


void imprimirEmpleadosCumpleanios(Empresa *empresa, Fecha *fecha){
  int listavacia=1;
  printf("Lista de empleados que cumplen anios en la fecha: %d/%d\n",fecha->dia,   fecha->mes);
  printf("-------------------------------------------------------\n");
        
  for(int i=0; i< empresa->cantidadEmpleados; i++){
    if((empresa->empleados[i].fechaNacimiento.dia == fecha->dia) &&
      (empresa->empleados[i].fechaNacimiento.mes == fecha->mes))
      { 
      listavacia=0;
      printf("%s %s cumple anios en la fecha.\n", empresa->empleados[i].nombre
                                                ,empresa->empleados[i].apellido);
      } 
  }
  if(listavacia==1) printf("Nadie cumple anios en esta fecha.\n");
}