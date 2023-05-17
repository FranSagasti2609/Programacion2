#ifndef _EMPLEADO_H
#define _EMPLEADO_H

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
 * @brief Se define una estructura Empleado
 */
typedef struct {
	char nombre[50];
	char apellido[50];
  int cedula;
  Fecha fechaNacimiento;
} Empleado;

/**
 * @brief leerEmpleado lee la información de un empleado
 * @param Puntero a Empleado
 * @return void
 */
void leerEmpleado(Empleado *empleado); 
/**
 * @brief imprimirEmpleado imprime la información de un empleado
 * @param puntero a Empleado
 * @return void
 */
void imprimirEmpleado(Empleado *empleado);

/**
 * @brief obtenerCedula
 * @param puntero a Empleado
 * @return cedula de un Empleado
 */
int obtenerCedula(Empleado *empleado);

/**
 * @brief obtener FechaNacimiento del empleado
 * @param Puntero a Empleado
 * @return Fecha de nacimiento de un empleado
 */
Fecha obtenerFechaNacimiento(Empleado *empleado);

#endif