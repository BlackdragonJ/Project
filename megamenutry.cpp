#include <iostream>
#include <cstring>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <cmath>

#define USER "c++"
#define PASS "java"
#define ENTER 13 
#define BACKSPACE 8
 

using namespace std;

/*Aqui pondremos las funciones que usaremos en la opcion de modularizacion...
  Los separaremos a traves de barras inlclinadas para saber cual es cual... */

///////////////////////////////////////////////////////////////////////////////////////
proc(float a,float b)
{ 

scanf("%f",&a);  

b = pow(a,3); 

 printf("\n \n El cubo del numero ingresado es: %.2f",b); 

} 
/////////////////////////////////////////////////////////////////////////////////////////

 void proc(int a, int b)
{ 
scanf("%d %d",&a,&b);
 if(a < b)
{  
printf("\n El numero menor es: %d \n \n",a); 
} 
else
{ 
 printf("\n El numero menor es: %d \n \n",b); 
} 
} 
//////////////////////////////////////////////////////////////////////////////////////////
void imp(int x){ 
 for(int i = 0;i <= 10;i++){
   printf(" %d x %d = %d \n \n",x,i,x * i);
    } 
	} 
//////////////////////////////////////////////////////////////////////////////////////////
float area(float b,float h){
float A; 
A = b * h;
 return A;
  } 
  float perim(float b,float h){
   float p;
    p = (2*b) + (2*h); 
	return p; 
	} 
//////////////////////////////////////////////////////////////////////////////////////////
float convertor(float x){
  float m,pulg;
   m = x / pulg; 
   return m;
    } 
//////////////////////////////////////////////////////////////////////////////////////////
int proc(int num){ 
 int cont = 0;
  for(int i = 1;i <= num;i++){
   if(num % i == 0){
    cont = cont+1; 
	} 
	}
	return cont;
	 } 
//////////////////////////////////////////////////////////////////////////////////////////
void dat(double x,int y){ 
cout<< "\n Ingrese un dato entero y real: \n \n";
 cin>> y >> x;
 cout<< "\n El datos ingresados son: \n \n" << x << "\n \n" << y; 
} 
 
//////////////////////////////////////////////////////////////////////////////////////////
float salario(float h, float valorh){
 float x; 
 x = h * valorh;
  return x; 
  } 
//////////////////////////////////////////////////////////////////////////////////////////

/* En este espacio pondremos las funciones de procedimientos que son bastante parecidos a las funciones normales, 
   solo que en procedimientos no se devuelve ningun valor... */ 
   
////////////////////////////////////////////////////////////////////////////////////////////
void areatriangulo (void) {
    float base, altura;
    printf("Introduce base: ");
    scanf("%f",&base);
    printf("Introduce altura: ");
    scanf("%f",&altura);
    
    printf("El area es: %2.2f \n",(base*altura)/2);
}

/*Aqui pondremos los procedimientos para el tema de modularizacion... */

////////////////////////////////////////////////////////////////////////////////////////////
void leerDatos(unsigned& x){
 int n;
 do{
  cout << "Introduce altura de la piramide: ";
  cin >> n;
 }while( n < 1);
 x = n;
}
 
void dibujarFila(unsigned x, unsigned i){
 for(unsigned j = 1; j <= (x-i); j++){
  cout << " ";
 }
 for(unsigned j = 1; j<= i; j++){
  cout << "* ";
 }
 for(unsigned j = 1; j <= (x-i); j++){
  cout << " ";
 }
}
 
void dibujarPiramide (unsigned x){
 for(unsigned i = 1; i <= x; i++){
  dibujarFila(x, i);
  cout << endl;
 }
}
////////////////////////////////////////////////////////////////////////////////////////////
int maximo (int x, int y)
{
if (x>y ) 
	return x ;
else
	return y ;
} ;

////////////////////////////////////////////////////////////////////////////////////////////

int sum(int x,int y){ 
return x+y; 
} 

int resta(int x,int y){ 
return x-y; 
}

////////////////////////////////////////////////////////////////////////////////////////////

void mmayor(int numero1, int numero2, int numero3);

