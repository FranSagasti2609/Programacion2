#include <stdio.h>
#include <stdlib.h>

 /* 1. Calcular la suma de los primeros N números enteros positivos. Se pide implementar un 
  algoritmo que reciba como entrada un número N y devuelva la suma de los primeros N números enteros
  positivos. 
  
  @ brief Funcion que suma N veces un numero. 
  @ param Recibe N, un entero que indica cuantas veces se sumará
  @ return Un entero que resulta al hacer la suma

    */
  int sumatoria (int n)
  {
    int suma=0;
    for(int i=0; i<=n; i++){
      suma+=i;
    }
    printf("La suma es %d\n",suma);
    return suma;
  }
  /* 2. Encontrar el mínimo valor en un arreglo de N elementos. Se pide implementar un algoritmo que    
  reciba como entrada un arreglo de tamaño N y devuelva el valor mínimo contenido en el arreglo.
  
  @ brief Funcion que retorna elminimo de un arreglo, se busca N veces el minimo
  @ param Un arreglo de enteros, de longitud N
  @ return Numero entero, el minimo del arreglo
  
  */
    #define N 5  

    int minArreglo(int arreglo[])
    {
      int minimo;
      for(int i=0; i<N; i++){
        minimo = arreglo[0];
        if(minimo>arreglo[i]) minimo = arreglo[i];
      }
      printf("El minimo del arreglo es %d.\n",minimo);
      return minimo;
    }
    /* 3. Buscar un elemento en un arreglo de N elementos. Se pide implementar un algoritmo que reciba
    como entrada un arreglo de tamaño N y un número entero X, y devuelva true si X se encuentra en
    el arreglo, y false en caso contrario. 
    
    @brief Funcion que indica si un numero pertenece a un arreglo. Realiza una operacion NO FIJA de         veces
    @param Un arreglo de enteros, de longitud N. El numero a buscar
    @return Un entero 1 o 0 para indicar true or false respectivamente
    
    */
    int buscar(int arreglo[], int X)
    {
      for(int i=0; i<N; i++)
      {
        if(X==arreglo[i]) return 1;
      } return 0; //Si salgo del for sin encontrar el num. retorno 0 "false"
  
    }

    /* 4. 
    Ordenar un arreglo de N elementos utilizando el algoritmo de burbuja. Se pide implementar el
    algoritmo de ordenamiento de burbuja para ordenar un arreglo de tamaño N en orden ascendente.

    @ brief 
    @ param  Un arreglo de longitud N
    @ return Un arreglo donde los elementos estan organizados por orden creciente
    */
    

    /* 5.
    Calcular el factorial de un número N. Se pide implementar un algoritmo que reciba como entrada
    un número entero N y devuelva el factorial de N, es decir, el producto de todos los números
    enteros positivos desde 1 hasta N.

    @brief Se realiza el factorial de un numero. Se repite el producto N-1 veces
    @param Numero entero N
    @return Numero entero factorial, luego de mltiplicar N*(N-1)*(N-2)....
    
    */

    int factorial (int numero)
    {
      int i;
      int fact=1; 
      for(i=numero; i>0; i--){
        fact = fact * i;
      }

      return fact;
    }

  //FUNCION MAIN.
int main(void) {
    int n;
    //Funcion 1.
    /*
    do{
      printf("Ingrese un numero entero positivo: ");
      scanf("%d",&n);
    } while(n<0);
    int suma = sumatoria(n);
    */
  
    //Funcion 2.
    int arr[N];
    for(int j=0; j<N; j++){
      arr[j]= j+2;
    }
    //int minimo = minArreglo(arr); 

    //Funcion 3
    int X;
    /*
     printf("Ingrese el numero a buscar en el arreglo:\n");
     scanf("%d",&X);
     if(buscar(arr, X)) printf("True - El numero %d pertenece al arreglo.\n",X);
     else printf("False - El numero %d no pertenece al arreglo.\n",X);
    */
  
    //Funcion 5.
    int F, factor;
    printf("Ingrese un numero par hallar su factorial:\n");
    scanf("%d",&F);
    factor = factorial(F);
    printf("El factorial de %d es: %d",F,factor);
  
    
    
  system("pause");
  return 0;
}
