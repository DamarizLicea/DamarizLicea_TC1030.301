#ifndef PASTELERIA_H_
#define PASTELERIA_H_

#include <string>
#include <iostream>
#include <sstream>
#include "Producto.h" 

using namespace std;

const int ARR=100;

class Pasteleria{
    

    private:

     Producto * prod[ARR];
    int num_pedido;

    public:
    Pasteleria() :num_pedido(0){};
    void show_pedidos();
    void show_pedidos(string tipo);
    double dinero_entrante_peds_portipo();
    double dinero_entrante_peds_portipo(string tipo);
    void prueba_pedidos();

};

void Pasteleria::prueba_pedidos(){
    //uso de new+array+apuntador para que sea polimorfismo

    prod[num_pedido]=new Pastel(12,"Pastel", "Naranja", "22/02/23", 765.0, "Buttercream de chocolate", "Orange curd", "Chocolate" );
    num_pedido++;
    prod[num_pedido]=new Pastel(8,"Pastel", "Red Velvet", "02/07/22", 525.0, "Crema de queso", "Berry Mix", "Osos de chocolate" );
    num_pedido++;
    prod[num_pedido]=new Galleta (12,"Galleta", "Cheesecake Oreo", "07/06/22", 103.0 );
    num_pedido++;
    prod[num_pedido]=new Galleta (24,"Galleta", "Brownie", "14/06/22", 206.0 );
    num_pedido++;
    prod[num_pedido]=new Tarta (20,"Tarta", " Cheesecake Pera", "12/06/22", 635.0, "Azucar Glass" );
    num_pedido++;
    prod[num_pedido]=new Tarta (10,"Tarta", " Lemon Curd Pie", "15/06/22", 317.5, "Merengue" );
    num_pedido++;


}

void Pasteleria::show_pedidos(){

    for (int i = 0; i < num_pedido; i++)
    cout << prod[i] -> imprime_orden();
}

void Pasteleria::show_pedidos(string tipo){

    for (int i=0; i< num_pedido; i++){
        if (prod[i]->get_tipo()==tipo)
        cout<< prod[i]-> imprime_orden();
    }
}

double Pasteleria::dinero_entrante_peds_portipo(){
  double t = 0;
  for (int i = 0; i < num_pedido; i++)
  t = t + prod[i] -> calcularprecio();
  return t;

}

double Pasteleria::dinero_entrante_peds_portipo(string tipo){

    int t=0;
    for (int i = 0; i < num_pedido; i++){
        if(prod[i]-> get_tipo() == tipo)
         t = t + prod[i] -> calcularprecio();
    }
    return t;
}


#endif //cosa
