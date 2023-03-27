//definicion de la estructura empleado
typedef struct empleado{
  char nombre[20];
	//char *nombre;
  char CI[9];
  float salario;  
}Empleado;

void DefinirEmpleado (Empleado *emp);
void MostrarEmpleado (Empleado emp);

