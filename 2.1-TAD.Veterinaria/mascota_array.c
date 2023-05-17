#include "mascota_array.h"
#include <string.h> 

void agregarMascota(Veterinaria *veterinaria, Mascota *mascota){
  
    //recorro hasta la ultima pos. ocupada. Asigno Mascota.
  veterinaria->mascotas[veterinaria->cantidadMascotas] = *mascota; 
  veterinaria->cantidadMascotas++;

}

 
void quitarMascota(Veterinaria *veterinaria, int id){
    int encontrado = 0; 
    int pos;
    //Busco mi Mascota.
    for(int i=0; i<veterinaria->cantidadMascotas; i++){
      if(id==veterinaria->mascotas[i].id){
        encontrado=1;
        pos = i;
        break; //salimos del ciclo para asi no iterar sin necesidad
      } 
    } 
  //Muevo mis mascotas un lugar antes, borrando el que quiero. 
  if(encontrado==1){
    for(int j=pos;j<veterinaria->cantidadMascotas; j++){
    veterinaria->mascotas[j] =veterinaria->mascotas[j+1];
    }
  } else printf("Usuario no encontrado en laveterinaria.\n");

}

void imprimirMascotasCumpleanios(Veterinaria *veterinaria, Fecha *fecha){
  int listavacia=1;
  printf("Lista de mascotas que cumplen anios en la fecha: %d/%d\n",fecha->dia,   fecha->mes);
  printf("-------------------------------------------------------\n");
        
  for(int i=0; i<veterinaria->cantidadMascotas; i++){
    if((veterinaria->mascotas[i].fechaNacimiento.dia == fecha->dia) &&
      (veterinaria->mascotas[i].fechaNacimiento.mes == fecha->mes))
      { 
      listavacia=0;
      printf("%s - Raza:%s cumple anios en la fecha.\n",veterinaria->mascotas[i].nombre
                                                ,veterinaria->mascotas[i].raza);
      } 
  }
  if(listavacia==1) printf("Nadie cumple anios en esta fecha.\n");
}