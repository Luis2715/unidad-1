#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo;
    float nota;
    char nombre[50];
} Elemento;

int main() {
    Elemento lista[3] = {
        {1001, 8.5, "Juan Perez"},
        {1002, 7.0, "Ana Gomez"},
        {1003, 9.2, "Luis Torres"}
    };
int opcion;
printf("Menu de opciones:\n");
printf("1. Mostrar nota maxima\n");
printf("2. Mostrar promedio\n");
printf("Seleccione una opcion: ");
scanf("%d", &opcion);

if (opcion == 1) {

    float nota_max = lista[0].nota;
    int cont = 0;
    for (int i = 0; i < 3; i++) { //se recorre las 3 posiciones del arreglo
        if (lista[i].nota > nota_max) { //se compara la nota de la posicion i con la nota maxima
            nota_max = lista[i].nota; //si es mayor, se actualiza la nota maxima
            cont = i; //se guarda la posicion del elemento con la nota maxima
        }
    }
 printf("La nota maxima es %.1f, de %s (codigo %d)\n", lista[cont].nota, lista[cont].nombre, lista[cont].codigo);
 
}else if (opcion == 2) {
 float suma = 0.0; //variable para acumular la suma de las notas
    for (int i = 0; i < 3; i++) { //se recorre las 3 posiciones del arreglo
        suma += lista[i].nota; //se acumula la nota de la posicion i
    }
    float promedio = suma / 3;//se calcula el promedio dividiendo la suma entre el numero de elementos
    printf("El promedio del curso es %.2f\n", promedio);

}else {
    printf("Opcion no valida.\n");
}

return 0;
}