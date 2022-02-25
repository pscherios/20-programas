#include <iostream>
#include <cstdlib>
#include <string>
#include "miniwin.h"
#include <conio.h>
#include <windows.h>
#include <cmath>
#include <math.h>
using namespace std;
using namespace miniwin;
void pause();
void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x1;
	dwPos.Y=y1;
	SetConsoleCursorPosition(hcon,dwPos);
}
int main(){
	bool flag=false;
	int tecla;
	do{
		system("cls");
		cin.clear();
		cout<<"Programas en C++"<<endl;
		cout<<"----------------"<<endl;
		cout<<"\t1. Operaciones"<<endl;
		cout<<"\t2. Numeros Pares e Impares"<<endl;
		cout<<"\t3. Conversor de unidades"<<endl;
		cout<<"\t4. Palindromos"<<endl;
		cout<<"\t5. Conversion de numeros arabigos a romanos"<<endl;
		cout<<"\t6. Numeros a letras"<<endl;
		cout<<"\t7. Numeros con decimal a letras"<<endl;	
		cout<<"\t8. Tabla de multiplicar"<<endl;
		cout<<"\t9. Tablas de multiplicar"<<endl;
		cout<<"\t10. Multiplicacion: grafica y manual"<<endl;
		cout<<"\t11. Conversor: Decimal a binario"<<endl;
		cout<<"\t12. Conversor: Decimal a hexadecimal"<<endl;
		cout<<"\t13. Creador de figuras geometricas"<<endl;
		cout<<"\t14. Puntito"<<endl;
		cout<<"\t15. Simulador de cajero"<<endl;
		cout<<"\t16. Calculadora de hipotenusa"<<endl;
		cout<<"\t17. Dias transcurridos"<<endl;
		cout<<"\t18. Ordenar Numeros"<<endl;
		cout<<"\t19. Salario"<<endl;
		cout<<"\t20. ---"<<endl;
		cout<<"Elige una opcion"<<endl;
		cin>>tecla;
		switch(tecla){
			case 1:{
				system("cls");
				int cal1,cal2;
				cout<<"Ingrese dos numeros para realizar las operaciones con ellos"<<endl;
				cin>>cal1;
				cin>>cal2;
				cout<<"Suma: ";cout<<cal1+cal2<<endl;
				cout<<"Resta: ";cout<<cal1-cal2<<endl;
				cout<<"Multiplicacion: ";cout<<cal1*cal2<<endl;
				cout<<"Division: ";cout<<cal1/cal2<<endl;
				pause();
				break;
			}
			case 2:{
				system("cls");
				int parim;
				cout<<"Ingrese un numero entero"<<endl;
				cin>>parim;
				if(parim%2==0)
					cout<<"El numero es par"<<endl;
				else
					cout<<"El numero es impar"<<endl;
				pause();
				break;
			}
			case 3:{
				system("cls");
				int uni;
				char opcion;
				cout<<"Elija la unidad que quiera convertir"<<endl;
				cout<<"\t1. Kilometros"<<endl;
				cout<<"\t2. Millas"<<endl;
				cout<<"\t3. Metros"<<endl;
				cout<<"\t4. Pulgadas"<<endl;
				cout<<"\t5. Libras"<<endl;
				cout<<"\t6. Kilos"<<endl;
				cin>>opcion;
				switch(opcion){
					case'1':
						cout<<"Ingrese los kilometros que se convertiran a millas"<<endl;
						cin>>uni;
						cout<<"Millas: ";cout<<uni/1.609<<endl;
						pause();
						break;
					case'2':
						cout<<"Ingrese las millas que se convertiran a kilometros"<<endl;
						cin>>uni;
						cout<<"Kilometros: ";cout<<uni*1.609<<endl;
						pause();
						break;
					case'3':
						cout<<"Ingrese los metros que se convertiran a pulgadas"<<endl;
						cin>>uni;
						cout<<"Pulgadas: ";cout<<uni*39.37<<endl;
						pause();
						break;
					case'4':
						cout<<"Ingrese las pulgadas que se convertiran a metros"<<endl;
						cin>>uni;
						cout<<"Metros: ";cout<<uni/39.37<<endl;
						pause();
						break;
					case'5':
						cout<<"Ingrese las libras que se convertiran a kilos"<<endl;
						cin>>uni;
						cout<<"Kilos: ";cout<<uni/2.205<<endl;
						pause();
						break;
					case'6':
						cout<<"Ingrese los kilos que se convertiran a libras"<<endl;
						cin>>uni;
						cout<<"Libras: ";cout<<uni*2.205<<endl;
						pause();
						break;
				}
			}
			case 4:{
				system("cls");
				string word;
				cout<<"Escriba la palabra que desea analizar"<<endl;
				cin>>word;
				if(word==string(word.rbegin(),word.rend())){
					cout<<"La palabra es un palindromo"<<endl;
				}
				else{
					cout<<"La palabra no es un palindromo"<<endl;
				}
				pause();
				break;
			}
			case 5:{
				system("cls");
				int numero, unidades, decenas, centenas, millares;
 				cout<<"Ingrese un numero"<<endl;
				cin>>numero;
				unidades = numero % 10; numero /= 10;
 				decenas = numero % 10; numero /= 10;
 				centenas = numero % 10; numero /= 10;
 				millares = numero % 10; numero /= 10;
 				switch (millares){
  					case '1': cout<<"M"; break;
  					case '2': cout<<"MM"; break;
  					case '3': cout<<"MMM"; break;
 				}
 				switch (centenas){
  					case '1': cout<<"C"; break;
  					case '2': cout<<"CC"; break;
  					case '3': cout<<"CCC"; break;
  					case '4': cout<<"CD"; break;
  					case '5': cout<<"D"; break;
  					case '6': cout<<"DC"; break;
  					case '7': cout<<"DCC"; break;
  					case '8': cout<<"DCCC"; break;
  					case '9': cout<<"CM"; break; 
				}
 				switch (decenas){
  					case '1': cout<<"X"; break;
  					case '2': cout<<"XX"; break;
  					case '3': cout<<"XXX"; break;
  					case '4': cout<<"XL"; break;
  					case '5': cout<<"L"; break;
  					case '6': cout<<"LX"; break;
  					case '7': cout<<"LXX"; break;
  					case '8': cout<<"LXXX"; break;
  					case '9': cout<<"XC"; break; 
				}
 				switch (unidades){
  					case '1': cout<<"I"; break;
  					case '2': cout<<"II"; break;
  					case '3': cout<<"III"; break;
  					case '4': cout<<"IV"; break;
  					case '5': cout<<"V"; break;
  					case '6': cout<<"VI"; break;
  					case '7': cout<<"VII"; break;
  					case '8': cout<<"VIII"; break;
  					case '9': cout<<"IX"; break;
				}
				pause();
				break;
			}
			case 6:{
				system("cls");
				int x;
				cout<<"ingrese un numero"<<endl;
				cin>>x;
				if((x<1)||(x>999)) 
					cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
				else{
					if(x>=900){
						cout<<"NOVECIENTOS ";
						x=x-900;}
   	   				else if(x>=800){
						cout<<"OCHOCIENTOS ";
						x=x-800;}
	   				else if(x>=700){
					   	cout<<"SETECIENTOS ";
						x=x-700;}
	   				else if(x>=600){
					   cout<<"SEISCIENTOS ";
					   x=x-600;}
	   				else if(x>=500){
					   cout<<"QUINIENTOS ";
					   x=x-500;}
	   				else if(x>=400){
					   cout<<"CUATROCIENTOS ";
					   x=x-400;}
	   				else if(x>=300){
					   cout<<"TRESCIENTOS ";
					   x=x-300;}
	   				else if(x>=200){
					   cout<<"DOSCIENTOS ";x=x-200;}
	   				else if(x>100){
					   cout<<"CIENTO ";
					   x=x-100;}
	   				else if(x==100){
					   cout<<"CIEN"
					   ;x=x-100;}
					if(x>90){
						cout<<"NOVENTA Y ";
						x=x-90;}
	    			if(x==90){
						cout<<"NOVENTA";
						x=x-90;}  
	    			if(x>80){
						cout<<"OCHENTA Y ";
						x=x-80;}
	    			if(x==80){
						cout<<"OCHENTA";
						x=x-80;}
	    			if(x>70){
						cout<<"SETENTA Y ";
						x=x-70;}
	    			if(x==70){
						cout<<"SETENTA"
						;x=x-70;}
	    			if(x>60){
						cout<<"SESENTA Y ";
						x=x-60;}
	    			if(x==60){
						cout<<"SESENTA";
						x=x-60;}
	    			if(x>50){
						cout<<"CINCUENTA Y ";
						x=x-50;}
	    			if(x==50){
						cout<<"CINCUENTA";
						x=x-50;}
	    			if(x>40){
						cout<<"CUARENTA Y ";
						x=x-40;}
	    			if(x==40){
						cout<<"CUARENTA";
						x=x-40;}
	    			if(x>30){
						cout<<"TREINTA Y ";
						x=x-30;}
	    			if(x==30){
						cout<<"TREINTA";
						x=x-30;}
	    			if(x>20){
						cout<<"VEINTI";
						x=x-20;}
	    			if(x==20){
						cout<<"VEINTE";
						x=x-20;}
					if(x>=16){
						cout<<"DIECI";
						x=x-10;}
	  				else if(x==15){
					  cout<<"QUINCE";
					  x=x-15;}
	   				else if(x==14){
					   cout<<"CATORCE";
					   x=x-14;}
	   				else if(x==13){
					   cout<<"TRECE";
					   x=x-13;} 
	   				else if(x==12){
					   cout<<"DOCE";
					   x=x-12;}
	   				else if(x==11){
					   cout<<"ONCE";
					   x=x-11;}
	   				else if(x==10){
					   cout<<"DIEZ";
					   x=x-10;}		
					if(x==9){
						cout<<"NUEVE";
						x=x-9;}
					if(x==8){
						cout<<"OCHO";
						x=x-8;}
					if(x==7){
						cout<<"SIETE";
						x=x-7;}
	    			if(x==6){
						cout<<"SEIS";
						x=x-6;}
	   				else if(x==5){
					   cout<<"CINCO";
					   x=x-5;}
	   				else if(x==4){
					   cout<<"CUATRO";
					   x=x-4;}
	   				else if(x==3){
					   cout<<"TRES";
					   x=x-3;}
	   				else if(x==2){
					   cout<<"DOS";
					   x=x-2;}
	   				else if(x==1){
					   cout<<"UNO";
					   x=x-1;}
					cout<<endl;
					pause();
					break;
	   			}
			}
			case 7:{
				system("cls");
				cout<<"No lo super hacer lo siento :("<<endl;
				break;
			}
			case 8:{
				system("cls");
				int numero;
				do{
					cout<<"Ingrese un numero"<<endl;
					cin>>numero;
				}
				while((numero<1)||(numero>999));
				for(int i=1;i<=10;i++){
					cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
				}
				pause();
				break;
			}
			case 9:{
				system("cls");
				for(int x=1;x<=10;x++){
					for(int i=1;i<=10;i++){
						cout<<x<<" * "<<i<<" = "<<x*i<<endl;
					}
				}
				pause();
				break;
			}
			case 10:{
				system("cls");
				cout<<"Perdon no lo super hacer :("<<endl;
				pause();
				break;
			}
			case 11:{
				system("cls");
				cout<<"Ingrese un numero entero positivo"<<endl;
				int numero;
				string binario="";
				cin>>numero;
				if(numero>0){
					while(numero>0){
						if(numero%2==0){
							binario="0"+binario;
						}else{
							binario="1"+binario;
						}
						numero=(int)numero/2;
					}
				}
				else if(numero==0){
					binario="0";
				}else{
					binario="No se pudo convertir, ingreso un entero positivo";
				}
				cout<<"El resultado es: "<<binario<<endl;
				pause();
				break;
			}
			case 12:{
				system("cls");
				long dec;
    			int rem;

    			cout << "Ingrese numero decimal: "<<endl;
    			cin >> dec;

    			while (dec > 0) {
        			rem = dec % 16;
        			if (rem > 9) {
            			switch (rem) {
               				case 10: cout << "A"; break;
               				case 11: cout << "B"; break;
               				case 12: cout << "C"; break;
               				case 13: cout << "D"; break;
               				case 14: cout << "E"; break;
               				case 15: cout << "F"; break;
            			}
        			}
        			else {
            		cout << rem<<endl;
        			}
        			dec = dec / 16;
    			}
				pause();
				break;
			}
			case 13:{
				system("cls");
  				color(AZUL);
  				rectangulo(10,10,50,50);
  				color(ROJO);
  				circulo(100,50,20);
  				color(VERDE);
  				circulo_lleno(50,100,20);
  				refresca();
				pause();
				break;
			}
			case 14:{
				system("cls");
				int x=10,y=10;
				char opcion;
				while (opcion!='z'){
					system("cls");
					gotoxy(x,y);
					cout<<".";
					opcion=getch();
					switch(opcion){
						case'w': y--; break;
						case's': y++; break;
						case'a': x--; break;
						case'd': x++; break;
					}
				}
				pause();
				break;
			}
			case 15:{
				system("cls");
				const string claveCorrecta = "1234";
    			cout << "Bienvenido al cajero automático\n";
    			cout << "Ingrese la clave: ";
    			string clave = "";
    			cin >> clave;
    			if (clave != claveCorrecta)
    			{
        			cout << "Clave incorrecta";
        			return 0;
    			}
    			cout << "Clave correcta\nBienvenido\n";
    			double fondos = 5000;
    			string eleccion = "";
    			while (eleccion != "2")
    			{
        			cout << "Fondos disponibles: " << fondos << endl;
        			cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        			cin >> eleccion;
        			if (eleccion == "1")
        			{
            			double retiro;
            			cout << "Ingrese cantidad a retirar: " << endl;
            			cin >> retiro;
            			if (retiro > fondos || retiro <= 0)
            			{
                			cout << "No puede retirar esa cantidad";
            			}
            			else
           				{
                			cout << "OK. Ha retirado " << retiro << endl;
                			fondos = fondos - retiro;
            			}
        			}
    			}		
				pause();
				break;
			}
			case 16:{
				system("cls");
				int a,b,c;
				cout<<"Ingrese el cateto a y el cateto b del triangulo"<<endl;
				cin>>a;
				cin>>b;
				c=sqrt((a*a)+(b*b));
				cout<<"La hipotenusa es: "<<c<<endl;
				pause();
				break;
			}
			case 17:{
				system("cls");
				int m,a;
				cout<<"Ingrese mes y a"<<char(164)<<"o"<<endl;
				cin>>m>>a;
     			if((a%4)==0){
     				cout<<"365 dias"<<endl;
				} 
    			else{
    				cout<<"364 dias"<<endl;
				}
        		cin.ignore();
				pause();
				break;
			}
			case 18:{
				system("cls");
				int i,j,k,cn;
    			int n[cn];
    			cout<<"Cantidad de numeros que desea Ingresar: ";
				cin>>cn;
    			for(i=0;i<cn;i++){
        		cout<<"Ingrese  numero "<<i+1<<" : ";
        		cin>>n[i];    
   				}
 
    			for(i=1;i<cn;i++){
        			for(j=0;j<cn-i;j++){
            			if(n[j]>n[j+1]){
							k=n[j+1]; n[j+1]=n[j]; n[j]=k;
						}
        			}
    			}
 				for(i=0;i<cn;i++){
        			cout<<n[i]<<endl;
    			}
    			cin.ignore();
				pause();
				break;
			}
			case 19:{
				system("cls");
				string apno;
    			float hrtr,tahr,subt,boni,tota;
    			cout<<"Calculos de pagos\n\n";
    			cout<<"Nombres:\t";cin>>apno;
    			cout<<endl<<endl<<"Horas Trabajadas:\t";
				cin>>hrtr;
    			if (hrtr<=0){
    				cout<<"No trabajo nada"<<endl;
				}
				else{
					cout<<"Tarifa por hora:\t";
					cin>>tahr;
					subt=hrtr*tahr;
				}
    			if(hrtr>192){
    				boni=subt*0.05;
				}
    			else{
    				boni=subt*0.03;
    				tota=subt+boni;
    				cout<<"El sub total es:\t"<<subt<<endl;
    				cout<<"La bonifiacion es:\t"<<boni<<endl;
    				cout<<"El total a pagar es:\t"<<tota<<endl<<endl;
    			}
				cin.ignore();
				pause();
				break;
			}
			case 20:{
				system("cls");
				int not1,not2,not3,not4;
				float prom;
				cout<<"Ingrese las 4 notas: "<<endl;
				cin>>not1;
				cin>>not2;
				cin>>not3;
				cin>>not4;
				prom=(not1+not2+not3+not4)/4;
				cout<<"El promedio es: "<<prom<<endl;
				if(prom>59){
					cout<<"Ha aprobado"<<endl;
				}
				else{
					cout<<"Ha reprobado"<<endl;
				}
				pause();
				break;
			}
		}
	}
	while(flag!=true);
	return 0;
}

void pause(){
	cout<<"Pulsa cualquier tecla para continuar";
	getwchar();
	getwchar();
}
