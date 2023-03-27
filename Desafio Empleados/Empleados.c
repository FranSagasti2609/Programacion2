#include "Empleados.h"
#include <stdlib.h> //libreria necesaria para usar funcion malloc
#include <string.h> //libreria necesaria para usar funcion strcpr

listaEmp crearLista(listaEmp lisEmp){
  
  lisEmp = NULL;
  return lisEmp;
}

listaEmp insertarEmpleado(Empleado miEmp, listaEmp lisEmp){
  Nodo * nuevoEmp;//creo el nodo a insertar en lista
  nuevoEmp = (Nodo*) malloc(sizeof(Nodo)); 
  nuevoEmp->miEmp = miEmp; //asigno a mi  estructura del nodo los datos del empleado que ingreso.
  nuevoEmp->sig = lisEmp; //el siguiente puesto en la lista, es  el primer lugar. Insertando asi el nodo en la primera posicion
 lisEmp = nuevoEmp;
  return lisEmp;
  
  
}

void mostrarEmpleados(listaEmp lisEmp){
  //Copio la lista original para avanzar y no perder mis valores. Ya que en mi lista simple, solo se el siguiente nodo, no los anteriores.
  listaEmp listaAux = lisEmp;
  printf("** Lista de Empleados **\n");
  while(listaAux!=NULL){
    
    MostrarEmpleado(listaAux->miEmp); //muestro el jugador donde   estoy "ubicado" en la lista
    //avanzo al siguiente nodo
    listaAux = listaAux->sig;
  }
  
}

Empleado buscarEmpleado (listaEmp lisEmp, char CIaux[9]){
  
  listaEmp lisAux = lisEmp;
  Empleado miEmp; 
  
  while(lisAux!=NULL)
  {
    if(strcmp(CIaux, lisAux->miEmp.CI)==0)
    {
      printf("\n ** Usuario Encontrado ** \nNombre:%s - CI:%s - Salario:%.2f\n",lisAux->miEmp.nombre, lisAux->miEmp.CI, lisAux->miEmp.salario);
      
      return  lisAux->miEmp;
    }
    lisAux = lisAux->sig;
  }
  
}


void modificarEmpleado(listaEmp lisEmp, char CIaux[9]){
  Empleado miEmp; 
  listaEmp lisAux = lisEmp;
  //variables a cambiar
  char * nuevoNombre;
  float nuevoSalario;
  int cambio;
  miEmp = buscarEmpleado(lisEmp, CIaux);
        
      do{
    printf("Que datos del empleado desea modificar:\n1. Nombre\n2. Salario.\n3. Salir\n");
    scanf("%d",&cambio);

     switch(cambio)
    {
    case 1:
      printf("Ingrese el nuevo nombre del empleado: ");
      scanf("%s",nuevoNombre);
      nuevoNombre = lisAux->miEmp.nombre;
    break;
    case 2:
    printf("Ingrese el nuevo salario del empleado: ");
    scanf("%f",&nuevoSalario);
    lisAux->miEmp.salario = nuevoSalario;
    break;
    case 3:
    printf("Salio del apartado de modificacion de empleados.\n");
      break;
    default:break;
    }
  }while(cambio!=3); 
     
  
 
  
}

void borrarEmpleado(listaEmp lisEmp, char CIaux[9]){
  listaEmp lisAux = lisEmp;
  Nodo * anterior= NULL;
  Nodo * posicion = lisAux; 
      while(lisAux!=NULL){
        //recorro la lista buscando el usuario por borrar
        if(posicion->miEmp.CI == CIaux){
          if(anterior==NULL)
          { //si el nodo no tiene nada antes, es el primero. Asi asigno el siguente a la primera posicion.
            lisAux = posicion->sig;
          } else
          {
            anterior->sig = posicion->sig;
          }
          free(posicion);
        }
        anterior = posicion;
        posicion = posicion->sig;
      }
  
}