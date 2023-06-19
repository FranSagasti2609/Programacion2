#include <stdio.h>
#include <stdlib.h>

//Definimos estructura Empleado
typedef struct empleado{
  char * name;
  int age;
  int CI;
}Empleado;

//Definimos un nodo.
typedef struct nodo{
  Empleado trabajador;
  struct Nodo * sig;
} Nodo;

/*Recordemos una pila es una LISTA. 
Lo unico que cambia es como se hacen las operaciones.
*/
typedef Nodo * Pila; //Definimos tipo Pila

//Funcion para crear pila vacia.
Pila crearPila (void){
  Pila newStack = NULL;
    return newStack;
}

//Insertar elemento a pila
Pila agregarElemento(Pila miPila, Empleado emp){
  Nodo * newNodo = (Nodo *) malloc(sizeof(Nodo)); //Creo el nodo y le reservo memoria.
  newNodo-> trabajador = emp;
  newNodo-> sig = miPila;
  miPila = newNodo;
  return miPila;
}

Pila eliminarPrimer(Pila miPila){
  Nodo * eliminar = miPila;
  miPila = miPila -> sig;
  free(eliminar);
  return miPila;
}

int main(void) {
  printf("Hola pilas. \n");
  Pila miStack = crearPila();
  
  Empleado emp1 = {"Fede", 17, 12345678};
  Empleado emp2 = {"Fran", 21, 51340968};
  Empleado emp3 = {"Cristian", 32, 87654321};
  miStack = agregarElemento(miStack, emp1);
  miStack = agregarElemento(miStack, emp2);
  miStack = agregarElemento(miStack, emp3);
 

  Pila AUX = eliminarPrimer(miStack);
  for(int i=0; i<2; i++){
    printf("Nombre empleado:%s \n", AUX->trabajador.name);
    AUX = AUX -> sig;
  }
  
  
  
  return 0;
}