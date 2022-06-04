#include <iostream>
#include "Pasteleria.h"
#include "Producto.h"
using namespace std;
 int main( ){
     int dept=0;
     Producto * arg1= new Pastel;
     Producto * arg2= new Tarta;
     Producto * arg3= new Galleta;
     

     Pasteleria pasteleria;
     pasteleria.show_pedidos();
     pasteleria.dinero_entrante_peds_portipo();
     pasteleria.prueba_pedidos();

     cout<<"ahora si hay cpp, prueba de funcionamiento:   \n\n";
     pasteleria.show_pedidos("Pastel");
     dept=pasteleria.dinero_entrante_peds_portipo();
     cout<<"Dinero que ha entrado hoy"<<dept<<endl;

 }
