# DamarizLicea_TC1030.301
***TC1030 PROYECTO PASTEL.***


* Dado que mi sueño a futuro es abrir una pastelería, y siempre estoy pensando en cómo voy a manejarla cuando la tenga, decidí retomar la idea de mi proyecto del primer semestre y reescribirla en el lenguaje de C++. Esperando crear un proyecto mucho mas funcional que la última vez. Tenemos a la pastelería que debe saber cúantos pedidos y como son. Los tipos de productos se manejan según las clases derivadas creadas que son: Pastel, Galletas, Tarta.


* Permite registrar nuevos pedidos directamente en el código, y mediante input, calcular el monto de dinero de las ventas, y muestra los detalles de los pedidos según el tipo de pedido que se ingrese en las opciones del menú.


* En el main podemos encontrar un menú organizado para poder ver lo que hace realmente el programa. No hay excepciones para correrlo, más que tener el IDE bien instalado, en caso de algún problema, también se puede correr en Online GDB.

***Funcionalidad***


* Al iniciar el programa nos encontramos con un menú de opciones que nos pide ingresemos una opción entre las del menú, si se ingresa una letra o un numero mayor o igual a 8, o menor que 1, el programa se despide y termina su repetición. Por eso se especifica que opciones usar para acceder a cada función.
 
 
     * Si se elige cualquiera de las primeras tres opciones del menú, hay que tener cuidado de no ingresar una letra o algún número que no sea entero en la parte donde           se nos pide porciones, porque el programa dejaría de funcionar. El mismo cuidado con no ingresar letras se debe tener en la parte donde se nos pide el precio,          porque también afectaría otras funciones de nuestro programa.



     * Con las demás opciones del programa no se debe tener problema alguno, ya que no pide ingresemos nada, solo despliega/ imprime datos que ya procesó y en los que el         usuario no interfiere.
 
 
***Correcciones***


*Herencia: Producto.h en línea 86


*Sobreescritura: Producto.h en líneas 108-111


*Sobrecarga: Producto.h en línea 40


*Modificadores de acceso: Producto.h en líneas 29-34, 58-78, 86. 

