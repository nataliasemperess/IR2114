#define MAX 5   //cantidad de nums de la primera serie
#define MAX 2   //cantidad de nums de la segunda serie

void swap(int * ptr1, int * ptr2){
    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void ordenar(int v[], int talla){ //Ordena el array v por método burbuja
    int i, j;
    for (i = talla -1; i>=1; i--){
        for (j = 0; j < i; j++){
            if (v[j] > v[j+º]){
                swap(&v[j], &v[j+1];
            }
        }
    }
}

