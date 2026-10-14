#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int restante;
    int pesos []= {1000, 500, 200, 100, 50, 10, 5, 2, 1};

    char buffer[50];
    char *endptr;

    do {
        printf("Ingresa el peso del objeto en gramos a equilibrar:\n");
       if (fgets(buffer, 50, stdin) == NULL) {
           return 1;
       };
        restante = strtol(buffer, &endptr, 10);

        if (restante>10000 || restante <= 0) {
            printf("El peso del objeto debe ser un número entero mayor a 0 pero menor a 10000 gramos\n");
        }
        } while (restante>10000 || restante <= 0);
            for (int i = 0 ; i < 9; i++) {
                int cantidad = restante / pesos [i];
                restante = restante - pesos[i] * cantidad;
                if (cantidad >0) {}
                printf("La cantidad de pesas usadas de %dg fueron: %i\n", pesos[i], cantidad);

            }

        return 0;
    }
