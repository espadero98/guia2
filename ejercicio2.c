//EDGARDO ERNESTO ESPADERO MIRANDA
//EM16006
#include <stdio.h>

void main() {
    int largo, i, depurar;
    printf("Ingrese el largo del array\n");
    scanf("%d", &largo);
    int array[largo];
    for (i = 0; i < largo; i++) {
        printf("Ingrese el elemento %d del array\n", i + 1);
        scanf("%d", &array[i]);
    }
    //MOSTRANDO EL ARRAY
        printf("\n EL VECTOR ES:\n");
        printf("[");
    for (i = 0; i < largo; i++) {
        printf("%i ", array[i]);
    }
        printf("]");
    printf("\n\n¿Qué posición desea eliminar?\n");
    scanf("%d", &depurar);
    for (i = depurar - 1; i <= largo; i++) {
        array[i] = array[i + 1];
    }
    largo = largo - 1;
    printf("EL NUEVO VECTOR ES \n");
    printf("[");
    for (i = 0; i < largo; i++) {
        printf("%i ", array[i]);
    }
      printf("]");
      
}
