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

        int num1, num2;
        cout<<"Escriba un numero: ";
        cin>>num1;
        cout<<"Escriba otro numero: ";
        cin>>num2;
        cout<<"El resultado es: "<<num1 + num2<<endl;
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
