
/*
Proyecto Pastel Clase Padre: Producto, Clases Hijas: Pastel, Galleta, Tarta.
Damariz Licea C A01369045
10/06/2022
Los demás detalles se pueden ver en el README
Referencias:
Me inspiré del código del proyecto Demo en su mayoría, 
otra parte fue de lo que yo creía se podía hacer, 
y otra parte fueron recomendaciones de mis amigos.
Version: 8
*/

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <string>

#include <iostream>
#include <sstream>

using namespace std;

//Clase Producto, es la clase padre

class Producto
{

  //variables

protected: //MODIFICADORES DE ACCESO
  int porciones;
  string tipo;
  string sabor;
  string fecha;
  float precio;


public:
    Producto (): porciones(0), tipo (" "), sabor(" "),fecha(" "), precio(0.0){} ; //CONSTRUCTOR DEFAULT
    //SOBRECARGA
    Producto (int porc, string ti, string sab, string fec, double pres): 
	porciones(porc),tipo(ti), sabor(sab),fecha(fec), precio(pres) {};
    

    
    virtual string imprime_orden() = 0;  //Abstracción, por ende, la clase Producto es abstracta.
    virtual double calcularprecio() = 0;
  
	
    int get_porciones();
    string get_tipo();
    string get_sabor();
    string get_fecha();
    float get_precio();

};
    

  int Producto::get_porciones ()
  {
    return porciones;
  }

  string Producto:: get_tipo(){
      return tipo;
  }
  string Producto::get_sabor ()
  {
    return sabor;
  }
  
  string Producto::get_fecha ()
  {
    return fecha;
  }
  float Producto::get_precio ()
  {
    return precio;
  }






//Herencia
//Clase hija 1
class Pastel:public Producto
{

private:
  string crema;
  string relleno;
  string decoracion;


public:

    Pastel ():Producto (0, "Pastel", "", "",0){};
  
    Pastel (int porciones, string tipo, string sabor, string fecha, double precio, string cre, string rell, string deco):
    Producto (porciones, "Pastel", sabor, fecha, precio), crema(cre), relleno(rell), decoracion(deco){};

    string get_crema();
    string get_relleno();
    string get_decoracion();
  
   
    string imprime_orden();
    
    double calcularprecio(){  //Sobreescritura de métodos
      precio = (porciones * 60) + 45;
      return precio;
    }
  };


 string Pastel::get_crema ()
  {
    return crema;
  }

  string Pastel::get_relleno ()
  {
    return relleno;
  }

  string Pastel::get_decoracion ()
  {
    return decoracion;
  } 
  
string Pastel::imprime_orden(){ //Sobreescritura, sirve para mostrar los datos del pedido del producto.
	stringstream aux;
  aux << "Porciones: " << porciones << "  Tipo: " << tipo << "  Sabor: " << sabor << "  Fecha: " << fecha << "  Precio: " << 
	  precio << "  Crema: " << crema << "  Relleno: " << relleno << "  Decoración: " << decoracion << endl;
  return aux.str();
}


//Clase hija 2

class Galleta:public Producto{

public:
    Galleta ():Producto (0, "Galleta", "", "", 0.0){};
    Galleta (int porciones, string tipo, string sabor, string fecha, double precio):
	Producto (porciones, "Galleta", sabor, fecha, precio){};
    
    
    string imprime_orden();
    
  double calcularprecio(){
    precio = (porciones * 8) + 7;
    return precio;
  }
};

string Galleta::imprime_orden(){  //Sobreescritura, sirve para mostrar los datos del pedido del producto.
	stringstream aux;
  aux<<"  Porciones: " << porciones << "  Tipo:  " << tipo << "  Sabor: " << sabor << "  Fecha: " << fecha << "  Precio: " << precio << endl;
  return aux.str();
}

//Clase hija 3
class Tarta:public Producto{
private:
  string decoracion;
public:
  Tarta ():Producto (0, "Tarta", "", "", 0){};
  Tarta (int porciones, string tipo, string sabor, string fecha, double precio, string deco):
	Producto (porciones, "Tarta", sabor, fecha, precio), decoracion(deco){};

  double calcularprecio(){
    precio = (porciones * 30) + 35;
    return precio;
  }
  string get_decoracion();
    
  string imprime_orden();
};

string Tarta::imprime_orden(){  //Sirve para mostrar los datos del pedido del producto.
	stringstream aux;
  aux<<"Porciones: "<<porciones<<"  Tipo: "<<tipo<<"  Sabor: "<<sabor<<"  Fecha: "<< 
	  fecha<<"  Precio: "<<precio<<"  Decoración: "<<decoracion<< endl;
  return aux.str();
}
string Tarta::get_decoracion ()
{
  return decoracion;
} 
 


#endif // PRODUCTO_H_
