//EDGARDO ERNESTO ESPADERO MIRANDA
//EM16006
#include <stdio.h>
#include <stdlib.h>

int main() {
    int sala_cine[5][5], opcion, silla = 1, fil, col, comprar, verificar;
    double ganancias = 0.0;
    for (fil = 0; fil < 5; fil++) {
        for (col = 0; col < 5; col++) {
            sala_cine[fil][col] = silla;
            silla++;
        }
    }
    printf("        SALA DE CINE:\n");
    for (fil = 0; fil < 5; fil++) {
        printf("\n");
        for (col = 0; col < 5; col++) {
            printf("%d\t", sala_cine[fil][col]);
        }
    }
    printf("\n\nMENU SALA CINE");
    printf("\nSeleccionar opcion:\n1. Vender entradas\n2. Verificar si el silla está disponible\n3. Mostrar las ganancias\nCualquier otro número para salir\n");
    scanf("%d", &opcion);
    printf("\n\n");
    while (opcion > 0 && opcion < 5) {
        switch (opcion) {
            case 1:
                printf("    Sala de cine\n");
                for (fil = 0; fil < 5; fil++) {
                    printf("\n");
                    for (col = 0; col < 5; col++) {
                        printf("%d\t", sala_cine[fil][col]);
                    }
                }
                printf("\n--------------------------------------------------");
                printf("\n\n");
                printf("\nIngrese el número de la butaca  \n");
                scanf("%d", &comprar);
                while (silla < 0 || comprar > 25) {
                    printf("\nEl numero de butaca no existe.\nIntente nuevamente\n");
                    printf("\nIngrese el número del silla\n");
                    scanf("%d", &comprar);
                }
                for (fil = 0; fil < 5; fil++) {
                    for (col = 0; col < 5; col++) {
                        if (comprar == sala_cine[fil][col]) {
                            sala_cine[fil][col] = 0;
                            if (fil == 0) {
                                printf("\nEl valor a pagar es de $5");
                                printf("\n");
                                ganancias = ganancias + 5.00;
                            } else if (fil == 4) {
                                printf("\nEl valor a pagar es de $2.50");
                                printf("\n");
                                ganancias = ganancias + 2.50;
                            } else {
                                printf("\nEl valor a pagar es de $3.50");
                                printf("\n");
                                ganancias = ganancias + 3.50;
                            }
                        }
                    }
                }    
                    for (fil = 0; fil < 5; fil++) {
                        printf("\n");
                        for (col = 0; col < 5; col++) {
                            printf("%d\t", sala_cine[fil][col]);
                        }
                    }
                    printf("\n");
                    printf("\n¿Qué desea realizar?\n1. Vender entradas\n2. Verificar si el silla está disponible\n3. Mostrar las ganancias\nCualquier otro número para salir\n");
                    scanf("%d", &opcion);
                    printf("\n\n");
                    break;
                    
            case 2:
                printf("Qué silla desea verificar?\n");
                scanf("%d", &verificar);

                for (fil = 0; fil < 5; fil++) {
                    for (col = 0; col < 5; col++) {
                        if (sala_cine[fil][col] == 0) {

                            printf("\nLa butaca está ocupada\n");

                        }
                    }
                }
                    printf("\n-------------");
                    printf("\n¿Qué desea realizar?\n1. Vender entradas\n2. Verificar si el silla está disponible\n3. Mostrar las ganancias\nCualquier otro número para salir\n");
                    scanf("%d", &opcion);
                    printf("\n\n");
                    break;
            case 3:
                    printf("\nG A N A N C I A S\n");
                    printf("$%f", ganancias);
                    printf("\n-------------");
                    printf("\n¿Qué desea realizar?\n1. Vender entradas\n2. Verificar si el silla está disponible\n3. Mostrar las ganancias\nCualquier otro número para salir\n");
                    scanf("%d", &opcion);
                    printf("\n------------------------\n");
            default:
                    printf("Opcion inválida");
                    break;
        }
    }
}
