
#include <stdio.h>

#include <iostream>
#include "Pasteleria.h"
#include "Producto.h"


 int main( ){
     int dept=0;

     Pasteleria pasteleria;
     pasteleria.show_pedidos();
     pasteleria.dinero_entrante_peds_portipo();
     pasteleria.prueba_pedidos();

     std::cout<<"ahora si hay cpp, prueba de funcionamiento:   \n\n";
     pasteleria.show_pedidos("Tarta");
     pasteleria.show_pedidos("Galleta");
     pasteleria.show_pedidos("Pastel");

     dept=pasteleria.dinero_entrante_peds_portipo();
     std::cout<<"Dinero que ha entrado hoy:  "<<dept<<std::endl;

 }
