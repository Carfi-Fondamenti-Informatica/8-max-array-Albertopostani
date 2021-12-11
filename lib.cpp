#include "lib.h"
float funzione(const float matrice[],int a){
    float max=matrice[0];
    for(int i=1;i<a;i++){
        if(matrice[i]>max){
            max=matrice[i];
        }
    }
    return max;
}
