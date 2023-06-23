#include <stdio.h>
#include <stdlib.h>

//Definimos estructura Libro
typedef struct Libro{
  char * nombre;
  int ID_libro;
  int precio;
}Libro;

//Definimos un nodo.
typedef struct nodo{
  Libro libro;
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
Pila agregarElemento(Pila miPila, Libro l){
  Nodo * newNodo = (Nodo *) malloc(sizeof(Nodo)); //Creo el nodo y le reservo memoria.
  newNodo-> libro = l;
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
  
  Libro prog_1 = {"Programacion en C - Tomo 1", 1, 500};
  Libro mate1 = {"Fundamentos de la Matematica. Edicion 2008", 2, 350};
  Libro bio4to = {"Biologia 4to Año", 3, 470};
  miStack = agregarElemento(miStack, prog_1);
  miStack = agregarElemento(miStack, mate1);
  miStack = agregarElemento(miStack, bio4to);
  
  Pila AUX = eliminarPrimer(miStack);
  for(int i=0; i<2; i++){
    printf("Nombre Libro:%s \n", AUX->libro.nombre);
    AUX = AUX -> sig;
  }
  
  
  
  return 0;
}