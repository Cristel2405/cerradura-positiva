#include <stdio.h>

void crearCombinacion(char array[], int n, int longitud, char resultado[], int nivel){
    if (nivel == longitud) {
        resultado[nivel] = '\0';
        printf("%s\n", resultado);
        return;
    }
    for (int i = 0; i < n; i++){
        resultado[nivel] = array[i];
        crearCombinacion(array, n, longitud, resultado, nivel + 1);
    }
}

void longitudPositiva(char array[], int n, int longitud){
    if (longitud >0){
        char resultado[longitud + 1];
        crearCombinacion(array, n, longitud, resultado, 0);
    } else {
        printf("Longitud no soportada.\n");
    }
} 

int main() {
    char array[] = {'a', 'b', 'c'};
    int n = 3;
    int longitud;
    printf("Introduce la longitud de las combinaciones: ");
    scanf("%d", &longitud);
    longitudPositiva(array, n, longitud); 
    return 0;
}

