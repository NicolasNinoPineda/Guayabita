#include <iostream>
#include <ctime>

#include<stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int lanzamiento (int n, int m){
	
	if(m!=0){
		cout<<"primer lanzamiento "<<n<<endl;
		cout<<"segundo lanzamiento "<<m<<endl;
		if(m>n){
			cout<<"El jugador gana, retira lo que aposto"<<endl;
			cout<<" "<<endl;
			return 1;
		}else{
			if(n==m){
				cout<<"Tiros iguales, debe colocar el case"<<endl;
				cout<<" "<<endl;
				return 0;
			}else{
				cout<<"El jugador pierde, debe colocar lo que aposto"<<endl;
				cout<<" "<<endl;
				return 0;
			}
			
		}
	}else{
		if (( n ==1) || (n ==6 )){
			cout<<"El jugador pierde con "<<n<<" debe colocar el case"<<endl;
			cout<<" "<<endl;
			return 0;
		}else{
			lanzamiento(n,(rand()%6+1));
		}
	
	}

}

void juego (int mesa,int dineroJ1,int dineroJ2,int turno){
	cout<<"Dinero mesa : "<<mesa<<endl;
	cout<<"Dinero jugador 1: "<<dineroJ1<<endl;
	cout<<"Dinero jugador 2: "<<dineroJ2<<endl;
	
	if (mesa==0){
		cout<<" "<<endl;
		cout<<"Juego terminado, la mesa se quedo sin dinero"<<endl;
	}else{
		if(turno==1){
			if (dineroJ1==0){
				cout<<" "<<endl;
				cout<<"El jugador 1 queda elimindado, no posee mas dinero"<<endl;
			}else{
				cout<<"El jugador 1 realiza su tiro"<<endl;
				if((lanzamiento((rand()%6+1),0))==1){
					juego(mesa-100,dineroJ1+100,dineroJ2,2);
				}else{
					juego(mesa+100,dineroJ1-100,dineroJ2,2);
				}
			}
		}
		
		if(turno==2){
			if (dineroJ2==0){
				cout<<" "<<endl;
				cout<<"El jugador 2 queda elimindado, no posee mas dinero"<<endl;
			}else{
				cout<<"El jugador 2 realiza su tiro"<<endl;
				if((lanzamiento((rand()%6+1),0))==1){
					juego(mesa-100,dineroJ1,dineroJ2+100,1);
				}else{
					juego(mesa+100,dineroJ1,dineroJ2-100,1);
				}
			}
		}
	}
		//juego(Case,  (lanzamiento((rand()%6+1),0,mesa)),  dinero+mesa);
		
	
}


int main(int argc, char** argv) {
	srand(time(0));
	
	//dinero en la mesa,dinero del jugador 1 sin el case, dinero del jugador 2 sin el case, turno
	juego(200,300,300,1);
	
	
	
	
	
	
	return 0;	
}
