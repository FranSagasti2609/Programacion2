#include "mascota.h"
#include <string.h> 

void leerMascota(Mascota *mascota){
// usar printf scanf o lectura 
  char nom[50];
  char raza[50];
  int id;
  Fecha fechanacimiento;
  
  printf("Ingrese el nombre de la mascota:\n");
  fgets(mascota->nombre, 50, stdin); //ingreso nombre.
  //donde guardo un enter, pongo un NULL (por eso igualo a cero, por ASCII)
  mascota->nombre[strcspn(mascota->nombre, "\n")] = 0; 
  
  printf("Ingrese la raza de la mascota:\n");
  fgets(mascota->raza, 50, stdin);
  mascota->raza[strcspn(mascota->raza, "\n")] = 0;
  
  printf("Ingrese el numero de ID:\n");
    scanf("%d",&(mascota->id));
  do{
     printf("Ingrese el dia de nacimiento del mascota:\n");
      scanf("%d",&(mascota->fechaNacimiento.dia));
  }while(mascota->fechaNacimiento.dia>31 || mascota->fechaNacimiento.dia<1);

  do{
     printf("Ingrese el mes de nacimiento del mascota:\n");
      scanf("%d",&(mascota->fechaNacimiento.mes));
  }while(mascota->fechaNacimiento.mes>12 || mascota->fechaNacimiento.mes<1);

  printf("Ingrese el anio de nacimiento del mascota:\n");
      scanf("%d",&(mascota->fechaNacimiento.anio));

}

void imprimirMascota(Mascota *mascota){
	printf("La mascota se llama %s, su raza es  %s, su numero de ID es %d, nacido el %d/%d/%d\n",
		mascota->nombre, mascota->raza,mascota->id,
		mascota->fechaNacimiento.dia,
    mascota->fechaNacimiento.mes,
    mascota->fechaNacimiento.anio);
}

int obtenerID(Mascota *mascota){
  return mascota->id;
}

Fecha obtenerFechaNacimiento(Mascota *mascota){
  return mascota ->fechaNacimiento;
}

