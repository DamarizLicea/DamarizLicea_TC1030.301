/*
Proyecto Pastel Clase Pasteleria
Damariz Licea C A01369045
10/06/2022
Los demás detalles se pueden ver en el README
Referencias:
Me inspiré del código del proyecto Demo en su mayoría, 
otra parte fue de lo que yo creía se podía hacer, 
y otra parte fueron recomendaciones de mis amigos.
Version: 10
*/

#ifndef PASTELERIA_H_
#define PASTELERIA_H_

#include <string>
#include <sstream>          //Incluimos documento con mis clases hijas y padre.
#include "Producto.h" 

using namespace std;

const int ARR = 500;      //Creamos una variable que contenga el 
                            //numero de lugares que el arreglo va a tener.

class Pasteleria{       //Creamos clase pasteleria (agrupa una coleccion de productos)
    

    private:

        Producto * prod[ARR];      //Uso de apuntadores, creación de arreglo.
        int num_pedido;

    public:
        Pasteleria() :num_pedido(0){};
        void show_pedidos();
        void show_pedidos(string tipo);
        double dinero_entrante_peds_portipo();
        double dinero_entrante_peds_portipo(string tipo);
        void prueba_pedidos();
        void crea_pastel(int porciones, string tipo, string sabor, 
                         string fecha, double precio, string crema, string relleno, string deco);
        void crea_galleta(int porciones, string tipo, 
                            string sabor, string fecha, double precio);
        void crea_tarta(int porciones, string tipo, string sabor,
                            string fecha, double precio,string deco);  
                            //El uso de las funciones se ve más en el main.

};

void Pasteleria::prueba_pedidos(){ //POLIMORFISMO
    //uso de new + array + apuntador para que sea polimorfismo
    //APUNTADOR = prod
    prod[num_pedido] = new Pastel(12,"Pastel", "Naranja", "22/02/23", 765.0, 
                                  "Buttercream de chocolate", "Orange curd", "Chocolate" );
    num_pedido++;
    prod[num_pedido] = new Pastel(8,"Pastel", "Red Velvet", "02/07/22", 525.0, 
                                  "Crema de queso", "Berry Mix", "Osos de chocolate" );
    num_pedido++;
    prod[num_pedido] = new Galleta (12,"Galleta", "Cheesecake Oreo", "07/06/22", 103.0 );
    num_pedido++;
    prod[num_pedido] = new Galleta (24,"Galleta", "Brownie", "14/06/22", 206.0 );
    num_pedido++;
    prod[num_pedido] = new Tarta (20,"Tarta", " Cheesecake Pera", "12/06/22", 635.0, "Azucar Glass" );
    num_pedido++;
    prod[num_pedido] = new Tarta (10,"Tarta", " Lemon Curd Pie", "15/06/22", 317.5, "Merengue" );
    num_pedido++;
}

//Dos métodos para mostrar pedidos, uno que funciona general y 
//el otro que funciona de acuerdo a que cocincida con el tipo de producto.
//Lo mismo pasa con los métodos de calcular dinero entrante, 
//uno es general y el otro es por tipo.
//Aun cuando los que no reciben la variable "tipo" como parametro no se usan, 
//decidí dejarlos como método de autoestudio.


void Pasteleria::show_pedidos(){
   for (int i = 0; i < num_pedido; i++)
        cout << prod[i]-> imprime_orden();  
}

void Pasteleria::show_pedidos(string tipo){

    for (int i = 0; i< num_pedido; i++){
        if (prod[i]->get_tipo() == tipo)
            cout << prod[i]-> imprime_orden();
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
//Funciones para creae objetos a través de los datos ingresados por el usuario.
//Para ver su uso, ir al main.
void Pasteleria::crea_pastel(int porciones, string tipo, string sabor, string fecha, 
                             double precio, string crema, string relleno, string deco){
    prod[num_pedido] = new Pastel( porciones, tipo, sabor, fecha, precio, crema, relleno, deco);
    num_pedido++;
}

void Pasteleria::crea_galleta(int porciones, string tipo, string sabor, string fecha, double precio){
    prod[num_pedido] = new Galleta( porciones,  tipo,  sabor,  fecha,  precio);
    num_pedido++;
}

void Pasteleria::crea_tarta(int porciones, string tipo, string sabor, string fecha, double precio,string deco){
    prod[num_pedido] = new Tarta( porciones, tipo, sabor, fecha, precio, deco);
    num_pedido++;
}

#endif 
