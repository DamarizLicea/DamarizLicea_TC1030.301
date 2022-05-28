#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <string>

#include <iostream>

using namespace std;

//27/0/22 El código todavia no esta terminado, hay dudas de implementacion de algunas cosas, pero te deje notas de según yo donde estqa lo que vas a evaluar, amigo becario.

//clase Producto
class Producto
{

  //variables

protected:
  int porciones;
  string tipo;
  string sabor;
  string crema;
  string relleno;
  string decoracion;
  string fecha;
  float precio;


public:
    Producto (int porc, string ti, string sab, string cre, string rell,
	      string deco);
    Producto (int porc, string ti, string sab, string cre, string rell, string deco, string fec, float pres);	//Sobrecarga
    float cobrar(float preciofinal){return 0.0;}
    void imprime_orden();
    void agrega_pedido();

};
    Producto::Producto (int porc, string ti, string sab, string cre,
			string rell, string deco)
  {
    porciones = 0;
    tipo = ti;
    sabor = sab;
    crema = cre;
    relleno = rell;
    decoracion = deco;
  }
    Producto::Producto (int porc, string ti, string sab, string cre,
		      string rell, string deco, string fec, float pres)
  {
    porciones = 0;
    tipo = ti;
    sabor = sab;
    crema = cre;
    relleno = rell;
    decoracion = deco;
    fecha = fec precio = 0.0
      
  }


  int get_porciones ()
  {
    return porciones;
  }
  string get_sabor ()
  {
    return sabor;
  }
  string get_crema ()
  {
    return crema;
  }

  string get_relleno ()
  {
    return relleno;
  }

  string get_decoracion ()
  {
    return decoracion;
  }
  string get_fecha ()
  {
    return fecha;
  }
  float get_precio ()
  {
    return precio;
  }


//Metodos de acceso 

class Pastel:public Producto  {

private:
  float preciofinal;

public:

    Pastel (float prefin):Producto ( porc, ti, sab, cre, rell, deco)
  {
    preciofinal = prefin;
  }
  
   Pastel (float prefin):Producto (porc, ti, sab, cre, rell, deco, fec, pres)
  {
    preciofinal = prefin;
  }

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
