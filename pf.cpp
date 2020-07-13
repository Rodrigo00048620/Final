#include <iostream>
#include <tuple>
using namespace std;

 const int longcad = 20;
 struct costoPorArticulo{
    char nombreA[longcad+1]; // mostrar el nombre del articulo
    int cantidad;
    float precio; // costo , antes de impuestos
    float costoPorArticulo; // costo total por articulo
    }; 

void innout(int narti, costoPorArticulo cost[]){ //leer articulo ingresarlo al array
   
   for (int i = 0; i < narti; i++){
        cout << "Nombre del articulo " << i + 1 << endl;
        cin >> cost[i].nombreA;
        cout << "Cantidad a comprar del articulo" << endl;
        cin >> cost[i].cantidad;
        cout << "Precio del producto" << endl;
        cin >> cost[i].precio;
    } 
}

void costoA(int narti, costoPorArticulo cost[]){ //Costo de Articulo
    for (int i = 0; i < narti; i++){
        cost[i].costoPorArticulo = cost[i].cantidad * cost[i].precio;
    }
}

void sum(int narti, costoPorArticulo cost[]){ // suma de contenido
    float total;
    for (int i = 0; i < narti; i++){
        total += cost[i].costoPorArticulo;
    }
    cout << "El valor total de sus articulos es un total de: " << total << "$" << endl;
}

void conA(int narti, costoPorArticulo cost[]){ //contendio del articulo mostrar al usuario

    for (int i = 0; i < narti; i++){
        cout << cost[i].cantidad << ' ' << cost[i].nombreA << " con el precio de:"  << cost[i].precio << "$  y un total de:" << cost[i].costoPorArticulo << "$"<< endl;
    }
}

int main(void){
    int nArti; // cantidad de aticulos a ingresar
    cout << "Ingresar la cantidad de articulos que desea ingresar" << endl;
    cin >> nArti;
    struct costoPorArticulo cost[nArti];
    innout(nArti, cost);
    costoA(nArti, cost);
    conA(nArti, cost);
    sum(nArti, cost);
    
    
    


    
   
}