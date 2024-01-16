#include <stdio.h>

// Definición de la estructura alumno
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};

// Prototipos de las funciones
void ingresarAlumnos(struct alumno lista[], int n);
void mostrarAlumnos(struct alumno lista[], int n);