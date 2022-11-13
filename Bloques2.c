#include <stdio.h>

int main(void) {
    char car;
    int intento;
    printf("Bienvenido, Ingrese un caracter: ");
    scanf("%c",&car);
    while (1){
        printf("opcion: ");
        scanf("%d",&intento);
        if (intento == car){
            printf("corecto\n");
            break;
        }else if (car>intento)printf("es mas grande\n");
        else if (car<intento)printf("es mas chico\n");
    }
    printf("Gracias por usar el software");
    return 0;
}
