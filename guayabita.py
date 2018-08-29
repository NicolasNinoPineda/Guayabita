from random import randrange

def lanzamiento(n,m):
	if m != 0:
		print "primer lanzamiento ", n
		print "segundo lanzamiento",m
		if m>n:
			print "El jugador gana, retira lo que aposto"
			print " "
			return (1)
		else:
			if n==m:
				print "Tiros iguales, debe colocar el case"
				print " "
				return (0)
			else:
				print "El jugador pierde, debe colocar lo que aposto"
				print " "
				return (0)

	else:
		if m==1 or m==6:
			print "El jugador pierde con ",n," debe colocar el case"
			print " "
			return (0)
		else:
			return lanzamiento(n,randrange(1,7))


	




def juego(mesa,dineroJ1,dineroJ2,turno):
	print "Dinero mesa :     " , mesa
	print "Dinero jugador 1: " , dineroJ1
	print "Dinero jugador 2: " , dineroJ2
	if mesa==0:
		print " "
		print "Juego terminado, la mesa se quedo sin dinero"
	else:
		if turno==1:
			if dineroJ1==0:
				print " "
				print "El jugador 1 queda eliminado, no posee mas dinero"
			else:
				print "El jugador 1 realiza su tiro"
				if (lanzamiento(randrange(1,7),0))==1:
					juego(mesa-100,dineroJ1+100,dineroJ2,2)
				else:
					juego(mesa+100,dineroJ1-100,dineroJ2,2)

		if turno==2:
			if dineroJ2==0:
				print " "
				print "El jugador 2 queda eliminado, no posee mas dinero"
			else:
				print "El jugador 2 realiza su tiro"
				if lanzamiento(randrange(1,7),0)==1:
					juego(mesa-100,dineroJ1,dineroJ2+100,1)
				else:
					juego(mesa+100,dineroJ1,dineroJ2-100,1)

	return (0)	



def main():
	##//dinero en la mesa, dinero del jugador 1, dinero del jugador 2, turno
	juego(200,300,300,1)


main()








