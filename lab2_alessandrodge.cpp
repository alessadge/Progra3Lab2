#include <iostream>
#include <cmath>
using namespace std;
int factorial(int i);
int menu();
float euler(float x);


int main(){

bool salir = false;
  while(!salir){

        switch(menu()){
        case 1:{

        float x;
        cout<<"Escriba un numero para calcular el numero de Euler. "<<endl;
        cin>>x;
        cout<<"EL numero "<<x<<" tiene un numero Euler de: "<<euler(x)<<endl;

        break;
        }
        case 2:{
	float lado1, lado2, lado3, lado4, ladoDB;
	float puntos[7];
	  //Leer puntos
	  cout<<"Escriba un digito X del punto A: (x, y) "<<endl;
	  cin>> puntos[0];
	  cout<<"Escriba un digito Y del punto A: (x, y) "<<endl;
          cin>> puntos[1];
	  cout<<"Escriba un digito X del punto B: (x, y) "<<endl;
          cin>> puntos[2];
	  cout<<"Escriba un digito Y del punto B: (x, y) "<<endl;
          cin>> puntos[3];
	  cout<<"Escriba un digito X del punto C: (x, y) "<<endl;
          cin>> puntos[4];
	  cout<<"Escriba un digito Y del punto C: (x, y) "<<endl;
          cin>> puntos[5];
	  cout<<"Escriba un digito X del punto D: (x, y) "<<endl;
          cin>> puntos[6];
	  cout<<"Escriba un digito Y del punto D: (x, y) "<<endl;
          cin>> puntos[7];

	lado1 = sqrt(pow(puntos[2]-puntos[0],2)	+ pow(puntos[3]-puntos[1],2));
	lado2 = sqrt(pow(puntos[4]-puntos[2],2) + pow(puntos[5]-puntos[3],2));
	lado3 = sqrt(pow(puntos[6]-puntos[4],2) + pow(puntos[7]-puntos[5],2));
	lado4 = sqrt(pow(puntos[0]-puntos[6],2) + pow(puntos[1]-puntos[7],2));
	
	cout<<"Los puntos son:\n"<<"("<<puntos[0]<<","<<puntos[1]<<")\n";
	cout<<"Los puntos son:\n"<<"("<<puntos[2]<<","<<puntos[3]<<")\n";
	cout<<"Los puntos son:\n"<<"("<<puntos[4]<<","<<puntos[5]<<")\n";
	cout<<"Los puntos son:\n"<<"("<<puntos[6]<<","<<puntos[7]<<")\n"<<endl;

	cout<<"Los lados del trapezoide miden:\n"
	cout<<"Lado 1: "<< lado1<<endl;
	cout<<"Lado 2: "<< lado2<<endl;
	cout<<"Lado 3: "<< lado3<<endl;
	cout<<"Lado 4: "<< lado4<<endl;

	//sacando el lado DB
	ladoDB = sqrt(pow(puntos[2]-puntos[6],2) + pow(puntos[3]-puntos[7],2));
	cout<<"Los lados del primer triangulo miden:\n"
        cout<<"Lado 1: "<< lado4<<endl;
        cout<<"Lado 2: "<< lado1<<endl;
        cout<<"Lado 3: "<< ladoDB<<endl;
 	
	cout<<"Los lados del segundo triangulo miden:\n"
        cout<<"Lado 1: "<< lado2<<endl;
        cout<<"Lado 2: "<< lado3<<endl;
        cout<<"Lado 3: "<< ladoDB<<endl;
	
	//calculando el perimetro
	float Striangulo1, Striangulo2, S;
	cout<<"Los lados del segundo triangulo miden:\n"
        cout<<"Semiperimetro triangulo 1: "<< lado2<<endl;
        cout<<"Semiperimetro triangulo 2: "<< lado3<<endl;
        cout<<"Perimetro triangulo 1:"<< ladoDB<<endl;
	cout<<"Perimetro triangulo 2:"<< ladoDB<<endl;




	break;
	}
	case 3:{
	
	salir = true;
	break;
	}	
}
  char resp;
  cout<<"Desea continuar[s/n]: "<<endl;
  cin>>resp;
  if(resp == 's' || resp == 'S'){
	salir=false;
  }else{
	salir=true;
  }

}
return 0;
}


int menu(){
  int opcion;
  bool valido = false;
  do{
     cout<<"      MENU"<<endl
         <<"1.- Ejercicio 1"<<endl
         <<"2.- Ejercicio 2"<<endl
         <<"3.- Salir"<<endl;

        cout<<"Ingrese una Opcion: ";
        cin>>opcion;

        if(opcion > 0 && opcion <5){

        valido=true;

        }else{
            cout<<"Opcion no valida, intente de nuevo ..."<<endl;
        }

  }while(!valido);

return opcion;
}

int factorial(int i){
  if(i<0)//validar input
     return -1;
  else if(i==0){
     return 1;
  }else{
     return i * factorial(i-1);
  }
}

float euler(float x){
float temp=0;
 for(float i=1; i<=10; i++){
   temp += pow(x,i)/factorial(i);

 }
 temp = temp + 1;
 x = temp;
 return x;
}
