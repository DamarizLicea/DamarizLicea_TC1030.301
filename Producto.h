#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <string>

#include <iostream>

using namespace std;

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
    Producto (string ti, string sab, string fec);
    Producto (int porc, string ti, string sab, string cre, string rell,
	      string deco);
    Producto (int porc, string ti, string sab, string cre, string rell, string deco, string fec, float pres);	//Sobrecarga
    float cobrar(float preciofinal){return 0.0;}
    void imprime_orden();
    void agrega_pedido();

};
    Producto::Producto (string ti, string sab, string fec)
  {
    tipo = ti;
    sabor = sab;
    fecha = fec;
  }
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



class Pastel:public Producto
{

private:
  float preciofinal;

public:

    Pastel (float prefin):Producto ( porc, ti, sab, cre, rell, deco)
  {
    preciofinal = 0.0;
  }
  
   Pastel (float prefin):Producto (porc, ti, sab, cre, rell, deco, fec, pres)
  {
    preciofinal = 0.0;
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


class Galleta:public Empleado{
    private:
    int bolsas
    

public:
    Galleta (int bol):Producto (string ti, string sab, string fec)
  {
     bolsas= 0 ;
  }


   float cobrar(float preciofinal){return 0.0;}
    void imprime_orden();
    void agrega_pedido();
  };
void Galleta::imprime_orden(){
	cout << "Bolsas: "<< bolsas << endl;
	cout << "Tipo: "<< tipo << endl;
	cout << "Sabor: "<< sabor << endl;
	cout << "Fecha: "<< fecha << endl;
} 

// Faltaria poner tarta, pero es casi igual a pastel y quisiera corregir los errores de esto primero :)))



#endif // PRODUCTO_H_

