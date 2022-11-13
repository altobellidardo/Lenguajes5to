#include <stdio.h>

int analizar(int list[],int,int);

int main(void) {
    int lista[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",analizar(lista, 10, 9));
    return 0;
}

int analizar(int list[],int cant,int busc){
    for (int u=0;u<cant;u++){
        if (list[u]==busc)return u;
    }
    return -1;
}
