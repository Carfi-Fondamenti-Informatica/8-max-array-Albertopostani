#include <iostream>
#include "libj.h"
using namespace std;
int main(){
    int a=0;
    cin>>a;
    float matrice[a];
    int i=0;
    for(i=0;i<a;i++) {
        cin >> matrice[i];
    }
    cout<<funzione(matrice,a);
    return 0;
}

