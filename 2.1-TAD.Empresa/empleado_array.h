#ifndef _EMPLEADO_ARRAY_H
#define _EMPLEADO_ARRAY_H
#include "empleado.h" //inclusion necesaria para el tipo Empleado.

  /**
 * @brief Se define una estructura "Empresa"
 */
  typedef struct {
    Empleado empleados[100];
    int cantidadEmpleados;
  } Empresa;

  /**
  * @brief Agrega un empleado a un arreglo de empleados de determinada empresa
  * @param puntero a Empresa, puntero a Empleado
  * @return void
  */
  void agregarEmpleado(Empresa *empresa, Empleado *empleado);

  /**
  * @brief Quitar un empleado de un arreglo de empleados de determinada empresa
  * @param puntero a Empresa, numero de cedula
  * @return void
  */
  void quitarEmpleado(Empresa *empresa, int cedula);

  /**
  * @brief Impreme aquellos empleados que cumplan anios en determina fecha
  * @param puntero a Empresa, puntero a Fecha
  * @return void
  */
  void imprimirEmpleadosCumpleanios(Empresa *empresa, Fecha *fecha);





#endif 