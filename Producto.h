#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <string>

#include <iostream>
#include <sstream>

using namespace std;

//clase Producto, es la clase padre
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
    Producto (): porciones(0), tipo (""), sabor(""),fecha(""), precio(0.0){} ; //CONSTRUCTOR DEFAULT
    //SOBRECARGA
    Producto (int porc, string ti, string sab, string fec, double pres): porciones(porc),tipo(ti), sabor(sab),fecha(fec), precio(pres) {};
    

    
    virtual string imprime_orden()=0;  //ABSTRACCION
    virtual double calcularprecio()=0;
	
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






//HERENCIA
//Clase hija 1
class Pastel:public Producto
{

private:
  string crema;
  string relleno;
  string decoracion;


public:

    Pastel ():Producto (0, "Pastel", "", "",0){};
  
    Pastel (int porciones,string tipo,string sabor,string fecha, double precio, string cre,string rell,string deco):Producto (porciones, "Pastel", sabor, fecha, precio), crema(cre), relleno(rell), decoracion(deco){};

    string get_crema();
    string get_relleno();
    string get_decoracion();
  

    string imprime_orden();
    
    double calcularprecio(){
      precio=(porciones*60)+45;
      return precio;
    }
  };

//revisar implementacion, pero quería hacer ejemplo de sobreescritura
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
  
string Pastel::imprime_orden(){//SOBRESCRITO
	stringstream aux;
        aux<<"Porciones: "<<porciones<<"  Tipo: "<<tipo<<"  Sabor: "<<sabor<<"  Fecha: "<< fecha<<"  Precio: "<<precio<<"  Crema: "<<crema<<"  Relleno: "<<relleno<<"  Decoración: "<<decoracion<< endl;
       return aux.str();
}



//Clase hija 2

class Galleta:public Producto{
    private:

public:
    Galleta ():Producto (0, "Galleta", "", "", 0.0){};
    Galleta (int porciones,string tipo,string sabor,string fecha, double precio):Producto (porciones, "Galleta", sabor, fecha, precio){};
    
    void agrega_pedido();
    
    string imprime_orden();
    
  double calcularprecio(){
    precio=(porciones*8)+7;
    return precio;
}
  };

string Galleta::imprime_orden(){  //SOBRESCRITURA
	stringstream aux;
        aux<<"  Porciones: "<<porciones<<"  Tipo:  "<< tipo<< "  Sabor: "<< sabor<< "  Fecha: "<<fecha<<"  Precio: "<<precio<<endl;
        return aux.str();
}

//Clase hija 3
class Tarta:public Producto
{

private:
  string decoracion;
  

public:

    Tarta ():Producto (0, "Tarta", "", "", 0){};
  
    Tarta (int porciones,string tipo,string sabor,string fecha, double precio,string deco):Producto (porciones, "Tarta", sabor, fecha, precio), decoracion(deco){};

    double calcularprecio(){
    precio=(porciones*30)+35;
    return precio;
    }
    string get_decoracion();
    
    string imprime_orden();
  };

 string Tarta::imprime_orden(){
	stringstream aux;
        aux<<"Porciones: "<<porciones<<"  Tipo: "<<tipo<<"  Sabor: "<<sabor<<"  Fecha: "<< fecha<<"  Precio: "<<precio<<"  Decoración: "<<decoracion<< endl;
        return aux.str();
}

//revisar implementacion, pero quería hacer ejemplo de sobreescritura
 

  string Tarta::get_decoracion ()
  {
    return decoracion;
  } 
 


#endif // PRODUCTO_H_
