#ifndef _MASCOTA_H
#define _MASCOTA_H

#include <stdio.h>

/**
 * @brief Se define una estructura Fecha
 */
typedef struct {
  int dia;
  int mes;
  int anio;
} Fecha;

/**
 * @brief Se define una estructura Mascota
 */
typedef struct {
	char nombre[50];
	char raza[50];
  int id;
  Fecha fechaNacimiento;
} Mascota;

/**
 * @brief leerMascota lee la información de un Mascota
 * @param Puntero a Mascota
 * @return void
 */
void leerMascota(Mascota *mascota); 
/**
 * @brief imprimirMascota imprime la información de un Mascota
 * @param puntero a Mascota
 * @return void
 */
void imprimirMascota(Mascota *mascota);

/**
 * @brief obtenerid
 * @param puntero a Mascota
 * @return id de un Mascota
 */
int obtenerID(Mascota *mascota);

/**
 * @brief obtener FechaNacimiento del Mascota
 * @param Puntero a Mascota
 * @return Fecha de nacimiento de un Mascota
 */
Fecha obtenerFechaNacimiento(Mascota *mascota);

#endif