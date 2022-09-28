#include "Fila.h"

void inicFila(Fila* fila){
    fila->inicio=inicLista2();
    fila->fin=inicLista2();
}

void mostrar(Fila* fila){
    printf(" INICIO ");
    recorrerYmostrar2(fila->inicio);
    printf(" FIN\n");
}

/// agrega al final de la fila
void agregar(Fila* fila, int dato){
    nodo2 * nuevo = crearNodo2(dato);
    fila->fin=agregarAlFinal(fila->fin, nuevo);

    if(fila->inicio==NULL){
        fila->inicio=fila->fin;
    }
    fila->fin=nuevo;
}

int extraer(Fila* fila){
    int resp;
    if(fila->inicio!=NULL){
        resp=verPrimero2(fila->inicio);

        fila->inicio=borrarPrimero(fila->inicio);
        if(fila->inicio==NULL){
            fila->fin=inicLista2();
        }
    }
    return resp;
}

void leer(Fila* fila){
    int a;
    printf(" INGRESE UN VALOR:");
    scanf("%d", &a);
    agregar(fila, a);
}

int primero(Fila* fila){
    int resp;
    if(fila->inicio!=NULL){
        resp=verPrimero2(fila->inicio);
    }
    return resp;
}

int filaVacia(Fila* fila){
    int resp=0;
    if(fila->inicio==NULL)
        resp=1;
    return resp;
}
