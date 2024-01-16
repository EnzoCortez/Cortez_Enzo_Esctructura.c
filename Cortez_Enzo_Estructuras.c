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

int main()
{
    int opcion;
    int n;
    
    // Solicitar al usuario la cantidad de alumnos
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &n);

    // Crear un arreglo de estructuras alumno con capacidad para n alumnos
    struct alumno listaAlumnos[n];

    do
    {
        // Menú principal
        printf("\nMenú:\n");
        printf("1. Ingresar alumnos\n");
        printf("2. Mostrar alumnos\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            ingresarAlumnos(listaAlumnos, n);
            break;

        case 2:
            mostrarAlumnos(listaAlumnos, n);
            break;

        case 3:
            printf("Saliendo del programa.\n");
            break;

        default:
            printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}