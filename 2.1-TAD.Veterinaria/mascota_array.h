#ifndef _MASCOTA_ARRAY_H
#define _MASCOTA_ARRAY_H
#include "mascota.h" //inclusion necesaria para el tipo Mascota.

  /**
 * @brief Se define una estructura "Veterinaria"
 */
  typedef struct {
    Mascota mascotas[100];
    int cantidadMascotas;
  } Veterinaria;

  /**
  * @brief Agrega un Mascota a un arreglo de Mascotas de determinada Veterinaria
  * @param puntero a Veterinaria, puntero a Mascota
  * @return void
  */
  void agregarMascota(Veterinaria *veterinaria, Mascota *mascota);

  /**
  * @brief Quitar un Mascota de un arreglo de Mascotas de determinada Veterinaria
  * @param puntero a Veterinaria, numero de id
  * @return void
  */
  void quitarMascota(Veterinaria *veterinaria, int id);

  /**
  * @brief Impreme aquellos Mascotas que cumplan anios en determina fecha
  * @param puntero a Veterinaria, puntero a Fecha
  * @return void
  */
  void imprimirMascotasCumpleanios(Veterinaria *veterinaria, Fecha *fecha);

#endif 