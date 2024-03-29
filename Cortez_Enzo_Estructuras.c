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

// Función para ingresar información de alumnos
void ingresarAlumnos(struct alumno lista[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // Solicitar información de cada alumno
        printf("\nIngrese los datos del alumno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &lista[i].matricula);

        printf("Nombre: ");
        fflush(stdin);
        fgets(lista[i].nombre, sizeof(lista[i].nombre), stdin);

        printf("Dirección: ");
        fflush(stdin);
        fgets(lista[i].direccion, sizeof(lista[i].direccion), stdin);

        printf("Materia: ");
        fflush(stdin);
        fgets(lista[i].materia, sizeof(lista[i].materia), stdin);

        printf("Nota: ");
        scanf("%f", &lista[i].nota);
    }
}

// Función para mostrar la información de los alumnos
void mostrarAlumnos(struct alumno lista[], int n)
{
    printf("\nLista de alumnos ingresados:\n");
    for (int i = 0; i < n; i++)
    {
        // Mostrar información de cada alumno
        printf("\nAlumno %d:\n", i + 1);
        printf("Matrícula: %d\n", lista[i].matricula);
        printf("Nombre: ");
        puts(lista[i].nombre);
        printf("Dirección: ");
        puts(lista[i].direccion);
        printf("Materia: ");
        puts(lista[i].materia);
        printf("Nota: %.2f\n", lista[i].nota);
    }
}