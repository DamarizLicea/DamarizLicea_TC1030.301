#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <string>

#include <iostream>
#include <sstream>

using namespace std;

//clase Producto
class Producto
{

  //variables

protected:
  int porciones;
  string tipo;
  string sabor;
  string fecha;
  float precio;


public:
    Producto (): porciones(0), tipo (""), sabor(""),fecha(""), precio(0.0){} ;
    
    Producto (int porc, string ti, string sab, string fec, double pres): porciones(porc),tipo(ti), sabor(sab),fecha(fec), precio(pres) {};
    float cobrar(float preciofinal){return 0.0;}
    void imprime_orden();
    void agrega_pedido();
	
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








class Pastel:public Producto
{

private:
  string crema;
  string relleno;
  string decoracion;
  double preciofinal;

public:

    Pastel ():Producto (0, "Pastel", "", "", 0.0){};
  
    Pastel (int porciones,string tipo,string sabor,string fecha, double precio, string cre,string rell,string deco, double prefin):Producto (porciones, "Pastel", sabor, fecha, precio), crema(cre), relleno(rell), decoracion(deco),preciofinal(prefin){};

    string get_crema();
    string get_relleno();
    string get_decoracion();
    double get_preciofinal();
    float cobrar(float preciofinal){return 0.0;}
    void imprime_orden();
    void agrega_pedido();
  };

  void Pastel::imprime_orden(){
	cout << "Porciones: "<< porciones << endl;
	cout << "Tipo: "<< tipo << endl;
	cout << "Sabor: "<< sabor << endl;
	cout << "Crema: "<< crema << endl;
	cout << "Relleno: "<< relleno << endl;
	cout << "Decoracion: "<< decoracion << endl;
} 
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
  double Pastel::get_preciofinal ()
  {
    return preciofinal;
  }





class Galleta:public Producto{
    private:

public:
    Galleta ():Producto (0, "Galleta", "", "", 0.0){};
    Galleta (int porciones,string tipo,string sabor,string fecha, double precio):Producto (porciones, "Galleta", sabor, fecha, precio){};


   float cobrar(float preciofinal){return 0.0;}
    void imprime_orden();
    void agrega_pedido();
  };
void Galleta::imprime_orden(){
	cout << "Tipo: "<< tipo << endl;
	cout << "Sabor: "<< sabor << endl;
	cout << "Fecha: "<< fecha << endl;
} 

class Tarta:public Producto
{

private:
  string decoracion;
  double preciofinal;

public:

    Tarta ():Producto (0, "Tarta", "", "", 0.0){};
  
    Tarta (int porciones,string tipo,string sabor,string fecha, double precio,string deco, double prefin):Producto (porciones, "Tarta", sabor, fecha, precio), decoracion(deco),preciofinal(prefin){};


    string get_decoracion();
    double get_preciofinal();
    float cobrar(float preciofinal){return 0.0;}
    void imprime_orden();
    void agrega_pedido();
  };

  void Tarta::imprime_orden(){
	cout << "Porciones: "<< porciones << endl;
	cout << "Tipo: "<< tipo << endl;
	cout << "Sabor: "<< sabor << endl;
	cout << "Decoracion: "<< decoracion << endl;
    cout << "Precio Final: "<< preciofinal << endl;
} 
//revisar implementacion, pero quería hacer ejemplo de sobreescritura
 

  string Tarta::get_decoracion ()
  {
    return decoracion;
  } 
  double Tarta::get_preciofinal ()
  {
    return preciofinal;
  }








#endif // PRODUCTO_H_
