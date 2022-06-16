
/*
Proyecto Pastel main
Damariz Licea C A01369045
10/06/2022
Los demás detalles se pueden ver en el README
Referencias:
Me inspiré del código del proyecto Demo en su mayoría, 
otra parte fue de lo que yo creía se podía hacer, 
y otra parte fueron recomendaciones de mis amigos.
*/


#include <stdio.h>

#include <iostream>
#include "Pasteleria.h"
#include "Producto.h"
using namespace std;

 int main( ){   /*Definimos variables a usar en los metodos de 
                  registrar pedidos, además de una 
                  que nos sirve para que el usuario pueda decidir 
                  que opcion elegir del menú que tenemos abajo (tdpmain).
                  Tenemos también la función dept que usamos al imprimir 
                  los valores del dinero ingresado por tipo de producto*/
  
    int dept = 0;
    int tdpmain = 0;
    int porciones = 0;
    string tipo = " ";
    string sabor = " ";
    string fecha = " ";
    double precio = 0.0;
    string crema = " ";
    string relleno = " ";
    string deco = " ";

    Pasteleria pasteleria;
    pasteleria.prueba_pedidos();   /* Llamamos a la función que crea mis objetos de 
                                      prueba y ejemplos para poder verificar buen funcionamiento, 
                                      y ejemplificar situaciones reales.*/

    while(tdpmain < 8){

    cout << "\n¿Qué quieres hacer?  Ingrese el numero: \n(1)Registrar pedido de Pastel"<<  
     "\n(2)Registrar pedido de Galleta \n(3)Registrar pedido de Tarta \n(4)Mostrar pedidos de Pastel" 
     <<"\n(5)Mostrar pedidos de Galleta \n(6)Mostrar pedidos de Tarta" 
     <<"\n(7)Mostrar dinero entrado por pedidos \n(8)Salir \n"<<endl;
    cout << "Ingrese opcion: \n ";
    cin >> tdpmain;
    if (tdpmain == 1){  //Añadimos objetos Pastel, con características dadas 
                        //por el usuario a nuestro arreglo de productos.
     
        cout << "Registra pedido del pastel: \n";
        cout << "Porciones:  (Ingrese numero entero por favor)  ";
        cin >> porciones;
        cout << "Tipo (Ingresa pastel)  :";
        cin >> tipo;
        cout << "Sabor:  ";
        cin >> sabor;
        cout << "Fecha:  ";
        cin >> fecha;
        cout << "Precio:  ";
        cin >> precio;
        cout << "Crema:  ";
        cin >> crema;
        cout << "Relleno:  ";
        cin >> relleno;
        cout << "Decoracion: ";
        cin >> deco;

        pasteleria.crea_pastel(porciones, tipo, sabor, fecha, precio, crema, relleno, deco);
        cout<<"\nLos productos actuales de Pastel: \n";
        pasteleria.show_pedidos("Pastel");


    }else if (tdpmain == 2){

        cout << "Registra pedido de galletas: \n"; //Añadimos objetos Galleta, con características 
                                                   //dadas por el usuario a nuestro arreglo de productos.
        cout << "Porciones: (Ingrese numero entero por favor)  ";
        cin >> porciones;
        cout << "Tipo (Ingresa Galleta)  :";
        cin >> tipo;
        cout << "Sabor:  ";
        cin >> sabor;
        cout << "Fecha:  ";
        cin >> fecha;
        cout <<"Precio:  ";
        cin >> precio;

        pasteleria.crea_galleta(porciones, tipo, sabor, fecha, precio);
        cout<<"\nLos productos actuales de Galleta: \n";
        pasteleria.show_pedidos("Galleta");

    }else if(tdpmain == 3){
        
        cout << "Registra pedido de Tarta: \n";   //Añadimos objetos Tarta, con características 
                                                  //dadas por el usuario a nuestro arreglo de productos.
        cout << "Porciones:  (Ingrese numero entero por favor) ";
        cin >> porciones;
        cout << "Tipo (Ingresa Tarta)  :";
        cin >> tipo;
        cout << "Sabor:  ";
        cin >> sabor;
        cout << "Fecha:  ";
        cin >> fecha;
        cout << "Precio:  ";
        cin >> precio;
        cout << "Decoracion: ";
        cin >> deco;

        pasteleria.crea_tarta(porciones, tipo, sabor,  fecha,  precio, deco);
        cout<<"Los productos actuales de Tarta: \n";
        pasteleria.show_pedidos("Tarta");

    }else if(tdpmain == 4){ //Mostramos todos los objetos que coincidan con el tipo Pastel del arreglo de productos
        cout << "Mostrar pedidos de Pasteles: \n";
        pasteleria.show_pedidos("Pastel");

    }else if(tdpmain == 5){ //Mostramos todos los objetos que coincidan con el tipo Galleta del arreglo de productos
        cout << "Mostrar pedidos de Galletas: \n";
        pasteleria.show_pedidos("Galleta");

    }else if(tdpmain == 6){ //Mostramos todos los objetos que coincidan con el tipo Tarta del arreglo de productos
        cout << "Mostrar pedidos de Tartas: \n";
        pasteleria.show_pedidos("Tarta");

    }else if(tdpmain == 7){       //Mostramos el dinero por tipos de producto que ha entrado desde que se inició el sistema.
        cout << "El dinero que ha entrado hoy por pedidos de Pasteles:  \n";
        dept = pasteleria.dinero_entrante_peds_portipo("Pastel");
        cout << dept;
        cout << "\nEl dinero que ha entrado hoy por pedidos de Galletas:  \n";
        dept = pasteleria.dinero_entrante_peds_portipo("Galleta");
        cout << dept;
        cout << "\nEl dinero que ha entrado hoy por pedidos de Tartas:  \n";
        dept = pasteleria.dinero_entrante_peds_portipo("Tarta");
        cout << dept << "\n";

    }else{
        cout << "Sayōnara";     //Se acaba el programa
        return 0;
    }
    }

    
 }
