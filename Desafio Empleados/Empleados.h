#include "Empleado.h"

//Creamos el nodo.
typedef struct nodo{
  Empleado miEmp;
  struct nodo *sig;
}Nodo;

typedef Nodo* listaEmp;

listaEmp crearLista(listaEmp lisEmp);
listaEmp insertarEmpleado(Empleado miEmp, listaEmp lisEmp);
void mostrarEmpleados(listaEmp lisEmp);
Empleado buscarEmpleado (listaEmp lisEmp, char CIaux[9]);
void modificarEmpleado(listaEmp lisEmp, char CIaux[9]);
void borrarEmpleado(listaEmp lisEmp, char Ciaux[9]);


