#include <stdio.h>

void subir(int* pisoActual) {
    (*pisoActual)++;
    printf("Ascensor en piso %d.\n", *pisoActual);
}

void bajar(int* pisoActual) {
    (*pisoActual)--;
    printf("Ascensor en piso %d.\n", *pisoActual);
}

void irA(int* pisoActual, int pisoDestino) {
    if (*pisoActual == pisoDestino) {
        printf("Ya se encuentra en el piso %d.\n", pisoDestino);
    }
    else if (*pisoActual < pisoDestino) {
        for (int i = *pisoActual + 1; i <= pisoDestino; i++) {
            subir(pisoActual);
        }
    }
    else {
        for (int i = *pisoActual - 1; i >= pisoDestino; i--) {
            bajar(pisoActual);
        }
    }
}

void mostrarPisoActual(int pisoActual) {
    switch(pisoActual) {
        case 0:
            printf("Planta baja.\n");
            break;
        case 1:
            printf("Primer piso.\n");
            break;
        case 2:
            printf("Segundo piso.\n");
            break;
        case 3:
            printf("Tercer piso.\n");
            break;
        case 4:
            printf("Cuarto piso.\n");
            break;
        case 5:
            printf("Quinto piso.\n");
            break;
        case 6:
            printf("Sexto piso.\n");
            break;
        case 7:
            printf("Séptimo piso.\n");
            break;
        case 8:
            printf("Octavo piso.\n");
            break;
        case 9:
            printf("Noveno piso.\n");
            break;
        default:
            printf("%d° piso.\n", pisoActual);
            break;
    }
}

int main() {
    int pisoActual = 0;
    int pisoDestino;

    while (1) {
        printf("Elija una opción:\n");
        printf("a. Llamar ascensor\n");
        printf("b. Seleccionar piso\n");
        printf("c. Mostrar piso actual\n");
        printf("d. Salir\n");

        char opcion;
        scanf(" %c", &opcion);

        switch (opcion) {
            case 'a':
                printf("Ingrese el piso desde donde llama al ascensor: ");
                scanf("%d", &pisoDestino);
                irA(&pisoActual, pisoDestino);
                break;

            case 'b':
                printf("Ingrese el piso al que desea ir: ");
                scanf("%d", &pisoDestino);
                irA(&pisoActual, pisoDestino);
                break;

            case 'c':
                mostrarPisoActual(pisoActual);
                break;

            case 'd':
                return 0;

            default:
                printf("Opción inválida. Intente de nuevo.\n");
                break;
        }
    }

    return 0;
}
