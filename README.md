# Guayabita
Juego Guayabita

Agosto 28 del 2018

Universidad Distrital Francisco Jose de Caldas

Modelos de programacion 2

Integrantes

-Nicolas Niño Pineda               20162020116
-Nicolas Andres Garzon Vasquez     20152020034
-John Jairo Lancheros rangel       20162020077


Simulacion del conocido juego guayabita, sin utilizar estados, implementando la recursividad. El codigo  consta de las siguientes caracteristicas:

1) Posee dos jugadores, cada uno empieza con una determinada suma de dinero.
2) Se establece una apuesta minima , denominada case.
3) Cada jugador debe colocar el valor del case en la mesa.
4) Se efectuaran turnos, en los que el jugador lanza el dado, segun el resultado se pueden dar las siguientes posibilidades.
    Al sacar 1 o 6, pierde, y debe colocar el valor del case en la mesa, cambio de turno.
    Al sacar 2,3,4,5 posee un segundo turno.
    En el segundo lanzamiento debe obtener un numero mayor al primer lanzamiento, si esto sucede, el jugador ganara el valor      apostado, de lo contrario perdera lo apostado, y se cambiara el turno.
5) El juego termina cuando un jugador o la mesa no posee mas dinero.

La simulacion implementa 2 funcionas resursivas.
1) Una funcion que mantenga el juego , organice las apuestas y los turnos.
2) Una funcion que realice los lanzamientos.