void mmayor(int x, int y, int z)
{
	int resultado;
	if(x>y)
	{
		resultado=x;
	} else 
	{
		resultado=y;
	}
	if (resultado<z)
	{
		resultado=z;
	}
	cout<<"EL Numero Mayor es....: "<<resultado<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////////
void ingresarLetras(int cantidad,char letra[])
{
for(int i=0;i<cantidad;i++)
{
 cout<<"Ingrese letras: ";
 cin>>letra[i];
}
}
void ordenarLetras(int cantidad,char letra[])
{
 int t;
 for(int i=0;i<cantidad;i++)
   for(int j=cantidad-1;j>=1;j--)
    if((letra[j-1]>letra[j]))
    {
         t=letra[j-1];
         letra[j-1]=letra[j];
         letra[j]=t;
    }
}
void reportar(int cantidad,char letra[])
{
 cout<<"Las Letras Ordenadas son:" ;
 for(int i=0;i<cantidad;i++)
 {
  cout<<letra[i]<<" ";
 }
 cout<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////////
int fibonacci(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibonacci(n - 2) + fibonacci(n - 1);
}

////////////////////////////////////////////////////////////////////////////////////////////
int funcio1(int k1, int k2) 
{
	int b;
	if (k1 == k2)
	 	b=k1+k2;
	else
		b=k1*k2;

	printf("b=%d\n",b);
	return b;
} 
////////////////////////////////////////////////////////////////////////////////////////////

/* Esta funcion es para un vector que utilizaremos */
void llenar (int M[20][20], int f, int c)
{
int k=1;
for (int i=1;i<=f;i++)
{
if (i%2!=0)
{
for (int j=1;j<=c;j++)
{
M[i][j]=k; k++;
}
}
else
{
for (int j=c;j>=1;j--)
{
M[i][j]=k; k++;
}
}
}
}

void mostrar (int M[20][20], int f, int c)
{
for (int i=1;i<=f;i++)
{
printf("\n");
for (int j=1;j<=c;j++)
{
printf("[%d] ",M[i][j]);
}
}
}

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
/* Aqui estaran unos struct que usaremos para unos programas en el menu */
struct datoslibros
	{
		char nombre[30];
		char editorial[20];
		char idlibro[20];
		char autor[50];
		char nacionalidad[10];
		char descripcionnacionalidad[100];
		char ideditorial[10];
		char descripcion[100];
		int dia,mes,anio;		
	};	
	
	datoslibros dato;
////////////////////////////////////////////////////////////////////////////////////////
struct nombre
{
	char name1[30];
	char name2[30];
	char ec[10];
};

struct apellido
{
	char ap1[30];
	char ap2[30];
	char ap3[30];
};

apellido ape;
nombre name;
///////////////////////////////////////////////////////////////////////////////////////
struct s_direccion
{
	char calle[20];
	int numero;
	char colonia[30];
	int codigo_postal;
	char ciudad[15];
};
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
/* Aqui esta el login del programa... */

string usuario, password;
   int conta = 0;
   bool ingresa = false;
 
   do {
      system("cls");
      cout << "\t\t\tLOGIN DE USUARIO" << endl;
      cout << "\t\t\t----------------" << endl;
      cout << "\n\tUsuario: ";
      getline(cin, usuario);
 
 
      cout << "\tPassword: ";
      // getline(cin, password);
      char caracter;
      caracter = getch();
 
      password = "";
 
      while (caracter != ENTER) {
 
         if (caracter != BACKSPACE) {
	         password.push_back(caracter);
	         cout << "*";
 
			} else {
				if (password.length() > 0) {
					cout << "\b \b";
					password = password.substr(0, password.length() - 1);
				}
			}
 
			caracter = getch();
      }
 
 
      if (usuario == USER && password == PASS) {
         ingresa = true;
      } else {
         cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
         cin.get();
         conta++;
      }
   } while (ingresa == false && conta < 3);
 
   if (ingresa == false) {
      cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
   } else {
      cout << "\n\n\tBienvenido" << endl;
 
    
 
   }
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Aqui estan las variables que usaremos para los ejercicios...	
	int x,y,i,c,num1,num2,num3,horas,minutos,segundos,f,r,max,combinacion;
//Usaremos unas variables de tipo flotante para el ejercicio 2 del case porque haremos ecuaciones, asi que no sabemos que numeros pondra
//el usuario
	const int tam=10;
 	int vec[tam];

	char linea[100];

	int total;
	int matricula[3][7];
	
	int tablanum[3][3]={0};
	int wr[3][3]={0};
	int may, fmax=0, cmax=0, min, fmin=0, cmin=0;

	int B[3][3]={0};
	int V[3][3]={0};
	int elemento[3][3]={0};	
	
	int numb=2,numerosv[3][3];
	
 	int m[3][3]={1,2,3,4,5,6,7,8,9};

	int habitantesVivienda[5][25];
	int M[20][20];
	float a,b;
	int ej,R,N;	
	int mayor=0;
	int num,resultado,numero1,numero2,numero3;
	int n=10;
	int j,cont,tabla[100];
	float aux, numeros[10];
	int numeros1[5],numeros2[5],numeros3[10];
	int suma=0;
	int P=0;
	int z=1;
	char q;
	int I=0;
	int l=15;
	float p,t; 
	float h, valorh;
	char txt[500];
	
	char cadena[50];
	char caracter;
	int contador;
// Para otros switch especificos
	int estructuras,modularizacion,arreglos;	

//Aqui ponemos los sub-switch que usaremos
	int op,desicion,repeticion,secuencia,funciones,procedimiento,caracteres,vectores,matrices;
//Aqui pondremos los sub-switch entre los sub-switch para escoger los ejercicios que queremos...
	int sif,sifelse,scase,sfor,swhile,sdowhile,sreturn,sfunciones,sproc,svec,smatr,opmod,scarac;
		

	do{
		
		
	cout<<"Estas son sus opciones a elegir..."<<endl<<endl;
	cout<<"Presione la tecla 1 para:    "<<"Estructuras"<<endl;
	cout<<"Presione la tecla 2 para:    "<<"Modularizacion"<<endl;
	cout<<"Presione la tecla 3 para:    "<<"Arreglos"<<endl;
	cout<<"Presione la tevla 4 para     "<<"Salir"<<endl<<endl;
	cout<<"Ingrese la opcion que desea: "<<endl;
	cin>>op;

	cout<<endl;
	switch(op){
	
			
// Aqui esta el swith donde pondremos todos los sub-switch...	
case 1:	
cout<<endl;
	cout<<"Escogio la seccion de Estructuras, a continuacion hay ejercicios de desicion, repeticion y secuencia."<<endl<<endl<<endl;	
	cout<<"Presione 1 para los ejercicios de desision... "<<endl;
	cout<<"Presione 2 para los ejercicios de repeticion... "<<endl;
	cout<<"Presione 3 para los ejercicios de secuencia... "<<endl;		

	cout<<"Elija el tipo que desea: ";
	cin>>estructuras;
	cout<<endl;
	switch(estructuras)
	{
		
		case 1:
			cout<<endl;
			cout<<"Escogio desicion, escoja que tipo de ejercicios quiere probar..."<<endl<<endl<<endl;
				cout<<"Presione 1, para ejercicios IF"<<endl<<endl;
				cout<<"Presione 2, para ejercicios IF-ELSE"<<endl<<endl;
				cout<<"Presione 3, para ejercicios CASE"<<endl<<endl;
			
			cout<<"Ingrese a la seccion que desea ";
			cin>>desicion;
			cout<<endl;
			switch(desicion){
				
				case 1:
					cout<<endl;
		cout<<"Eligio la seccion de IF..."<<endl<<endl;
			cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
					
					cout<<"Presione 1 para... Que lea una hora y la saque en pantalla"<<endl;
					cout<<"Presione 2 para... Saque los multiplos de 5 hasta el 50"<<endl;
					cout<<"Presione 3 para... Mostrar numeros pares"<<endl;
			
			cout<<"Ingrese al ejercicio que desea ";
			cin>>sif;
			cout<<endl;
				switch(sif){
					case 1:
						cout<<endl;
							printf("Introduzca Hora:");
					    scanf("%d",&horas);
					            printf("Introduzca Minutos:");
					    scanf("%d",&minutos);
					            printf("Introduzca Segundos:");
					    scanf("%d",&segundos);
					            
					            segundos=segundos+1;
					            
					            if (minutos>59)
					            {
					       minutos=0;
					    }
					    
					    if (horas>23)
					            {
					       horas=0;
					    }
					            
					            if (segundos>59)
					            {
					       segundos=0;
					       minutos=minutos+1;
					       
					       if (minutos>59)
					       {
					          minutos=0;
					          horas=horas+1;
					          if (horas>23) 
					          {
					             horas=0;
					          }
					       }
					    }
					    
					    printf("La hora (un segundo después) es: %02d:%02d:%02d \n", horas, minutos, segundos);
					    cout<<endl;
					break;
					
					case 2:
						cout<<endl;
						for(i=0;i<50;i++)
								{
  									if(i%5==0)
 								  	{
									cout<<endl<<endl<<i<<endl<<endl;
   									}
								}
						break;	
						
						case 3:
							cout<<endl;
							for(i=0;i<10;i++)
								{
 								 if(i%2==0)
  									 {
										cout<<i<<endl<<endl;
  									 }
								}
					break;	
					
						
					break;	
				}
		break;
		
		break;
	
	
	
		case 2:
			cout<<endl;
			cout<<"Este espacio es para los ejercicios IF-ELSE"<<endl;
			cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
					
				cout<<"Presione 1, para ingressa un numero y le dice si es primo o no es primo"<<endl;
				cout<<"Presione 2, para si el numero es par o impar"<<endl;
				cout<<"Presione 3, para que diga si el numero es positivo o negativo"<<endl;
			
			cout<<"Ingrese al ejercicio que desea ";
			cin>>sifelse;
			cout<<endl;
				switch(sifelse){
			
				case 1:
					cout<<endl;
					cout<<"Introduzca numero del 1 al 5: "<<endl;
   					scanf("%d",&i);

    					if (i!=4) {
    						cout<<"Es primo."<<endl<<endl;
    					}
    					else
    					{
    						cout<<"No es primo."<<endl<<endl;
   						}
				break;
				
				case 2:
					cout<<endl;
					printf("Introduzca numero: ");
   					scanf("%d",&i);

    				if (i%2==0) {
    					cout<<"Es par."<<endl<<endl;
   					}
    				else
    				{
   						cout<<"Es impar"<<endl<<endl;;
    				}
				break;
				
				case 3:
					cout<<endl;
					cout<<"Introduzca un numero: "<<endl;
    				scanf("%d",&num1);
   
    				if (num1>0){
      					cout<<"Es positivo"<<endl<<endl;
    				}
    				else 
						if (num1<0){
      						cout<<"Es negativo"<<endl<<endl;
    				}    
    				else
    				{
        					cout<<"Es cero"<<endl<<endl;;
    				}
				break;			
			
			}
			
			
		break;
		
		
		
		case 3:
			cout<<endl;
			cout<<"Este espacio es para los ejercicios CASE"<<endl;
			cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
					
				cout<<"Presione 1, para operaciones de dos numeros"<<endl;
				cout<<"Presione 2, ingresar un numero y lo tira como dia de la semana"<<endl;
					
					cout<<"Ingrese al ejercicio que desea ";
			cin>>scase;
			cout<<endl;
				switch(scase){
					
					case 1:
						cout<<endl;
						cout<<"Elija la opcion que desea \n"<<endl;
							
							cout<<"Sumar dos numeros, presione 1"<<endl;
							cout<<"Restar dos numeros, presione 2"<<endl;
							cout<<"Multiplicar dos numeros, presione 3"<<endl;
							cout<<"Dividir dos numeros, presione 4"<<endl;
							cout<<"Salir del programa con 5"<<endl;
							
							cout<<"Ingrese la opcion que desea: ";
							cin>>i;
							switch(i){
	
								case 1:
								c=a+b;
								cout<<c<<endl;
									break;		
								case 2:
								c=a-b;
								cout<<c<<endl;
									break;
								case 3:
								c=a*b;
								cout<<c<<endl;
									break;
								case 4:
								c=a/b;
								cout<<c<<endl;
									break;
								default:
								cout<<"Gracias por intentar"<<endl;
									break;	
								}
					break;
					
					case 2:
						cout<<endl;
							printf("Introduzca numero del 1 al 7:");
  					    scanf("%d",&i);
					
					    switch(i){
					              case 1:
					                   cout<<"Lunes\n"<<endl<<endl;
					                   break;
					              case 2:
					                   cout<<"Martes\n"<<endl<<endl;
					                   break;
					              case 3:
					                   cout<<"Miercoles\n"<<endl<<endl;
					                   break;
					              case 4:
					                   cout<<"Jueves\n"<<endl<<endl;
					                   break;
					              case 5:
					                   cout<<"Viernes\n"<<endl<<endl;
					                   break;
					              case 6:
					                   cout<<"Sabado\n"<<endl<<endl;
					                   break;
					              case 7:
					                   cout<<"Domingo\n"<<endl<<endl;
					                   break;
					              default:
					                   cout<<"Opción no valida\n"<<endl<<endl;
					                   break;
					               }						
									
								}
					break;
		
	}
		
		break;
		
		case 2:
			cout<<endl;
			cout<<"Escogio repeticion, escoja que tipo de ejercicio quiere probar..."<<endl<<endl<<endl;
			cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
				
				cout<<"Presione 1, para ejercicios FOR"<<endl<<endl;
				cout<<"Presione 2, para ejercicios WHILE"<<endl<<endl;
				cout<<"Presione 3, para ejercicios DO-WHILE"<<endl<<endl;
			
			cout<<"Ingrese a la seccion que desea ";
			cin>>repeticion;
			cout<<endl;
			switch(repeticion){
				
				case 1:
					cout<<endl;
					cout<<"Este espacio es para los ejercicios FOR"<<endl<<endl;
					cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
					
						cout<<"Presione 1, para serie de numeros primos"<<endl;
						cout<<"Presione 2, para contar de 1 a 10"<<endl;
						cout<<"Presione 3, para el algoritmo que repite el texto"<<endl;
					
					cout<<"Ingrese al ejercicio que desea ";
					cin>>sfor;
					cout<<endl;
					switch(sfor){
						
						case 1:
							cout<<endl;
							cout<<"ingrese el numero limite"<<endl;
							cin>>max;
	
							for(int j=2;j<=max;j++)
							{
		
 							int a=0;
 	
 								for(int i=1;i<=max;i++)
 							{
    							if(j%i==0)
    							a++;
 							}
 								if (a==2) 
 							{ 
							 	cout<<j<<endl;
 							}
 								}
						break;
						
						case 2:
						
						cout<<endl;
   						 for( contador=1; contador<11 ; contador++ ) {
       						 printf("\n%d",contador);
  						  };
    						return 0;
						break;	
						
						
						case 3:
							cout<<"Ingrese el texto que desea reptir..."<<endl;
							cin.getline(txt,500);
							cout<<endl<<endl;
							for(i=0;i<5;i++)
								cout<<txt<<endl;
						break;
						
					}
					
				break;	
				
				
				case 2:
		
					cout<<endl;
					cout<<"Este espacio es para los ejercicios WHILE"<<endl<<endl;
					cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
					
						cout<<"Presione 1, para ingresar serie de numeros y tener la suma de esta"<<endl<<endl;
						cout<<"Presione 2, para igualar a 1 cualquier numero"<<endl<<endl;
						cout<<"Presione 3, para ingresa un numero y suma sus digitos"<<endl<<endl;
					
					cout<<"Ingrese al ejercicio que desea ";
					cin>>swhile;
					cout<<endl;
					switch(swhile){
						
						case 1:
							
						cout<<endl<<endl;
						int serie,n;
						cout<<"Ingrese el ultimo termino de la serie: ";
						cin>>n;
						suma=0;
						serie=2;
						cout<<"S = ";
						while(serie<=n){ 
						cout<<serie<<",";
						suma = suma + serie;
						serie = serie + 2; 
						}
						cout<<endl<<endl;
						cout<<"La suma de la serie es = "<<suma<<endl<<endl;
						break;
						
						case 2:
							
						cout<<endl<<endl;
						int i,j,k,suma;
							cout<<"Ingrese el numero de terminos: ";
							cin>>n;
							i=1; 
							j=2;
							 k=1; 
							 suma=0;
							cout<<"S = ";
							while
							(i<=n)
							{ 
							if(i%2==0)
							{
							 cout<<j<<","; 
							}
							else
							{ 
							cout<<k<<","<<endl<<endl; 
						break;
						
						case 3:
							
						cout<<endl<<endl;
						int n,dig,suma;
						cout<<"Ingrese un numero: ";
						cin>>n;
						suma=0;
						while(n!=0)
						 { 
						 dig=n%10;
						 n=n/10;
						 suma = suma + dig;
						 cout<<"\t"<<dig<<endl; 
						 }
						cout<<"\nLa suma de sus digitos es : "<<suma<<endl<<endl;
						cout<<endl<<endl;
						break;	
					}
				}
			}
				break;
				
				
				case 3:
					cout<<endl;
					cout<<"Este espacio es para los ejercicios DO-WHILE"<<endl<<endl;
					cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
					
						cout<<"Presione 1, para mostrar cuantos numeros pares y cuantos impares ingreso"<<endl<<endl;
						cout<<"Presione 2, para mostrar una suma de cuadrados"<<endl<<endl;
						cout<<"Presione 3, para el factorial de un numero entero"<<endl<<endl;
						
						cout<<"Ingrese al ejercicio que desea ";
					
					cin>>sdowhile;
					cout<<endl;
					switch(sdowhile){
						
						case 1:	
						
							 cout<<"Ingrese Numero:";
							 cin>>N;
							 if(N%2==0)
							  P=P+1;
							  else
							  I=I+1;
							
							 while (N>0)
							  {
							  cout<<"Ingrese Numero:";
							  cin>>N;
							
							  if(N%2==0)
							      P=P+1;
							    else
							      I=I+1;
							   }
							      cout<<"La Cantidad de Numeros Pares Es:\a"<<P<<endl;
							      cout<<"La Cantidad de Numeros Impares Es:\a"<<I<<endl;
						break;
						
						case 2:
						
							do{
							cout<<"Ingrese La Cantidad de Numeros:"<<endl;
							 cin>>N;
							 }
							 while(N<0);
							 R=N*(N+1)*(2*N+1)/6;
							
							      cout<<"La Suma de los Cuadrados de los Numeros Es:\a"<<R<<endl;

						break;
						
						case 3:
							do
							 { cout<<"Ingrese Un Numero:";
							  cin>>N;
							}
							
							while(N<=0);
							
							
							 for (i=1;i<=N;i++)
							      z=z*i;
							
							cout<<"El Factorial del Numero Es:"<<z;
 
						break;	
						
					}
				break;	
				
		 }
		break;
	
		case 3:
			cout<<endl;
			cout<<"Escogio secuencia, escoja que tipo de ejercicio quiere probar..."<<endl<<endl;
			cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
			
			cout<<"Presione 1, para mostrar los numeros impares de un rango"<<endl<<endl;
			cout<<"Presione 2, para ingresar 2 numeros y los muestre de mayor a menor"<<endl<<endl;
			cout<<"Ingrese al ejercicio que desea ";
 			cin>>sreturn;
 			switch(sreturn){
 				
 				case 1:
 					int min;
 					 printf("Introduzca el valor de M valor minimo en el rango: ");
			    scanf("%d",&min);
			
			    printf("Introduzca el valor de N valor maximo en el rango: ");
			    scanf("%d",&max);
			
			    printf("Los numeros impares en el rango indicado son: ");
			    for(num = min;num <= max; num++)
			
			         if(num % 2 !=0)
           		  printf("%d ",num);


				return 0;
				break;
				 
				case 2:
						 printf("Introduzca un número:");
					    scanf("%d",&num1);
					   
					    if (num1>100){
					       printf("Es mayor\n");
					    }
					    else
					    {
					       printf("Es menor\n");
					    }
					       
					    return 0;
				break;
				 	
			 }
		break;	
	
}

//Aqui termina el primer case...	
break;

case 2:
	cout<<endl;
cout<<"Escogio la seccion de Modularizacion, a continuacion hay ejercicios de Funciones y Procedimientos."<<endl<<endl;
cout<<"Presione 1, para ejercicios de Funciones..."<<endl;	
cout<<"Presione 2, para ejercicios de Procedimientos..."<<endl;

cout<<"Ingrese a la seccion que desea ";
	cin>>modularizacion;	
	cout<<endl;
	switch(modularizacion){
		
			
		case 1:
			cout<<endl;
			cout<<"Escogio la opcion de funciones"<<endl<<endl<<endl;	
			cout<<"A continuacion esta el listado de ejercicios con funciones..."<<endl<<endl;			
			
			cout<<"Presione 1, Ingresa un numero entero y escriba la tabla de multiplicar de ese numero"<<endl<<endl;
			cout<<"Presione 2, Calcule el area de un cuadrado"<<endl<<endl;
			cout<<"Presione 3, Permita introducir una medida expresada en centimetros la convierta en pulgadas"<<endl<<endl;
			cout<<"Presione 4, Ingresa un numero y devuelva el valor 1 si es un numero primo o 0"<<endl<<endl;
			cout<<"Presione 5, Ingresar un dato entero y un dato real y visualizar los datos ingresados"<<endl<<endl;
			cout<<"Presione 6, Calcula su salario"<<endl<<endl;
			cout<<"Presione 7, Calcular cual es el numero menor de dos numeros enteros"<<endl<<endl;
			cout<<"Presione 8, Ingresar un numero y calcule el cubo del numero"<<endl<<endl;
		
		cout<<"Ingrese al ejercicio que desea ";
			cin>>sfunciones;		
			cout<<endl;
			switch(sfunciones){
				
				case 1:
						printf("\n Ingrese un numero: \n \n");
						 scanf("%d",&x);
						   printf("\n La tabla de multiplicar del numero ingresado es: \n \n");
						   imp(x);
						   return 0;
				break;	
				
				case 2:
					 printf("\n Ingrese la base del rectangulo: \n \n ");

					scanf("%f",&b); 
					 printf("\n Ingrese la altura del rectangulo: \n \n ");
					  scanf("%f",&h); 
					   printf("\n El area del rectangulo es: %.3f \n \n ",area(b,h)); 
					    printf("\n Y el perimetro del rectangulo es: %.3f \n \n ",perim(b,h));
						 return 0; 
	 
				break;
				
				case 3:
					 printf("\n Ingrese la medida en centimetros: \n \n"); 
					  scanf("%f",&p); 
					   printf("\n %.3f centimetros es igual a %.3f pulgadas \n \n",p,convertor(p));
					    return 0; 
				break;
				
				case 4:
					cout<<"\n Ingrese el numero: \n \n"<<endl;
					 cin>>num;
					 cout<<endl;
					  if(proc(num) == 2){
					   cout<<"\n \n \n 1 \n \n \n"<<endl;
					    }
						 else
						 { 
						 cout<<"\n \n \n 0 \n \n \n"<<endl;
						  }
						  return 0;
				break;
				
				case 5:							
					double x; 
					int y; 
					dat(x,y); 
					return 0;
				break;
				
				case 6:
					 printf("\n Ingrese las horas trabajadas: \n \n"); 
					   scanf("%f",&h); 
					   printf("\n Ingrese el valor por hora de trabajo, en dolares: \n \n"); 
					   scanf("%f",&valorh); 
					   printf("\n Su salario es: $%.2f \n \n",salario(h,valorh));
					    return 0; 
				break;
				
				case 7:
					printf("\n Ingrese dos numeros: \n \n");
 
					 proc(a,b); 
					 return 0; 
				break;
				
				case 8:
					printf("\n Ingrese un numero: \n \n");  

					proc(a,b); 

					return 0;
				break;
							
			}
		break;
		
		case 2:
			cout<<endl;
				cout<<"Este espacio es para los ejercicios procedimiento"<<endl;
				cout<<"Aqui esta el listado de ejercicios seleccione el ejercicio que desea probar..."<<endl<<endl;
			
			cout<<"Presione 1, para area de un triangulo con datos de tipo flotante"<<endl<<endl;
			cout<<"Presione 2, para crear la piramide de pascal"<<endl<<endl;
			cout<<"Presione 3, para potencia de numeros"<<endl<<endl;
			cout<<"Presione 4, para sumar y restar dos enteros"<<endl<<endl;
			cout<<"Presione 5, para mostrar el numero mayor"<<endl<<endl;
			cout<<"Presione 6, para ordenar letras"<<endl<<endl;
			cout<<"Presione 7, para crear la susecion de Fibonacci"<<endl<<endl;
			cout<<"Presione 8, para cambiar datos entre dos variables"<<endl<<endl;
			cout<<"Ingrese al ejercicio que desea ";
			
			cin>>procedimiento;
			cout<<endl;
			switch(procedimiento){
				
				case 1:
					areatriangulo();
 
 					 return 0;
				break;
				
				
				case 2:
					unsigned x;
					 leerDatos(x);
					 dibujarPiramide(x);
					 return 0;
				break;	
				
				
				case 3:
									
				printf ("Escribe los numeros:\n");
				scanf ("%d %d",&a,&b);
				max = maximo (a,b);
				printf ("El maximo es %d\n",max);
				
				return 0;
				break;
				
				
				case 4:
					
						cout<<"“Ingrese el primer numero:”"; 
						cin>>num1; 
						cout<<"“Ingrese el segundo numero:”"; 
						cin>>num2; 
						cout<<"“Que desea hacer: \n1-Sumar \n2-Restar \nIngrese el numero de opcion y presione enter:\n”"; 
						
						cin>>opmod; 
						
						
						switch(opmod){ 
						case 1: 
						resultado=sum(num1,num2); 
						cout<<"El resultado es: "<<resultado; 
						
						break; 
						case 2: 
						resultado=resta(num1,num2); 
						cout<<"“El resultado es: “ "<<resultado; 
						
						break; 
						default: 
						cout<<" “Esa opcion no es valida” "; 
						break; 
						} 
						
						cin.ignore(); 
						cin.get(); 
						return 0; 
				break;
				
				
				case 5:
					cout<<"ingrese 3 numeros: "<<endl;
					cin>>numero1>>numero2>>numero3;
					mmayor(numero1,numero2,numero3);
					
					return 0;
				break;
				
				
				case 6:
					 char  letra[30];
					   int cantidad;
					   cout<<"ingrese Tres Letras:"<<endl;
					   cantidad=3;
					   ingresarLetras(cantidad,letra);
					   ordenarLetras(cantidad,letra);
					   reportar(cantidad,letra);
					  
					   return 0;

				break;
				
				
				case 7:
					cout<<"********************************"<<endl;
				    cout<<"\n         FIBONACCI \n\n";
				    cout<<"********************************"<<endl;
				    cout<<endl;
				    int i, num ;
				    
				    do
				    {
				        cout<<"Ingrese un numero entero y positivo: ";
				        cin>>num;
				        
				    } while(num < 0);
				    
				    cout<<"\nLa serie es: \n\n\t";
				    
				    for(i=0; i<num; i++)
				    {
				       if(fibonacci(i) != 0)
				          cout<< ", "; 
				        
				        cout<< fibonacci(i);       
				    }
				    return 0;
				break;
				
				
				case 8:
					a= 10;
					b= 12;
					c= funcio1(a,b);
					printf("a=%d b=%d c=%d\n",a,b,c);
					a= funcio1(12,b);
					printf("a=%d b=%d c=%d\n",a,b,c);
					return 0;
				break;	
			}
			
		break;
		
	}
//Aqui termina el segundo case...
break;




//Aqui esta el tercer case del switch original...
case 3:
	cout<<endl;
cout<<"Escogio la seccion de Arreglos, a continuacion hay ejercicios de Caracteres, Vectores y Matrices."<<endl<<endl;

	cout<<"Presione 1, para ejercicios de caracteres..."<<endl;
	cout<<"Presione 2, para ejercicios de vectores..."<<endl;
	cout<<"Presione 3, para ejercicios de matrices..."<<endl;
	
	cout<<"Ingrese la seccion de ejercicios a la cual desea entrar ";
	
cin>>arreglos;
cout<<endl;
switch(arreglos){

		case 1:
			cout<<endl;
			cout<<"Esta es la seccion de Caracteres"<<endl<<endl;
			
				cout<<"Presione 1, para que sólo permita introducir los caracteres S y N.  "<<endl;
				cout<<"Presione 2, para programa que saca la palabra HOLA"<<endl;
				cout<<"Presione 3, para saca en pantalla dos nombres"<<endl;
				cout<<"Presione 4, para buscar una letra guardada en memoria"<<endl;
				cout<<"Presione 5, para pedir una cadena de caracteres e indicar si es un palindromo"<<endl;
				cout<<"Presione 6, para muestra en pantalla nombres, utilizando espacios"<<endl;
				cout<<"Presione 7, para mostrar el domicilio de una persona"<<endl;
				cout<<"Presione 8, para ingresar datos de un libro y luego mostrarlos"<<endl;
			
			cout<<"Elija el ejercicio que desea ";
			cin>>caracteres;
			cout<<endl;
			switch(caracteres){
				case 1:
					printf("Introduzca un carácter:");
		            scanf("%c",&q);
		   
					if (q=='s' || c=='n' ){
		        	printf("Es correcto\n");
		            }
		            else
					{
		            printf("Es incorrecto\n");
					}
				break;
						
						
				case 2:	
				char cadena1[4];
				cadena1[0]='h'; cadena1[1]='o'; cadena1[2]='l'; cadena1[3]='a';
				printf("La palabra en la variable cadena1 es: %c%c%c%c \n", cadena1[0],cadena1[1],cadena1[2],cadena1[3]);
				return 0;
				break;	
				
				
				case 3:
					typedef char TipoCadena[50];
					TipoCadena nombre1;
					TipoCadena nombre2;
					nombre1[0]='S'; nombre1[1]='a'; nombre1[2]='m';
					nombre2[0]='J'; nombre2[1]='o'; nombre2[2]='e';nombre2[3]='l';
					printf("El nombre 1 es %c%c%c \n", nombre1[0], nombre1[1], nombre1[2]);
					printf("El nombre 2 es %c%c%c%c \n", nombre2[0], nombre2[1], nombre2[2], nombre2[3]);
					return 0;
				break;
				
				
				case 4:
					cout<<"Introduce una cadena"<<endl;
					cin.ignore(256,'\n');
					cin.getline(cadena,50)>>cadena;
					cout<<"Introduce el caracter a contar"<<endl;
					cin>>caracter;
					contador=0;
					for(i=0;i<strlen(cadena);i++){
						if(cadena[i]==caracter){
							contador++;
						}
					}
			cout<<"El caracter "<<caracter<<"aparece "<<contador<<"veces... "<<endl;
				break;
				
				
				case 5:
					{
					
				cout<<"Introduce una cadena"<<endl;
				cin.ignore(256,'\n');
				cin.getline(cadena,256);
				for(i=0;i<strlen(cadena);i++){
				if(cadena[i]==' '){
					for(j=i+1;j<=strlen(cadena);j++){
						cadena[j-1]=cadena[j];
					}
					i--;
					}
				}
				cout<<cadena<<endl;
				int j= strlen(cadena)-1;
				bool enc=false;
				for(i=0;i<strlen(cadena)/2;i++){
					if(cadena[i]!=cadena[j]){
					enc=true;
					cout<<"No es palindromo"<<endl;
				}
				j--;
			}
			if(enc==false){
				cout<<"Es palindromo"<<endl;
			}
			   	break;	
		}
				case 6:
										
					strcpy(name.name1,"Jose");
					strcpy(ape.ap1," Lopez");
					
					strcpy(name.name2,"Julio");
					strcpy(ape.ap2," Rodriguez");
					
					cout<<"Nombre: "<<strcat(name.name1,ape.ap1)<<endl;
					cout<<"Nombre: "<<strcat(name.name2,ape.ap2)<<endl;
					
					cin.getline(linea,100);
					
					cout<<linea<<endl;
					
				break;	
			
				case 7:
					
					s_direccion domicilioMario;
					s_direccion domicilioBeto;
					
					
					strcpy(domicilioMario.calle,"de la amargura");
					domicilioMario.numero=1000;
					
					strcpy(domicilioMario.colonia,"De la llorona");
					domicilioMario.codigo_postal=03045;
					
					strcpy(domicilioMario.ciudad,"Antigua");
					strcpy(domicilioBeto.ciudad,"San Pedro");
					
					cout<<"Pedro vive en: "<<domicilioBeto.ciudad<<endl;
					cout<<"Mario vive en la colonia: "<<domicilioMario.colonia<<endl;
					
				break;
				
				case 8:	

					printf("Nombre del libro: \n",i);
					scanf("%s",dato.nombre);
					
					printf("Autor: \n",i);
					scanf("%s",dato.autor);
					
					printf("\nFecha: ");
					printf("Dia:\n");
					scanf("%d",&dato.dia);
					
					printf("Mes\n:");
					scanf("%d",&dato.mes);
					
					printf("Anio\n: ");
					scanf("%d",&dato.anio);
						
					printf("Nombre de la editorial: \n",i);
					scanf("%s",dato.editorial);
					
					printf("Descripcion: \n",i);
					scanf("%s",dato.descripcion);
							
				
					cout<<"El libro es: "<<dato.nombre<<endl;
					cout<<"El autor del libro es: "<<dato.autor<<endl;
					cout<<"La fecha de lanzamiento fue: "<<dato.dia<<dato.mes<<dato.anio<<endl;
					cout<<"La editorial es: "<<dato.editorial<<endl;
					cout<<"Esta es la descripcion del libro: "<<endl<<dato.descripcion<<endl;
				break;	
				
			}
			
			
		break;
		
		case 2:
			cout<<endl;
			cout<<"Esta es la seccion de Vectores"<<endl<<endl;
			
			cout<<"Presione 1, para rellenar tabla y lo muestre de forma ascendente"<<endl;
			cout<<"Presione 2, para llenar tabla de numeros enteros y los muestre de forma descendente"<<endl;
			cout<<"Presione 3, para mostrar de forma ascendente los numeros primos de 100 a 0 "<<endl;
			cout<<"Presione 4, para mostrar de forma ascendente los numeros impares de 100 a 0 "<<endl;
			cout<<"Presione 5, para que lea 10 numeros y muestre la suma, resta, multiplicacion y division de todos"<<endl;
			cout<<"Presione 6, para que lea 10 numeros por teclado, los almacene en un array y los ordene de forma ascendente"<<endl;
			cout<<"Presione 7, para que lea 5 numeros multiplicados por 2 y los muestre todos ordenados"<<endl;
			cout<<"Presione 8, para que almacene numeros tanto positivos como negativos y los muestre ordenados"<<endl;
			
			cout<<"Seleccione el ejercicio que desea ";
			cin>>vectores;
			cout<<endl<<endl;
			switch(vectores){
				
				case 1:
					 int x,tabla[100];
           
        		  	  for (x=1;x<=100;x++)
        		    {
		   		     tabla[x]=x;
		    
		           
		            for (x=1;x<=100;x++)
		            {
		        printf("%d\n",tabla[x]);
		  	  return 0;

				break;	
				
				
				case 2:
           
        	    for (x=1;x<=100;x++)
        	    {
			        tabla[x]=x;
			    }
			           
			            for (x=100;x>=1;x--)
			            {
			        printf("%d\n",tabla[x]);
			    }
				break;
				
				
				case 3:
				
           
            i=0;
            for (x=1;x<=100;x++)
            {
        cont=0;
        for (z=1;z<=x;z++)
        {
            if (x%z==0)
            {
               cont++;
            }
        }
       
        if (cont==2 || z==1 || z==0)
        {
         tabla[i]=x;
         i++;
        }
       
    }
           
            for (x=0;x<i;x++)
            {
        printf("%d\n",tabla[x]);
    }
				break;	
				
				
				case 4:
           
            i=0;
            for (x=1;x<=100;x++)
            {
        cont=0;
        if (x%2==1)
        {
           tabla[i]=x;
           i++;
        }
    }
           
            for (x=0;x<i;x++)
            {
        printf("%d\n",tabla[x]);
    }
				break;
				
				
				case 5:
					 
            int sum,res,mul,div;
           
            for (x=0;x<10;x++)
            {
        printf("Introduzca número\n");
        scanf("%d",&tabla[x]);
    }
            
            sum=tabla[0];
    res=tabla[0];
    mul=tabla[0];
    div=tabla[0];
            
            for (x=1;x<10;x++)
            {
        sum=sum+tabla[x];
        res=res-tabla[x];
        mul=mul*tabla[x];
        div=div/tabla[x];
    }
            
            printf("Suma: %d\n",sum);
            printf("Resta: %d\n",res);
            printf("Multiplicación: %d\n",mul);
            printf("División: %d\n",div);
                
    return 0;
				break;
				
				
				case 6:

  for (i=0;i<n;i++){
                    printf("Escriba un número");
                    scanf("%f",&numeros[i]);
      }

  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
   {
       if(numeros[i]<numeros[j])
       {
           aux=numeros[i];
           numeros[i]=numeros[j];
           numeros[j]=aux;
       }
   }
  }
 
  for (i=n-1;i>=0;i--){
      printf("%f\n",numeros[i]);
  }
        
  return 0;
				break;
				break;
				
				
				case 7:
				
  

 					for (i=0;i<5;i++){
                    printf("Escriba un número");
                    scanf("%d",&numeros1[i]);
     				 }
     
					  for(i=0;i<5;i++)
					  {
					   numeros2[i]=numeros1[i]*2;
					  }
					 
					  for(i=0;i<5;i++)
					  {
					   numeros3[i]=numeros1[i];
					  }
					 
					  for(i=0;i<5;i++)
					  {
					   numeros3[5+i]=numeros2[i];
					  }
					 
					  for (i=0;i<10;i++){
					      printf("%d\n",numeros3[i]);
					  }     
					  return 0;
				break;
				break;
				
				case 8:
				
 					 for (i=0;i<n;i++){
                    printf("Escriba un número");
                    scanf("%f",&numeros[i]);
      				}

 	 				for(i=0;i<n-1;i++)
  					{
  					 for(j=i+1;j<n;j++)
  						 {
       					if(numeros[i]<numeros[j])
     					  {
				           aux=numeros[i];
				           numeros[i]=numeros[j];
				           numeros[j]=aux;
				       }
  					 }
 				 }
 
			  for (i=n-1;i>=0;i--){
			      printf("%f\n",numeros[i]);
			  }
  
  return 0;
				break;
				
			}
		}
	}
		break;
	
		case 3:
			cout<<endl;
			cout<<"Esta es la seccion de Matrices"<<endl<<endl;
			
			cout<<"Presione 1, para ingresar una matriz que usted desee"<<endl;
			cout<<"Presione 2, para muestra una matriz pre definida"<<endl;
			cout<<"Presione 3, para ingresa 10 enterios y saca en pantalla las casillas pares"<<endl;
			cout<<"Presione 4, para imprimir total de alumnos matriculados por asignatura"<<endl<<endl;
			cout<<"Presione 5, para programa que nos dice los valores maximos y minimos y sus posiciones dentro de una matriz"<<endl;
			cout<<"Presione 6, para programa que suma dos matrices"<<endl;
			cout<<"Presione 7, para busqueda lineal en una matriz"<<endl;
			cout<<"Presione 8, para ingresar numeros pares y despues que pida una posicion X,Y"<<endl;
			
			cout<<"Seleccione el ejercicio que desea ";
			cin>>matrices;
			cout<<endl<<endl;
			switch(matrices){
				
				case 1:
					printf("Inserte filas de M: "); scanf("%d",&f);
					printf("Inserte columnas de M: "); scanf("%d",&c);
					llenar(M, f, c);
					mostrar(M, f, c);
					
					return 0;
				break;
				
				
				case 2:
					habitantesVivienda[3][24] = 4;
					printf("El numero de personas que viven en la vivienda 24 del piso 3 es %d\n", habitantesVivienda[3][24]);
					return 0;
				break;
				
				
				case 3:
					cout<<"Ingrese 10 enteros"<<endl;
					 for (i=1;i<=tam;i++)
					 { cin>>a;
					  vec[i]=a;
					  }
					  cout<<"Las casillas pares serian: "<<endl;
					  for (i=1;i<=tam;i++){
					 if (i%2==0){
					 cout<<"   "<<vec[i]<<endl;
					  }
					 }
				break;
				
				
				case 4:
					 for (i=0; i<=3; i++) 
					 for (j=0; j<=7; j++){
					 printf("Introduce el numero de alumnos matriculados para curso %d y asignatura %d:\n", i+1, j);
					 scanf("%d", &matricula [i] [j]);
					 }
					 for (j=0; j<=7; j++)
					 {
					 total=0;
					 for (i=0; i<=3; i++)
					 total=total+matricula [i] [j];
					 printf("Total de alumnos de asignatura %d es: %d\n", j, total);
					
					 }
				break;
				
				
				case 5:
					for (i=0;i<3;i++)
						 {
						 for (j=0;j<3;j++)
						 {
						 printf ("Introduce un numero: ");
						 scanf ("%d", &tablanum[i][j]);
						 }
						 }
						 may= tablanum[0][0];
						 min= tablanum[0][0];
						
						 for (i=0;i<3;i++)
						 {
						 for (j=0;j<3;j++)
						 {
						 if (tablanum[i][j]>may)
						 {
						 may=tablanum[i][j];
						 fmax=i;
						 cmax=j;
						 }
						 if (tablanum [i][j]<min)
						 {
						 min=tablanum[i][j];
						 fmin=i;
						 cmin=j;
						 }
						 }
						 }
						 printf ("El mayor es: %d y su posicion es: %d fila y %d columna\n", may, fmax,
						cmax);
						 printf ("El menor es: %d y su posicion es: %d fila y %d columna\n", min, fmin,
						cmin);
						
				break;
				
				
				case 6:
					for(i=0; i<3; i++){
					 for (j=0; j<3; j++){
					 printf("\n Introduce la cifra [%d] [%d] para rellenar la matriz 1: ",i, j);
					 scanf("%d", &B[i][j]);
					 }
					 }
					
					 for(i=0; i<3; i++){
					 for (j=0; j<3; j++){
					 printf("\n Introduce la cifra [%d] [%d] para rellenar la matriz 2: ",i, j);
					 scanf("%d", &V[i][j]);
					 }
					 }
					
					printf("\n Ahora vamos a sumar las matrices: \n\n");
					
					 for(i=0;i<3;i++){
					 for (j=0;j<3;j++){
					 printf("%3d", V[i][j]);
					 }
					 printf("\n");
					 }
					 printf("\n +\n\n");
					
					 for(i=0; i<3; i++){
					 for (j=0; j<3; j++){
					 printf("%3d", B[i][j]);
					 }
					 printf("\n");
					 }
					 printf("\n =\n");
					
					
					 for(i=0; i<3; i++){
					 for (j=0; j<3; j++){
					
					 elemento[i][j]=B[i][j]+V[i][j];
					 }
					 }
					
					 for(i=0; i<3; i++){
					 for (j=0; j<3; j++){
					 printf("%3d",elemento[i][j]);
					 }
					 printf("\n");
					 }
				break;
				
				
				case 7:
					for (i=0; i<3; i++)
					 {
					 for (j=0; j<3; j++)
					 printf("%d",m[i][j]);
					 printf("\n");
					 }
					 printf("Introduce un valor a buscar: ");
					 scanf("%d", &x);
					 f=-1;
					 do
					 {
					 f=f+1;
					 c=-1;
					 do
					 {
					 c=c+1;
					 }
					 while ((m[f][c]!=x) && (c!=n-1));
					 }
					 while ((m[f][c]!=x) && (f!=3-1));
					
					 if (m[f][c]==x)
					 printf("Encontrado en fila %d y columna %d", f, c);
					 else
					 printf("No existe el valor buscado");
					 
				break;
				
				
				case 8:
					for (x=0;x<3;x++)
			    	{
			        for (y=0;y<3;y++)
			        {
			            numerosv[x][y]=numb;
			            numb=numb*2;
			        }
			   		}
    
				    printf("Introduzca coordenada x: ");
				    scanf("%d",&x);
				    printf("Introduzca coordenada y: ");
				    scanf("%d",&y);
				    
				    printf("El número es: %d\n",numerosv[x][y]);
				break;
				
			
		
		break;
	
		
	
}
		
//Aqui termina el tercer case
break;	

//Ponemos un default para que salga del programa...	
default:
	cout<<endl;
	cout<<endl;
	cout<<"Gracias por utilizar el menu de algoritmos..."<<endl;
	
break;	
  }
}

}while(op!=4);

cin.get();

system("pause");	
getchar();	
}
